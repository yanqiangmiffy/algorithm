#include<iostream>
#include<string>
#include<map>
#include<stdlib.h>
#include<stdio.h>
using namespace std;
map<string,int>M;
map<string,int>::iterator p,q;
int n;
int main()
{
    string str;
    while(scanf("%d",&n),n)
    {
       M.clear(); //���
       while(n--)
       {
          cin>>str;
          if(M[str]==0) //����
            M[str]=1;
          else
              M[str]++;
       }
       int k=-1;
       for(p=M.begin();p!=M.end();p++)   //����
       {
         if((p->second)>k)
         {
            k=p->second;
            q=p;
         }
       }
      cout<<q->first<<endl;
    }
    return 0;
}
