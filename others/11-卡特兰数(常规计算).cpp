/*
卡特兰数的另一种形式：h(n) = C(2n,n)/(n + 1)，其中n>=1
现在我想用算法表示h(n) = h(0)*h(n-1) + h(1)*h(n-2) + …… + h(n-1)*h(0);请问我该怎么设计。
*/
#include<iostream>
using namespace std;
int n=5,a[10]={0};
void catalan(){
    int i,j;
    a[0]=1;
    a[1]=1;
    for(i=2;i<n;i++){
        for(j=0;j<n;j++){
            if(i>j)
                a[i]+=a[j]*a[i-j-1];
        }
    }
}
int main(){

    catalan();
    for(int i=0;i<n;i++){
        cout<<a[i]<<endl;
    }
}
