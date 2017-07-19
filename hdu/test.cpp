#include<iostream>

using namespace std;
int fac(int a,int b,int n){
    if(n==1||n==2){
        return 1;
    }
    return (a*f(n-1)+b*f(n-2))%7;
}
int main(){
    int a,b,n;
    while(cin>>a&&cin>>b&&cin>>n){
        if(a||b||n){

        }else{
            break;
        }
    }
    return 0;
}
