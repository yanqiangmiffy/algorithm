#include<iostream>
using namespace std;

int gcd(int a,int b){
    if(b==0)return a;
    return gcd(b,a%b);
}

int main(){
    int n,m,num;//n��ʵ��,,ÿ��ʵ����m�����֣�num������������
    int result,temp;//resultΪ���ս����temp���������������С������
    cin>>n;
    while(n--){
        result=temp=1;
        cin>>m;
        for(int i=0;i<m;i++){
            cin>>num;
            temp=result/gcd(result,num)*num;
            result=temp;
        }
        cout<<result<<endl;
    }
}
