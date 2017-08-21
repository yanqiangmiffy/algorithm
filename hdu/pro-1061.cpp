#include<iostream>
using namespace std;
int main(){
    int T,last,n;
    cin>>T;
    while(T--){
        cin>>n;
        last=n%10;
        if(last==0||last==1||last==5||last==6){
            cout<<last<<endl;
        }else if(last==4){
            if(n%2==1){
                cout<<4<<endl;
            }else{
                cout<<6<<endl;
            }
        }else if(last==9){
            if(n%2==1){
                cout<<1<<endl;
            }else{
                cout<<9<<endl;
            }
        }else if(last==2){
            if(n%4==1){
                cout<<2<<endl;
            }else if(n%4==2){
                cout<<4<<endl;
            }else if(n%4==3){
                cout<<8<<endl;
            }else{
                cout<<6<<endl;
            }
        }else if(last==3){
            if(n%4==1){
                cout<<3<<endl;
            }else if(n%4==2){
                cout<<9<<endl;
            }else if(n%4==3){
                cout<<7<<endl;
            }else{
                cout<<1<<endl;
            }
        }else if(last==7){
            if(n%4==1){
                cout<<7<<endl;
            }else if(n%4==2){
                cout<<9<<endl;
            }else if(n%4==3){
                cout<<3<<endl;
            }else{
                cout<<1<<endl;
            }
        }else if(last==8){
            if(n%4==1){
                cout<<8<<endl;
            }else if(n%4==2){
                cout<<4<<endl;
            }else if(n%4==3){
                cout<<2<<endl;
            }else{
                cout<<6<<endl;
            }
        }
    }
    return 0;
}
