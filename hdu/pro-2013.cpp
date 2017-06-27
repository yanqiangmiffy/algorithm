#include<iostream>
using namespace std;
int sum(int n){
    if(n==1){
        return 1;
    }else{
        return (sum(n-1)+1)*2;
    }
}
int main(){
    int n;
    while(cin>>n){
        cout<<sum(n)<<endl;
    }

}
