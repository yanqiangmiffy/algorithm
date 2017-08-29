#include<iostream>
#include<queue>
using namespace std;
int main(){
    int ele,num,last;
    queue<int> q;
    for(int i=0;i<10;i++){
        q.push(i);
    }
    if(!q.empty()){
        cout<<"队列不是空的"<<endl;
    }
    num=q.size();
    cout<<"队列q的长度为："<<num<<endl;
    last=q.back();
    cout<<"队列q最后一个元素："<<last<<endl;
    for(int j=0;j<q.size();j++){
        ele=q.front();
        cout<<ele<<" ";
        q.pop();
    }
    cout<<endl;
    if(q.empty()){
        cout<<"队列是空的"<<endl;
    }
    return 0;
}
