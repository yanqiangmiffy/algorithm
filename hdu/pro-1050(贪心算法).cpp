//http://m.blog.csdn.net/zwj1452267376/article/details/47763589
#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;

int main()
{
	int t,n,count[410],i,start,end,k;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		memset(count,0,sizeof(count));
		while(n--)
		{
			scanf("%d%d",&start,&end);
			if(start>end)//���ܳ���λ�ñ�Ŀ�ĵط����
			{            //���۴�С�����Ƕ����Կ�����С�ķ����ƶ�����ķ���
				k=start;
				start=end;
				end=k;
			}
			if(start%2==0)//����ʵ���������������Ϊż���Ǽ�һ���ɲ������и�����ͼһ
			   start-=1;
			if(end%2==1)//Ŀ�ĵط���Ϊ����ʱ��һ
			   end+=1;
			for(i=start;i<=end;++i)
			   count[i]+=10;
		}
		printf("%d\n",*max_element(count,count+400));//STL��Ѱ���������ֵ����
	}
	return 0;
}
