/**
    动态创建顺序表
**/
#include "stdio.h"
#include "conio.h"
#define MaxSize 10
typedef int ElemType;

typedef struct{
    int *elem;
    int length;
    int listsize;
}Sqlist;

//初始化一个顺序表
void initSqlist(Sqlist *L){
    L->elem=(int *)malloc(MaxSize*sizeof(ElemType));
    if(!L->elem) exit(0);
    L->length=0;
    L->listsize=MaxSize;
}

void InsertElem(Sqlist *L,int i,ElemType item){
    //向顺序表中第i个位置插入元素item
    ElemType *base,* insertPtr,*p;
    if(i<1||i>L->length+1){
        exit(0);
    }
    if(L->length>=L->listsize){
        base=(ElemType*)realloc(L->elem,(L->listsize+10)*sizeof(ElemType));
        L->elem=base;
        L->listsize=L->listsize+100;
    }
    insertPtr=&(L->elem[i-1]);
    for(p=&(L->elem[L->length-1]);p>=insertPtr;p--){
        *(p+1)=*p;
    }
    * insertPtr=item;
    L->length++;
}
//从顺序表中删除元素
void DelElem(Sqlist *L,int i){
    //从顺序表删除第i个位置的元素
    ElemType *delItem,*q;
    if(i<1||i>L->length){
        exit(0);
    }
    delItem=&(L->elem[i-1]);
    q=L->elem+L->length-1;
    for(++delItem;delItem<q;++delItem){
        *(delItem-1)=*delItem;
    }
    L->length--;
}
//测试函数
int main(){
    Sqlist l;
    int i;
    initSqlist(&l);
    for(i=0;i<15;i++){
        InsertElem(&l,i+1,i+1);
    }
    printf("顺序表中的内容是：\n");
    for(i=0;i<l.length;i++){
        printf("%d ",l.elem[i]);
    }
    DelElem(&l,5);
    printf("\n删除第5个元素之后，顺序表的内容为：\n");
    for(i=0;i<l.length;i++){
        printf("%d ",l.elem[i]);
    }
    return 0;
}
