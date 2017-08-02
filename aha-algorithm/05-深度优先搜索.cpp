#include<iostream>
#include<stdio.h>
int book[101],sum,n,e[101][101];
using namespace std;
void dfs(int cur){//cur：当前所在对的顶点编号
    int i;
    cout<<cur<<" ";
    sum++;//每访问过一个顶点，sum就加1
    if(sum==n) return;//所有的节点访问过直接退出
    for(i=1;i<=n;i++){//从1号顶点到n号，检查哪些顶点与当前节点有边相连
        //判断当前节点cur到顶点i是否有边，并判断顶点i是否已经访问过
        if(e[cur][i]==1&&book[i]==0){
            book[i]=1;//标记顶点i已经访问过
            dfs(i);//从顶点i再继续遍历
        }
    }
    return;
}
int main(){
    int i,j,m,a,b;
    cin>>n>>m;
    //初始化二维矩阵
    for(i=1;i<n;i++){
        for(j=1;j<n;j++){
            if(i==j){
                e[i][j]=0;
            }
            else{
                e[i][j]=99999999;//正无穷
            }
        }
    }
    //读入顶点之间的边
    for(i=1;i<m;i++){
        cin>>a>>b;
        e[a][b]=1;
        e[b][a]=1;
    }
    //从1号顶点开始
    book[1]=1;//1号顶点已经访问过
    dfs(1);//从1号顶点开始遍历
}
