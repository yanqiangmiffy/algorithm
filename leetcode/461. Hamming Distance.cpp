/*
C++中^运算表示的是二进制的异或运算
2^4=6
010^100=110
使用该运算可以实现无中间变量两数字的兑换
下面的例子实现a和b的置换
a=2；
b=4；
a=a^b;
b=a^b;
a=a^b;

n&(n-1)作用：将n的二进制表示中的最低位为1的改为0，先看一个简单的例

1. 求某一个数的二进制表示中1的个数
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
