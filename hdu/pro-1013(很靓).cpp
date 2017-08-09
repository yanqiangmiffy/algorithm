//http://blog.sina.com.cn/s/blog_7f53331d0100r4qq.html
#include<stdio.h>
#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    while(cin>>str&&str!="0"){
        int num=0;
        for(int i=0;str[i];i++){
            num+=str[i]-'0';
        }
        printf("%d\n",num%9==0?9:num%9);
    }
    return 0;
}
