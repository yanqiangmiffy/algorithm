#include<iostream>
using namespace std;
int main(){
    int a,b,max;
    while(cin>>a>>b){

        if(a>=b){
            max=a;
        }else{
            max=b;
        }
        for(int i=max;i<=a*b;i++){
            if(i%a==0&&i%b==0){
                cout<<"a和b的最小公倍数是："<<i<<endl;
                break;
            }
        }
    }
    return 0;
}
