//�ݹ飬���������Ļ�����
#include<stdio.h>
int P(int n,int m){
    if(m==1)return 1;
    if(m>n)return P(n,n);
    if(m==n)return P(n,n-1)+1;
    return P(n,m-1)+P(n-m,m);
}
int main(){
    int n,s;
    printf("������Ҫ���Ե�����\n");
    scanf("%d",&n);
    s=P(n,n);
    printf("%�Ļ������ǣ�%d",s);
}
