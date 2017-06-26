#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        int m,num;
        int sum=0;
        cin>>m;
        for(int i=0;i<m;i++){
            cin>>num;
            sum+=num;
        }
        cout<<sum;
        if(n){
            cout<<endl<<endl;
        }else{
            cout<<endl;
        }
    }
    return 0;
}
