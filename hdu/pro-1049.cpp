#include<iostream>
using namespace std;
int main(){
    int n,u,d,minutes=0;
    while(cin>>n&&cin>>u&&cin>>d&&d<u&&n){
        while(n>0){
            n-=u;
            minutes++;
            if(n>0){
                n+=d;
                minutes++;
            }
        }
        cout<<minutes<<endl;
        minutes=0;
    }
    return 0;
}
