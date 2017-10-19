#include<iostream>
using namespace std;
int main()
{
   int n,i,j=0;
   int a[1000];//存储二进制编码
   cin>>n;
   i=n;
   while(i)//对2取余并除2，直到商为0时为止
   {
    a[j]=i%2;
    i/=2;
    j++;
   }
   for(i=j-1;i>=0;i--)//逆序输出
    cout<<a[i];
   cout<<endl;
   return 0;
}
