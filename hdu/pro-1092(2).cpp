#include<iostream>
using namespace std;
int main(){
    int n,num,sum=0;
    do{
        cin>>n;
        if(n!=0){
            for(int i=0;i<n;i++){
                cin>>num;
                sum+=num;
            }
            cout<<sum<<endl;
            sum=0;
        }else{
            break;
        }
    }while(n);
}
