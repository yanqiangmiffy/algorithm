//将数字转换成数字字符串
#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    while(cin>>str&&str!="0"){
        int num=0;
        for(int i=0;i<str.length();i++){
            num+=str[i]-'0';
            if(num>9){
                num=num/10+num%10;
            }
        }
        cout<<num<<endl;
    }
    return 0;
}
