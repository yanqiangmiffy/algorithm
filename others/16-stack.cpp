/*
empty() 堆栈为空则返回真

pop() 移除栈顶元素

push() 在栈顶增加元素

size() 返回栈中元素数目

top() 返回栈顶元素
*/
#include<iostream>
#include<stack>
using namespace std;
int main(){
    //创建栈 s
    stack<int> s;
    //将元素压入栈
    for(int i=0;i<10;i++){
        s.push(i);
    }
//    if(!s.empty()){
//        cout<<"栈s不是空的"<<endl;
//    }
    cout<<"栈s中元素的个数为："<<s.size()<<endl;
    while(!s.empty()){
        cout<<" "<<s.top();//获取栈顶元素
        s.pop();//弹出栈顶元素
    }
    cout<<endl;
    if(s.empty()){
        cout<<"栈s现在为空"<<endl;
    }
    return 0;
}
