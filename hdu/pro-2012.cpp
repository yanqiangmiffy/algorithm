#include<iostream>
using namespace std;
bool is_prime(int num);
int main(){
    int m,n;
    while(cin>>m>>n){
        if(m==0&&n==0){
            break;
        }else{
            int flag=m-1-n;
            for(int x=m;x<=n;x++){
                int num=x*x+x+41;
                if(is_prime(num)){
                    flag++;
                }else{
                    flag=flag;
                }
                num=0;
            }
            if(flag==0){
                    cout<<"OK"<<endl;
            }
            else{
                    cout<<"Sorry"<<endl;
            }
        }
    }
    return 0;
}

bool is_prime(int num){
    if(num<2){
        return false;
    }else{
        for(int i=2;i*i<=num;i++){
            if(num%i==0){
                return false;
            }
        }
    }
    return true;
}
