//穷举
#include<stdio.h>
int isPrime(int n){
    int i;
    for(i=2;i<n;i++){
        if(n%i==0) return 0;
    }
    return 1;
}
getPrime(int low,int high){
    int i;
    for(i=low;i<=high;i++){
        if(isPrime(i))
            printf("%d ",i);
    }
}
int main(){
    int low,high;
    scanf("%d%d",&low,&high);
    getPrime(low,high);
}
