/*
empty() ��ջΪ���򷵻���

pop() �Ƴ�ջ��Ԫ��

push() ��ջ������Ԫ��

size() ����ջ��Ԫ����Ŀ

top() ����ջ��Ԫ��
*/
#include<iostream>
#include<stack>
using namespace std;
int main(){
    //����ջ s
    stack<int> s;
    //��Ԫ��ѹ��ջ
    for(int i=0;i<10;i++){
        s.push(i);
    }
//    if(!s.empty()){
//        cout<<"ջs���ǿյ�"<<endl;
//    }
    cout<<"ջs��Ԫ�صĸ���Ϊ��"<<s.size()<<endl;
    while(!s.empty()){
        cout<<" "<<s.top();//��ȡջ��Ԫ��
        s.pop();//����ջ��Ԫ��
    }
    cout<<endl;
    if(s.empty()){
        cout<<"ջs����Ϊ��"<<endl;
    }
    return 0;
}
