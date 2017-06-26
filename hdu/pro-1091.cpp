#include<iostream>
using namespace std;
int main(){
    int x,y,sum;
    while(cin>>x>>y){
       if(!(x==0&&y==0)){
            sum=x+y;
            cout<<sum<<endl;
       }else{
           break;
       }
    }
    return 0;
}
