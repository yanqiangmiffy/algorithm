#include<iostream>
using namespace std;
int fibonacci(int n){
    if(n==1||n==2){
        return 1;
    }else{
        return (fibonacci(n-1)+fibonacci(n-2));
    }

}
int main(){
    int n,result;
    while(cin>>n){
        result=fibonacci(n);
        cout<<"the fibonacci of "<<n<<" is:"<<result<<endl;
    }
    return 0;
}
