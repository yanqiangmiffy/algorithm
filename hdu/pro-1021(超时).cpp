#include<iostream>
using namespace std;

int fib(int n){
    if(n==0){
        return 7;
    }else if(n==1){
        return 11;
    }else{
        return (fib(n-1)%3+fib(n-2)%3)%3;
    }
}

int main(){
    int n,result;
    while(cin>>n){
        result=fib(n);
        if(result==0){
            cout<<"yes"<<endl;
        }else{
            cout<<"no"<<endl;
        }
    }
    return 0;
}
