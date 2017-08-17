#include<iostream>
#include<cstdio>
#include<string>
using namespace std;
int main(){
    char data[201];
    int n,num;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>num;
        int digits=1;
        for(int j=0;j<num;j++){
            data[j]=(char)(j+1+48);

        }
        for(int k=0;k<num-1;k++){
            int temp=(data[k]-'0')*(data[k+1]-'0')/10;
            cout<<"ำเสý"<<temp<<endl
            if(temp>=1)
                digits+=temp;
        }
        cout<<digits<<endl;
    }

    return 0;
}
