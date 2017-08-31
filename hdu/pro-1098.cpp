#include<iostream>
using namespace std;
int main(){
    int k,i,a;
    while(cin>>k){
        for(int i=1;i<66;i++){
            if(i*k%13==8&&i*k%5==2){
                a=i;
                break;
            }else{
                a=0;
            }
        }
        if(a){
                cout<<a<<endl;
            }else{
                cout<<"no"<<endl;
        }
    }
    return 0;
}
