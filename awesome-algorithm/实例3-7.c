#include<stdio.h>
int bin_search(int arr[],int low,int high,int key){
    int mid;
    if(low>high)
        return -1;
    else{
        mid=(low+high)/2;
        if(key==arr[mid])
            return mid;
        if(key>arr[mid])
            return bin_search(arr,mid+1,high,key);
        else{
            return bin_search(arr,low,mid-1,key);
        }
    }
}
int main(){
    int i,n,addr;
    int arr[10]={2,3,5,7,8,10,12,15,19,22};
    printf("arr[10]����������\n");
    for(i=0;i<10;i++){
        printf("%d ",arr[i]);
    }
    printf("\n������Ҫ���ҵ�����\n");
    scanf("%d",&n);
    addr=bin_search(arr,0,9,n);
    if(addr!=-1){
        printf("%d��arr�ĵ�%d��Ԫ��",n,addr+1);
    }
    else{
        printf("%d����arr��",n);
    }
}
