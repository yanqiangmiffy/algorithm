#include<stdio.h>
//ð������
void bubble_sort(int k[],int n){
    int i,j,temp;
    for(i=0;i<n;i++){
        for(j=0;j<n-i;j++){
            if(k[j]>k[j+1]){
                temp=k[j+1];
                k[j+1]=k[j];
                k[j]=temp;
            }
        }
    }
}
int main(){
    int i,a[10]={2,5,6,3,7,8,0,9,12,1};
    printf("����ԭʼ�����ǣ�\n");
    for(i=0;i<=10;i++){
        printf("%d ",a[i]);
    }
    bubble_sort(a,10);
    printf("\n�����������ǣ�\n");
    for(i=0;i<=10;i++){
        printf("%d ",a[i]);
    }
}
