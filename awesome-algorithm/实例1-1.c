#include "stdio.h"
#define MaxSize 10
//��˳����в���Ԫ��
void  insertElem(int Sqlist[],int *len,int i,int x){
    int t;
    //�жϲ����Ƿ�Ϸ�
    if(*len==MaxSize||i<1||i>*len+1){
        printf("���β���Ƿ�\n");
        return;
    }
    for(t=*len-1;t>=i-1;t--){
        Sqlist[t+1]=Sqlist[t];
    }
    Sqlist[i-1]=x;
    *len=*len+1;
}
//��˳�����ɾ��Ԫ��
void DelElem(int Sqlist[],int *len,int i){
    int j;
    if(i<1||i>len){
        printf("����ɾ��λ�ò��Ϸ�\n");
        return;
    }
    for(j=i;j<*len-1;j++){
        Sqlist[j-1]=Sqlist[j];
    }
    *len=*len-1;
}

//���Ժ���
int main(){
    int Sqlist[MaxSize];
    int len=6,i;
    //��������
    for(i=0;i<len;i++){
        scanf("%d",&Sqlist[i]);
    }
    //�������
    for(i=0;i<len;i++){
        printf("%d ",Sqlist[i]);
    }
    //��ʾ���е�ʣ��ռ�
    printf("\n����ʣ��ռ�:%d\n",MaxSize-len);


    insertElem(Sqlist,&len,3,0);//�ڱ��е�3��λ�ò���0
    for(i=0;i<len;i++){//�������
        printf("%d ",Sqlist[i]);
    }
    printf("\n����ʣ��ռ�:%d\n",MaxSize-len);
    insertElem(Sqlist,&len,11,0);//�ڱ��е�11��λ�ò���Ԫ��0

    DelElem(Sqlist,&len,6);//ɾ����6��λ�õ�Ԫ��
    for(i=0;i<len;i++){//�������
        printf("%d ",Sqlist[i]);
    }
    printf("\n����ʣ��ռ�:%d\n",MaxSize-len);//��ʾ���е�ʣ��ռ�
    return 0;
}
