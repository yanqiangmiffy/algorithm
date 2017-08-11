#include<iostream>
using namespace std;
int main(){
    double n;
    while(cin>>n){
        int fac=1;
        for(int i=1;i<=n;i++){
            fac*=i;
        }
        cout<<fac<<endl;
    }
    return 0;
}
