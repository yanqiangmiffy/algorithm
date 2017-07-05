#include "stdio.h"
#define MaxSize 10
//向顺序表中插入元素
void  insertElem(int Sqlist[],int *len,int i,int x){
    int t;
    //判断插入是否合法
    if(*len==MaxSize||i<1||i>*len+1){
        printf("本次插入非法\n");
        return;
    }
    for(t=*len-1;t>=i-1;t--){
        Sqlist[t+1]=Sqlist[t];
    }
    Sqlist[i-1]=x;
    *len=*len+1;
}
//从顺序表中删除元素
void DelElem(int Sqlist[],int *len,int i){
    int j;
    if(i<1||i>len){
        printf("本次删除位置不合法\n");
        return;
    }
    for(j=i;j<*len-1;j++){
        Sqlist[j-1]=Sqlist[j];
    }
    *len=*len-1;
}

//测试函数
int main(){
    int Sqlist[MaxSize];
    int len=6,i;
    //输入数据
    for(i=0;i<len;i++){
        scanf("%d",&Sqlist[i]);
    }
    //输出数据
    for(i=0;i<len;i++){
        printf("%d ",Sqlist[i]);
    }
    //显示表中的剩余空间
    printf("\n表中剩余空间:%d\n",MaxSize-len);


    insertElem(Sqlist,&len,3,0);//在表中第3个位置插入0
    for(i=0;i<len;i++){//输出数据
        printf("%d ",Sqlist[i]);
    }
    printf("\n表中剩余空间:%d\n",MaxSize-len);
    insertElem(Sqlist,&len,11,0);//在表中第11个位置插入元素0

    DelElem(Sqlist,&len,6);//删除第6个位置的元素
    for(i=0;i<len;i++){//输出数据
        printf("%d ",Sqlist[i]);
    }
    printf("\n表中剩余空间:%d\n",MaxSize-len);//显示表中的剩余空间
    return 0;
}
