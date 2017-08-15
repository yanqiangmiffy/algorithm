/*
先输入一个数N然后会分N块输入，每块每次输入2个数，n,m，n=m=0时结束，
当a和b满足0<a<b<n且使(a^2+b^2 +m)/(ab) 的值为整数时，
那么这对a和b就是一组，输出这样的组数，一行输入，跟着一样输出。
*/
#include<iostream>
using namespace std;
int main(){
    int n,m,N;
    cin>>N;
    while(N--){
        int num=0;
        while(cin>>n>>m&&n!=0){
            int a,b;
            int cnt=0;
            for(a=1;a<n;a++){
                for(b=a+1;b<n;b++){
                    if((a*a+b*b+m)%(a*b)==0){
                        cnt++;
                    }
                }
            }
            cout<<"Case "<<++num<<": "<<cnt<<endl;
        }

        if(N){
            cout<<endl;
        }
    }
}
