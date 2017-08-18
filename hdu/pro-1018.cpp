#include<iostream>
#include<cstdio>
#include<string>
#include<math.h>
using namespace std;
int main(){
    int n,m;

    while(cin>>n){

        while(n--){
            double digits=0;
            cin>>m;
            for(int i=1;i<=m;i++){
                digits+=log10((double)i);
            }
            cout<<(int)digits+1<<endl;
        }
    }

    return 0;
}
