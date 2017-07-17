#include<iostream>
#include<algorithm>
#include<string>
#include<cstring>
using namespace std;
int main(){
    int n;
    while(cin>>n&&n){
        string colors[1000],bestColor;
        int flag=0,num=0;//初始化
        for(int i=0;i<n;i++){
            cin>>colors[i];
        }
        for(int i=0;i<n;i++){
            num=count(colors,colors+n,colors[i]);//查找个数
            if(num>=flag){
                flag=num;
                bestColor=colors[i];
            }
        }
        cout<<bestColor<<endl;
        memset(colors,0,sizeof(colors));//清空
    }
    return 0;
}
