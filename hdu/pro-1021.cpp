//综上所述，可得到以下对应关系：F(0)= 1, F(1) = 2, F(n) = ( F(n-1) + F(n-2)  )( mod 3) (n>=2).
//index　　0　　1　　2　　3　　4　　5　　6　　7　　8　　9　　10　　11　　12　　13
//value　　1　　2　　0　　2　　2　　1　　0　　1　　1　　2　　 0　　　2　　　2　　1
//print　　no　no　yes　no　　no　no　yes　 no　 no　 no　　yes　　no　　no　　no
//这样我们就得到了如下规律：从第2个开始每隔4个循环一次。
#include<iostream>
using namespace std;
int main(){
    int n;
    while(cin>>n){
        if((n-2)%4){
            cout<<"no"<<endl;
        }else{
            cout<<"yes"<<endl;
        }
    }
    return 0;
}
