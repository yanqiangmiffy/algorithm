#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;

#define N 1000000
#define INF 0x7fffffff

int a[N+10];
int dp[N+10],Max[N+10];//max( dp[i-1][k] ) ������һ�� 0....j-1 �����ֵ��

int main()
{
    int n,m,mmax;
    while (~scanf("%d%d",&m,&n))
    {
        for (int i=1;i<=n;i++)
        {
            scanf("%d",&a[i]);
        }
        memset(dp,0,sizeof(dp));
        memset(Max,0,sizeof(Max));
        for (int i=1;i<=m;i++)//�ֳɼ���
        {
            mmax=-INF;
            for (int j=i;j<=n;j++)//j�����ֳ�i�飬����Ҫ��i����
            {
                dp[j]=max(dp[j-1]+a[j],Max[j-1]+a[j]);
                Max[j-1]=mmax;
                mmax=max(mmax,dp[j]);
            }
        }
        printf ("%d\n",mmax);
    }
    return 0;
}
