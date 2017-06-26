#include<iostream>
using namespace std;
int main(){
    int n,num,sum=0;
    bool flag=false;
    cin>>n;
    while(n){
        for(int i=0;i<n;i++){
            cin>>num;
            if(num==0){
                flag=true;
                break;
            }
            sum+=num;
        }
        if(flag==true){
            break;
        }
        cout<<sum<<endl;
        sum=0;
    }
}
