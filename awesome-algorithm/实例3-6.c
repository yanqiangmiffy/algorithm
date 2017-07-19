//递归，计算整数的划分数
#include<stdio.h>
int P(int n,int m){
    if(m==1)return 1;
    if(m>n)return P(n,n);
    if(m==n)return P(n,n-1)+1;
    return P(n,m-1)+P(n-m,m);
}
int main(){
    int n,s;
    printf("请输入要测试的数：\n");
    scanf("%d",&n);
    s=P(n,n);
    printf("%的划分数是：%d",s);
}
