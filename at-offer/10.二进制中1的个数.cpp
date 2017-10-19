#include<iostream>
using namespace std;
int main(){
    int n,cnt=0;
    while(cin>>n){
        while(n){
         if(n&1){
            cnt++;
            }
            n=n>>1;
        }
        cout<<cnt<<endl;
        cnt=0;
    }
    return 0;
}
