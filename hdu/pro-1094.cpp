#include<iostream>
using namespace std;
int main(){
    int n,num,sum=0;
    while(cin>>n){
        for(int i=0;i<n;i++){
            cin>>num;
            sum+=num;
        }
        cout<<sum<<endl;
    }
}
