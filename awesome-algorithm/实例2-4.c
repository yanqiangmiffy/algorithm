#include<stdio.h>
//ѡ������
void select_sort(int k[],int n){
    int i,j,min;
    int temp;
    for(i=0;i<=n-1;i++){
        min=i;
        for(j=i;j<=n;j++){//�ں�n-i��Ԫ�����ҵ���С��Ԫ��λ��
            if(k[j]<k[min]){
                min=j;//��min��¼��СԪ�ص�λ��
                if(min!=i){//�����СԪ�ز�λ�ں�n-i��Ԫ�صĵ�һ��λ��
                    temp=k[min];
                    k[min]=k[i];//Ԫ�ؽ���
                    k[i]=temp;
                }
            }
        }
    }
}
int main(){
    int i,a[11]={4,2,5,6,3,7,8,0,9,12,-100};
    printf("����ԭʼ�����ǣ�\n");
    for(i=0;i<=10;i++){
        printf("%d ",a[i]);
    }
    select_sort(a,10);
    printf("\n�����������ǣ�\n");
    for(i=0;i<=10;i++){
        printf("%d ",a[i]);
    }
}
