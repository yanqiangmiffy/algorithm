#include<stdio.h>
#include<iostream>
#include<string.h>
#define max(a,b) a>b? a:b
using namespace std;
const int MAXN=110;
int N,M;
struct Node
{
    int number,p;
};
Node node[MAXN];//记录结点
int dp[MAXN][MAXN];//DP，dp[i][j]表示跟结点为i时，用掉j个士兵获得的最大值
int adj[MAXN][MAXN];//存树
bool vis[MAXN];//访问标记

void dfs(int root)//DFS
{
    vis[root]=true;//已经访问
    int num=(node[root].number+19)/20;//获得该结点需要的士兵数目
    for(int i=num;i<=M;i++)  dp[root][i]=node[root].p;
    for(int i=1;i<=adj[root][0];i++)
    {
        int u=adj[root][i];
        if(vis[u]) continue;
        dfs(u);
        for(int j=M;j>=num;j--)
        {
            for(int k=1;j+k<=M;k++)
            {
                if(dp[u][k])
                  dp[root][j+k]=max(dp[root][j+k],dp[root][j]+dp[u][k]);
            }
        }
    }
}
int main()
{
    int b,e;
    while(scanf("%d%d",&N,&M))
    {
        if(N==-1&&M==-1) break;
        memset(vis,false,sizeof(vis));
        memset(dp,0,sizeof(dp));
        memset(adj,0,sizeof(adj));
        for(int i=1;i<=N;i++)
            scanf("%d%d",&node[i].number,&node[i].p);
        for(int i=1;i<N;i++)//存图
        {
             scanf("%d%d",&b,&e);
             adj[b][0]++;
             adj[b][adj[b][0]]=e;
             adj[e][0]++;
             adj[e][adj[e][0]]=b;
        }
        if(M==0)//这个必需要，有代价为0的房间，M=0则无法获得
          printf("0\n");
        else
        {
            dfs(1);
            printf("%d\n",dp[1][M]);
        }

    }
    return 0;
}
