#include<iostream>
#include<stdio.h>
int book[101],sum,n,e[101][101];
using namespace std;
void dfs(int cur){//cur����ǰ���ڶԵĶ�����
    int i;
    cout<<cur<<" ";
    sum++;//ÿ���ʹ�һ�����㣬sum�ͼ�1
    if(sum==n) return;//���еĽڵ���ʹ�ֱ���˳�
    for(i=1;i<=n;i++){//��1�Ŷ��㵽n�ţ������Щ�����뵱ǰ�ڵ��б�����
        //�жϵ�ǰ�ڵ�cur������i�Ƿ��бߣ����ж϶���i�Ƿ��Ѿ����ʹ�
        if(e[cur][i]==1&&book[i]==0){
            book[i]=1;//��Ƕ���i�Ѿ����ʹ�
            dfs(i);//�Ӷ���i�ټ�������
        }
    }
    return;
}
int main(){
    int i,j,m,a,b;
    cin>>n>>m;
    //��ʼ����ά����
    for(i=1;i<n;i++){
        for(j=1;j<n;j++){
            if(i==j){
                e[i][j]=0;
            }
            else{
                e[i][j]=99999999;//������
            }
        }
    }
    //���붥��֮��ı�
    for(i=1;i<m;i++){
        cin>>a>>b;
        e[a][b]=1;
        e[b][a]=1;
    }
    //��1�Ŷ��㿪ʼ
    book[1]=1;//1�Ŷ����Ѿ����ʹ�
    dfs(1);//��1�Ŷ��㿪ʼ����
}
