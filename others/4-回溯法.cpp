#include<iostream>
#include<cstdio>
using namespace std;


int a[100];
void comb(int m,int r)
{
    int i,j;
    i=0;
    a[0]=1;
    do {
        if (a[i]-i<=m-r+1){
            if (i==r-1){
                for (j=0;j<r;j++)
                printf("%4d",a[j]);
                printf("\n");
            }
            a[i++];
            continue;
        }
        else
        {   if (i==0)
            return;
          a[--i]++;
        }
    }while(1);
}

main()
{
    comb(5,3);
}
