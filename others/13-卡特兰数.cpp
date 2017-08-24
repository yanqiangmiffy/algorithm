/* 这是一道非常非常标准的Catalan数问题,由于结果很大,要使用大数
 * 公式:h(n)=h(n-1)*(4*n-2)/(n+1)*/
#include <iostream>
#include<stdio.h>
#include <string.h>
using namespace std;
#define BASE 10000
void multiply(int a[],int len,int b)//乘法
{
    int i, x = 0;
    for (i = len - 1; i >= 0; i--) {
        x += a[i] * b;
        a[i] = x % BASE;
        x /= BASE;
    }
}
void devide(int a[],int len,int b)//除法
{
    int i, div = 0;
    for (i = 0; i < len; i++) {
        div *= BASE;
        div += a[i];
        a[i] = div / b;
        div %= b;
    }
}
int main() {
    int a[101][100];
    int i, j, n;
    memset(a, 0, sizeof(a));
    for (i = 2, a[1][99] = 1; i < 101; i++) {
        memcpy(a[i], a[i - 1], sizeof(a[i - 1]));//h[i]-h[i-1];
        multiply(a[i], 100, 4 * i - 2);//h[i]*=4*i-2;
        devide(a[i], 100, i + 1);//h[i]/=i+1;
    }
    while (cin >> n) {
        for (i = 0; i < 100 && !a[n][i]; i++);//去掉开头的0
        cout << a[n][i++];//输出首个非0的数
        for (; i < 100; i++)
            printf("%04d", a[n][i]);//输出后面的数
        cout << endl;
    }
    return 0;
}
