/*
c.clear()         �Ƴ��������������ݡ�
c.empty()         �ж������Ƿ�Ϊ�ա�
c.erase(pos)        ɾ��posλ�õ�����
c.erase(beg,end) ɾ��[beg,end)���������
c.front()         ���ص�һ�����ݡ�
c.insert(pos,elem)  ��posλ�ò���һ��elem����
c.pop_back()     ɾ�����һ�����ݡ�
c.push_back(elem) ��β������һ�����ݡ�
c.resize(num)     �������ø������Ĵ�С
c.size()         ��������ʵ�����ݵĸ�����
c.begin()           ����ָ��������һ��Ԫ�صĵ�����
c.end()             ����ָ���������һ��Ԫ�صĵ�����
*/
#include<iostream>
#include<vector>
using namespace std;
int main(){
    //������v�����Ԫ��
    vector<int> v;
    for(int i=0;i<10;i++){
        v.push_back(i);
    }

    //������v�ж�ȡ����
    for(int i=0;i<v.size();i++){
        cout<<" "<<v[i];
    }
    cout<<endl;

    //ʹ�õ������������� �������൱��ָ��
    cout<<"ʹ�õ�������ȡ����"<<endl;
    vector<int>::iterator iter;
    for( iter = v.begin(); iter != v.end(); iter++ )
    {
      cout<<" "<< *iter;
    }
    cout<<endl;

    //ɾ������
    for(vector<int>::iterator it=v.begin();it!=v.end();){
        v.erase(it);
    }

    if(v.empty()){
        cout<<"����vΪ��"<<endl;
    }
    return 0;
}
