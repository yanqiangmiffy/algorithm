#include<iostream>//1097
#include<algorithm>
using namespace std;
int main()
{    int a,b,c[4];
  while(cin>>a>>b)
  {
      a=a%10;
      c[0]=a;//һ�η���ĩβ��
     c[1]=(c[0]*a)%10;//���η���ĩβ��
     c[2]=(c[1]*a)%10;//���η���ĩβ��
     c[3]=(c[2]*a)%10;//�Ĵη���ĩβ��
     if(b%4==1)
         cout<<c[0]<<endl;
     if(b%4==2)
         cout<<c[1]<<endl;
     if(b%4==3)
         cout<<c[2]<<endl;
     if(b%4==0)
         cout<<c[3]<<endl;
  }
  return 0;
}
