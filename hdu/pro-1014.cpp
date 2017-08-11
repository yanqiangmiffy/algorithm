#include<iostream>
#include<stdio.h>
#include<algorithm>
using namespace std;
int main(){
    int step,mod,i;
    int seed[100002];
    while(cin>>step>>mod){
        seed[0]=0;
        for(i=1;i<=mod;i++){
            seed[i]=(seed[i-1]+step)%mod;
        }
        sort(seed,seed+mod);
        for(i=0;i<mod;i++){
            if(seed[i]!=i){
                break;
            }
        }
        cout<<i;
        printf("%10d%10d",step,mod);
        if(i==mod){
            cout<<"    Good Choice"<<endl<<endl;
        }else{
            cout<<"    Bad Choice"<<endl<<endl;
        }
    }

    return 0;
}
