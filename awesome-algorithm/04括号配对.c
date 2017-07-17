//²Î¿¼£ºhttp://blog.csdn.net/the_victory/article/details/52733985
#include<stdio.h>
#include<stdlib.h>
typedef struct StackNode{
    char data;
    struct StackNode *next;
}StackNode,*LinkP;

typedef struct LinkStack{
    LinkP top;
    int count;
}LinkStack;
//Ñ¹Õ»
int push(LinkStack *S,char e){
    LinkP p=(LinkP)malloc(sizeof(struct StackNode));
    p->data=e;
    p->next=S->top;
    S->top=p;
    S->count++;
    return 0;
}
//³öÕ»
int pop(LinkStack *S){
    LinkP p;
    char e=S->top->data;
    p=S->top;
    S->top=S->top->next;
    free(p);
    S->count--;
    return e;
}

//Çå¿ÕÕ»
int ClearStack(LinkStack *S){
    LinkP p;
    while(S->top){
        p=S->top;
        S->top=S->top->next;
        S->count--;
        free(p);
    }
    return 0;
}
int main(){
    int n;
    char in,tmp;
    LinkStack s;
    scanf("%d",&n);
    getchar();
    s.top=NULL;
    s.count=0;
      while(n--){
        ClearStack(&s);
        while((in = getchar())!='\n'){
            if(!s.top){
                push(&s,in);
            }else{
                if(in=='(' || in=='[')push(&s,in);
                else{
                    if(in==']'){
                        if(s.top->data=='[')pop(&s);
                        else push(&s,in);
                    }
                    if(in==')'){
                        if(s.top->data=='(')pop(&s);
                        else push(&s,in);
                    }
                }
            }
        }
        if(!s.top){
            printf("Yes\n");
        }else{
            printf("No\n");
        }
    }
    return 0;

}
