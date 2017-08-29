/*
c.clear()         移除容器中所有数据。
c.empty()         判断容器是否为空。
c.erase(pos)        删除pos位置的数据
c.erase(beg,end) 删除[beg,end)区间的数据
c.front()         传回第一个数据。
c.insert(pos,elem)  在pos位置插入一个elem拷贝
c.pop_back()     删除最后一个数据。
c.push_back(elem) 在尾部加入一个数据。
c.resize(num)     重新设置该容器的大小
c.size()         回容器中实际数据的个数。
c.begin()           返回指向容器第一个元素的迭代器
c.end()             返回指向容器最后一个元素的迭代器
*/
#include<iostream>
#include<vector>
using namespace std;
int main(){
    //向向量v中添加元素
    vector<int> v;
    for(int i=0;i<10;i++){
        v.push_back(i);
    }

    //从向量v中读取数据
    for(int i=0;i<v.size();i++){
        cout<<" "<<v[i];
    }
    cout<<endl;

    //使用迭代器遍历数据 迭代器相当于指针
    cout<<"使用迭代器获取数据"<<endl;
    vector<int>::iterator iter;
    for( iter = v.begin(); iter != v.end(); iter++ )
    {
      cout<<" "<< *iter;
    }
    cout<<endl;

    //删除数据
    for(vector<int>::iterator it=v.begin();it!=v.end();){
        v.erase(it);
    }

    if(v.empty()){
        cout<<"向量v为空"<<endl;
    }
    return 0;
}
