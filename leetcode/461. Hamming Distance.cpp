/*
C++��^�����ʾ���Ƕ����Ƶ��������
2^4=6
010^100=110
ʹ�ø��������ʵ�����м���������ֵĶһ�
���������ʵ��a��b���û�
a=2��
b=4��
a=a^b;
b=a^b;
a=a^b;

n&(n-1)���ã���n�Ķ����Ʊ�ʾ�е����λΪ1�ĸ�Ϊ0���ȿ�һ���򵥵���

1. ��ĳһ�����Ķ����Ʊ�ʾ��1�ĸ���
while (n >0 ) {
      count ++;
      n &= (n-1);
}

*/
#include<iostream>
using namespace std;
int hammingDistance(int x,int y){
    int dist=0,n=x^y;
    while(n>0){
        dist ++;
        n&= (n-1);
    }
    return dist;
}
int main(){
    int x,y,dist;
    while(cin>>x>>y){
        dist=hammingDistance(x,y);
        cout<<dist<<endl;
    }

    return 0;
}
