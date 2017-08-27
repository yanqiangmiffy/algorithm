#include<iostream>
#include<vector>
using namespace std;
int main(){
    //向向量a中添加元素
    vector<int> a;
    for(int i=0;i<10;i++){
        a.push_back(i);
    }
    for(int i=0;i<a.size();i++){
        cout<<" "<<a[i];
    }
    return 0;
}
