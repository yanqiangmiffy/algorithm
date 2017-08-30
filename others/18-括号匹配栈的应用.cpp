/*

1. 括号匹配的四种可能性：
①左右括号配对次序不正确
②右括号多于左括号
③左括号多于右括号
④左右括号匹配正确

2. 算法思想：
1.顺序扫描每一个字符直至该行结束(遇到'\n'),当遇到栈空或者遇到左括号时该括号进栈；
2.当扫描到某一种类型的右括号时，比较当前栈顶元素是否与之匹配，若匹配，出栈继续判断；
3.若当前栈顶元素与当前扫描的右括号括号不匹配，则将该右括号进栈(此时已经匹配失败)；
4.若最终栈为空，则括号匹配成功，如果不为空，则不成功；
*/
#include<iostream>
#include<stack>
#include<string>
using namespace std;
int main(){

    int n;
    cin>>n;
    while(n--){
        stack<char> s;
        string ch;
        cin>>ch;
        for(int i=0;i<ch.length();i++){
            if(s.empty()){//如果栈为空继续进栈

                s.push(ch[i]);
            }else{
                if(ch[i]=='('||ch[i]=='[') s.push(ch[i]);
                else{
                    if(ch[i]==')'){
                        if(s.top()=='(')s.pop();
                        else s.push(ch[i]);
                    }
                    if(ch[i]==']'){
                        if(s.top()=='[')s.pop();
                        else s.push(ch[i]);
                    }
                }
            }
        }
        if(s.empty()){
            cout<<"Yes"<<endl;
        }else{
            cout<<"No"<<endl;
        }
    }
}
