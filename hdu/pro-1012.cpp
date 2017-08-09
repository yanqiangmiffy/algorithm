#include<iostream>
#include<iomanip>
#include<stdio.h>
using namespace std;
double a;
double sum[10];
int main(){
    a=1;
    sum[0]=1;
    sum[1]=2;
    for(int i=2;i<=9;i++){
        a=a*(1.0/i);
        sum[i]=a+sum[i-1];
    }
    cout<<"n e"<<endl;
    cout<<"- ------------"<<endl;
    cout<<"0 1"<<endl;
    cout<<"1 2"<<endl;
    cout<<"2 2.5"<<endl;
    for(int i=3;i<=9;i++){
        printf("%d %.9f\n",i,sum[i]);
    }
    return 0;
}
