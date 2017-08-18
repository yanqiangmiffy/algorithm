#include<iostream>
using namespace std;

int gcd(int a,int b){
    if(b==0)return a;
    return gcd(b,a%b);
}

int main(){
    int n,m,num;//n个实例,,每个实例有m个数字，num代表输入数字
    int result,temp;//result为最终结果，temp存放相邻两个数最小公倍数
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
