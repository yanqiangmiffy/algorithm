#include<iostream>
using namespace std;
int main(){
    int n,m,b;
    while(cin>>n){
        while(n--){
            int temp=1;
            cin>>m;
            while(m--){
                cin>>b;
                for(int i=b;i<=temp*b;i++){
                    if(i%temp==0&&i%b==0){
                        temp=i;
                        break;
                    }
                }
            }
            cout<<temp<<endl;
        }
    }

    return 0;
}
