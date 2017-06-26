#include<iostream>
using namespace std;
int main(){
    int num,sum=0,n;
    while(cin>>n){
        for(int i=0;i<n;i++){
            cin>>num;
            sum+=num;
        }
        cout<<sum<<endl;
        sum=0;
    }
}
