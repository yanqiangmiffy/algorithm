#include<iostream>
using namespace std;
int main(){
    int n,m;
    while(cin>>n>>m){
        int i,sum=0,temp=0,counter=0;
        for(i=1;i<=n;i++){
            counter++;
            temp+=2;
            sum+=temp;
            if(i==n){
                cout<<sum/counter<<endl;
            }else if(counter==m){
                cout<<sum/m<<" ";
                counter=0,sum=0;
            }
        }
    }
    return 0;
}
