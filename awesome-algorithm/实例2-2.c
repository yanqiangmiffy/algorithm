//�۰����
#include<stdio.h>
int bin_search(int A[],int n,int key){
    int low,high,mid;
    low=0;
    high=n-1;
    while(low<=high){
        mid=(low+high)/2;
        if(A[mid]==key){
                return mid;
        }
        if(A[mid]<key){
            low=mid+1;
        }
        if(A[mid]>key){
            high=mid-1;
        }
    }
    return -1;
}
int main(){
    int A[10]={2,3,5,7,8,10,12,15,19,21},i,key,addr;
    printf("����A[10]������Ϊ��\n");
    for(i=0;i<10;i++){
        printf("%d ",A[i]);
    }
    printf("\n������Ҫ���ҵ����֣�\n");
    scanf("%d",&key);
    addr=bin_search(A,10,key);
    if(addr!=-1){
        printf("%d ��A[10]�ĵ�%d\n",key,addr);
    }else{
        printf("%d ����A[10]��\n",key);
    }
}

