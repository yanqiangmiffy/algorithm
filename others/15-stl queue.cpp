#include<iostream>
#include<queue>
using namespace std;
int main(){
    int e,n,m;
    queue<int> q;
    for(int i=0;i<10;i++){
        q.push(i);
    }
    if(!q.empty()){
        cout<<"���в�Ϊ��"<<endl;
    }
    n=q.size();
    cout<<"����q�ĳ���Ϊ��"<<n<<endl;
    m=q.back();
    cout<<"����q���ѹ���Ԫ��"<<m<<endl;
    for(int j=0;j<n;j++){
        e=q.front();
        cout<<e<<" ";
        q.pop();
    }
    cout<<endl;
    if(q.empty()){
        cout<<"����Ϊ��"<<endl;
    }
    return 0;
}
