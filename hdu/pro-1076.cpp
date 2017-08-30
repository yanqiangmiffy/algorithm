#include<iostream>
using namespace std;
int main(){
    int n,N,Y;
    int cnt=0;
    cin>>n;
    while(n--){
        cin>>Y>>N;
        while(cnt!=N){
            if((Y%4==0&&Y%100!=0)||Y%400==0) cnt++;
            Y++;
        }
        cout<<Y-1<<endl;
        cnt=0;
    }
    return 0;
}
