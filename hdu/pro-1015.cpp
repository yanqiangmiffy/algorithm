#include <iostream>
#include <string>
#include <cmath>
#include <cstring>

using namespace std;
string ans,s;
int target,vis[20];
void DFS(int cnt,char *tc)
{
    if(5==cnt)
    {
        int num=0;
        string t="";
        for(int i=0;i<cnt;i++)
        {
            t+=tc[i];
            if(i&1) num-=powl(tc[i]-64,i+1);
            else num+=powl(tc[i]-64,i+1);
        }
        //cout<<num<<endl;
        if(num==target&&t>ans) ans=t;
        return ;
    }
    for(unsigned int i=0;i<s.length();i++)
    {
        if(vis[i]) continue;
        vis[i]=1;
        tc[cnt]=s[i];
        DFS(cnt+1,tc);
        vis[i]=0;
    }
}
int main()
{
    while(cin>>target>>s)
    {
        //cout<<target<<" "<<s<<endl;
        if(target==0&&s=="END") break;
        ans=""; char tc[20];
        memset(vis,0,sizeof(vis));
        DFS(0,tc);
        if(ans=="") cout<<"no solution"<<endl;
        else cout<<ans<<endl;
    }
    return 0;
}
