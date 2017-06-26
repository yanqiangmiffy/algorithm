#include<iostream>
#include<stdlib.h>
#include<stdio.h>
#include<cstdio>
using namespace std;
int main(){
    int num,sum=0;
    while(cin>>num){
        if(num!=0){
            sum+=num;
            if(getchar()=='\n'){
                cout<<sum<<endl;

            }
        }else{
            break;
        }
    }
}
