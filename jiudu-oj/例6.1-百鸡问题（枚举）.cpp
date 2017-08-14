#include<iostream>
using namespace std;
int main(){
    int x,y,z;
    int money;
    while(cin>>money){
        for(x=0;x<=100;x++){
            for(y=0;y<=100;y++){
                z=100-x-y;
                if(5*x+3*y+(1.0/3)*z<=money){
                    cout<<"x="<<x<<",";
                    cout<<"y="<<y<<",";
                    cout<<"z="<<z<<endl;
                }
            }
        }
    }

    return 0;
}
