#include<iostream>
using namespace std;
int main(){
    int sum=0,n=0,i=0;
    while(cin>>n){
        do{
            i=i+1;
            sum=i+sum;
        }while(i<n);
        cout<<sum<<endl<<'\n';//add '\n' to avoid presentation errow
        sum=0,i=0;
    }
    return 0;
}
