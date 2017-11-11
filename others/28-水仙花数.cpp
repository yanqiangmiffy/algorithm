#include<iostream>
using namespace std;
int main(){
    int n,i,j,k;
    while(cin>>n&&n!=0){
        i=n/100;
        j=(n%100)/10;
        k=n%10;
        if(i*i*i+j*j*j+k*k*k==n){
            cout<<"Yes"<<endl;
        }else{
            cout<<"No"<<endl;
        }
    }
    return 0;
}
