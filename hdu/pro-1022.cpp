#include<iostream>
#include<stdio.h>
#include<stack>
#include<algorithm>
using namespace std;
int main()
{
	stack<char>s;
	char a[1001],b[1001];
	int n,i,j,count,c[1001];
	while(~scanf("%d",&n))
	{
		count=0;
		j=0;
		getchar();
		while(!s.empty())//**���ջ**//
		{
			s.pop();
		}
		scanf("%s %s",a,b);
		for(i=0;i<n;i++)
		{
			s.push(a[i]);//**��ջ**//
			c[count]=1;//**���б��**//
			count++;
		    while(j<n&&!s.empty())//**i�����ƶ�����ջΪ�ǿ�**//
			{
				if(s.top()==b[j])//**ջ����ͬ**//
				{
					s.pop();//**��ջ**//
				    c[count]=0;//**��ǳ�ջ**//
				    count++;
				    j++;//**j�����ƶ�**//
				}
			    else
				{
				    break;
				}
			}
		}
		if(s.empty())
		{
			printf("Yes.\n");
			for(i=0;i<count;i++)
			{
				if(c[i]==1) printf("in\n");
				else if(c[i]==0)
					printf("out\n");
			}
		}
		else
		{
			printf("No.\n");
		}
		printf("FINISH\n");
	}
	return 0;
}
