/*
������һ����NȻ����N�����룬ÿ��ÿ������2������n,m��n=m=0ʱ������
��a��b����0<a<b<n��ʹ(a^2+b^2 +m)/(ab) ��ֵΪ����ʱ��
��ô���a��b����һ�飬���������������һ�����룬����һ�������
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
