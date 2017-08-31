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
    for(LL j = 2; j <= 22; j++)//���õ���˼�룬��iλ�ķ�ĸֵ����ֵi��i-1λ�õķ�ĸֵ����С������
    {
        FenMu[j] = j*FenMu[j-1]/gcd(j,FenMu[j-1]);//����������С�����������������ĳ˻����������������Լ��
        FenZi[j] = FenMu[j]/j+FenMu[j]/FenMu[j-1]*FenZi[j-1];//iλ�õķ���ֵFenZi[i]���ڱ�λ����ֵFenMu[i]/i
    }//����ǰһλ����ֵFenMu[i]/FenMu[i-1]*FenZi[i-1]
    LL N;
    while(~scanf("%I64d",&N))
    {
        int len1 = 0,len2 = 0,len3 = 0;
        if(N*FenZi[N]%FenMu[N] == 0) printf("%I64d\n",N*FenZi[N]/FenMu[N]);
        else
        {
           LL inter = N*FenZi[N]/FenMu[N];
           LL FZ = N*FenZi[N]%FenMu[N], FM = FenMu[N];
           LL factor = gcd(FZ,FM);//��������Ҫ����
           FZ /=factor, FM /=factor;//����
           LL n1 = inter, n2 = FM;
           while(n1) {len1++; n1 /=10;}
           while(n2) {len2++; n2 /=10;}
           for(int i = 0; i <= len1; i++) printf(" ");//�����ʽ����
           printf("%I64d\n",FZ); printf("%I64d ",inter);//�����������������Ҫ��һ���ո�
           for(int j = 0; j < len2; j++) printf("-"); printf("\n");
           for(int k = 0; k <= len1; k++) printf(" "); printf("%I64d\n",FM);
        }
    }
    return 0;
}
