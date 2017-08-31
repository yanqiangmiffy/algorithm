//http://blog.csdn.net/u014086857/article/details/40709737
#include <iostream>
#include <cstdio>
using namespace std;
typedef long long LL;

LL FenMu[25],FenZi[25];
LL gcd(LL x,LL y)
{
    return y==0 ? x:gcd(y,x%y);
}

int main()
{
    //freopen("input.txt","r",stdin);
    FenMu[1] = 1,FenZi[1] = 1;
    for(LL j = 2; j <= 22; j++)//采用递推思想，第i位的分母值是数值i与i-1位置的分母值的最小公倍数
    {
        FenMu[j] = j*FenMu[j-1]/gcd(j,FenMu[j-1]);//两个数的最小公倍数等于两个数的乘积除以两个数的最大公约数
        FenZi[j] = FenMu[j]/j+FenMu[j]/FenMu[j-1]*FenZi[j-1];//i位置的分子值FenZi[i]等于本位分子值FenMu[i]/i
    }//加上前一位分子值FenMu[i]/FenMu[i-1]*FenZi[i-1]
    LL N;
    while(~scanf("%I64d",&N))
    {
        int len1 = 0,len2 = 0,len3 = 0;
        if(N*FenZi[N]%FenMu[N] == 0) printf("%I64d\n",N*FenZi[N]/FenMu[N]);
        else
        {
           LL inter = N*FenZi[N]/FenMu[N];
           LL FZ = N*FenZi[N]%FenMu[N], FM = FenMu[N];
           LL factor = gcd(FZ,FM);//分数部分要化简
           FZ /=factor, FM /=factor;//化简
           LL n1 = inter, n2 = FM;
           while(n1) {len1++; n1 /=10;}
           while(n2) {len2++; n2 /=10;}
           for(int i = 0; i <= len1; i++) printf(" ");//输出格式处理
           printf("%I64d\n",FZ); printf("%I64d ",inter);//整数部分与分数部分要有一个空格
           for(int j = 0; j < len2; j++) printf("-"); printf("\n");
           for(int k = 0; k <= len1; k++) printf(" "); printf("%I64d\n",FM);
        }
    }
    return 0;
}
