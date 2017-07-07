//利用栈的数据结构，将二进制数转换成十进制数
#include<stdlib.h>
#include<math.h>
#define STACK_INIT_SIZE 20
#define STACKINCREMENT 10
typedef char ElemType;
typedef struct{
    ElemType *base;
    ElemType *top;
    int stacksize;
}sqStack;

initStack(sqStack *s){
    //从内中开辟一段连续空间作为栈空间，首地址赋给s->base
    s->base=(ElemType *)malloc(STACK_INIT_SIZE*sizeof(ElemType));
    s->top=s->base;
    s->stacksize=STACK_INIT_SIZE;
}
Push(sqStack *s,ElemType e){
    if(s->top-s->base>=s->stacksize){
        //栈满追加空间
        s->base=(ElemType *)realloc(s->base,(s->stacksize+STACKINCREMENT)*sizeof(ElemType));
        if(!s->base)exit(0);
        s->top=s->base+s->stacksize;
        s->stacksize=s->stacksize+STACKINCREMENT;
    }
    *(s->top)=e;
    s->top++;
}
Pop(sqStack *s,ElemType *e){
    if(s->top==s->base){
        return;
    }
    *e=*--(s->top);
}
int StackLen(sqStack s){
    return (s.top-s.base);
}
int main(){
    ElemType c;
    sqStack s;
    int len,i,sum=0;
    printf("请输入一个二进制字串\n");
    initStack(&s);
    //输入0/1字符表示的二进制数，以#结束
    scanf("%c",&c);
    while(c!='#'){
        Push(&s,c);
        scanf("%c",&c);
    }
    getchar();
    len=StackLen(s);
    for(i=0;i<len;i++){
        Pop(&s,&c);
        sum=sum+(c-48)*pow(2,i);//转换为十进制
    }
    printf("十进制数为：%d\n",sum);
    getche();
}
