#include <iostream>
using namespace std;
int main(){

    unsigned long long T,t1,t2,sum;
    cin>>T;
    if(T>=1&&T<=20){//ÅÐ¶ÏTµÄÖµ
        for(int i=0;i<T;i++){
            cin>>t1>>t2;
            sum=t1+t2;
            cout<<"Case"<<i+1<<":"<<endl;
            cout<<t1<<"+"<<t2<<"="<<sum<<endl;
            cout<<"\n";
        }
    }
    return 0;
}
