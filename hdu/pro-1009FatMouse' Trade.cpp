#include<iostream>
#include<algorithm>
#include<stdio.h>
using namespace std;
struct house
{
    int a;
    int b;
    double rate;
}h[1005];
bool cmp(house x,house y)
{
    if(x.rate!=y.rate)
    return x.rate>y.rate;
    else
    return x.a<y.a;
}
int main()
{
    int m,n,i;
    double cnt;
    while(scanf("%d %d",&m,&n)!=EOF)
    {   if(m==-1&&n==-1)break;
        cnt=0;
        for(i=0;i<n;i++)
        {
            scanf("%d %d",&h[i].a,&h[i].b);
            h[i].rate=h[i].a*1.0/h[i].b;
        }
        sort(h,h+n,cmp);
        for(i=0;i<n;i++)
        {
            if(m>=h[i].b)
            {
                m-=h[i].b;
                cnt+=h[i].a;
            }
           else
           {
               cnt+=h[i].rate*m;
               break;
           }
        }
     printf("%.3lf\n",cnt);
    }
    return 0;
}
