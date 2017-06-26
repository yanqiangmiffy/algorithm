#include<iostream>
using namespace std;
int main(){
    int n,m,num,sum=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>m;
        for(int j=0;j<m;j++){
            cin>>num;
            sum+=num;
        }
        cout<<sum<<endl;
        sum=0;
    }
}
