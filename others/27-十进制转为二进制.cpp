#include<iostream>
using namespace std;
int main()
{
   int n,i,j=0;
   int a[1000];//�洢�����Ʊ���
   cin>>n;
   i=n;
   while(i)//��2ȡ�ಢ��2��ֱ����Ϊ0ʱΪֹ
   {
    a[j]=i%2;
    i/=2;
    j++;
   }
   for(i=j-1;i>=0;i--)//�������
    cout<<a[i];
   cout<<endl;
   return 0;
}
