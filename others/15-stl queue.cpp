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
        cout<<"队列不为空"<<endl;
    }
    n=q.size();
    cout<<"队列q的长度为："<<n<<endl;
    m=q.back();
    cout<<"队列q最后被压入的元素"<<m<<endl;
    for(int j=0;j<n;j++){
        e=q.front();
        cout<<e<<" ";
        q.pop();
    }
    cout<<endl;
    if(q.empty()){
        cout<<"队列为空"<<endl;
    }
    return 0;
}
