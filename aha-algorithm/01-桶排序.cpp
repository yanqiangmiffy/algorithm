#include<stdio.h>
#include<iostream>
using namespace std;
int main(){
    int a[11]={0},t;//������Ԫ�س�ʼ��Ϊ0
    //int a[11]={1};��һ��Ԫ��Ϊ1������Ԫ��Ϊ0
    for(int i=0;i<5;i++){//ѭ������5����
        cin>>t;
        a[t]++;
    }
    for(int i=10;i>=0;i--){
        for(int j=0;j<a[i];j++){
            cout<<i<<"  ";
        }
    }
    getchar();getchar();
    return 0;
}
