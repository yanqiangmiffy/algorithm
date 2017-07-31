#include<stdio.h>
#include<iostream>
using namespace std;
int main(){
    int a[11]={0},t;//将数组元素初始化为0
    //int a[11]={1};第一个元素为1，其他元素为0
    for(int i=0;i<5;i++){//循环输入5个数
        cin>>t;
        a[t]++;
    }
    for(int i=0;i<10;i++){
        for(int j=0;j<a[i];j++){
            cout<<i<<"  ";
        }
    }
    getchar();getchar();
    return 0;
}
