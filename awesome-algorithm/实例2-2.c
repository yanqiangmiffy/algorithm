//折半查找
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
    printf("数组A[10]的内容为：\n");
    for(i=0;i<10;i++){
        printf("%d ",A[i]);
    }
    printf("\n请输入要查找的数字：\n");
    scanf("%d",&key);
    addr=bin_search(A,10,key);
    if(addr!=-1){
        printf("%d 是A[10]的第%d\n",key,addr);
    }else{
        printf("%d 不在A[10]中\n",key);
    }
}

