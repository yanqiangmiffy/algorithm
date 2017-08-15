#include<iostream>
#include<cstring>
#include<cmath>
using namespace std;
int n;
int a[20],vis[20];

int isp(int n)           //�ж��Ƿ�Ϊ����
{
    if(n<2)
        return false;
    for (int i=2;i*i<=n; i++)
    {
        if(n % i == 0)
            return false;
    }
    return true;
}

void dfs(int s)
{
    if(s==n&&isp(a[1]+a[n]))  //�ݹ�߽硣�����˲��Ե�һ���������һ����
    {
        for(int i=1; i<n; i++)
            cout<<a[i]<<" ";
        cout<<a[n]<<endl;
    }
    else
    {
        for(int i=2; i<=n; i++)
        {
            if(!vis[i]&&isp(i+a[s]))   //���iû���ù���������ǰһ����֮��Ϊ����
            {
                a[s+1]=i;
                vis[i]=1;              //���
                dfs(s+1);
                vis[i]=0;              //������
            }
        }
    }
}
int main()
{
    int t=0;
    while(cin>>n)
    {
        memset(vis,0,sizeof(vis));
        a[1]=1;
        //if(t!=0) cout<<endl;            //һ��ע�������ʽ
        t++;
        cout<<"Case "<<t<<":"<<endl;
        dfs(1);
        cout<<endl;
    }
    return 0;
}
