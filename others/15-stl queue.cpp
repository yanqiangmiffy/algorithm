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
        cout<<"���в��ǿյ�"<<endl;
    }
    num=q.size();
    cout<<"����q�ĳ���Ϊ��"<<num<<endl;
    last=q.back();
    cout<<"����q���һ��Ԫ�أ�"<<last<<endl;
    for(int j=0;j<q.size();j++){
        ele=q.front();
        cout<<ele<<" ";
        q.pop();
    }
    cout<<endl;
    if(q.empty()){
        cout<<"�����ǿյ�"<<endl;
    }
    return 0;
}
