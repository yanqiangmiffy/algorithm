/*

1. ����ƥ������ֿ����ԣ�
������������Դ�����ȷ
�������Ŷ���������
�������Ŷ���������
����������ƥ����ȷ

2. �㷨˼�룺
1.˳��ɨ��ÿһ���ַ�ֱ�����н���(����'\n'),������ջ�ջ�������������ʱ�����Ž�ջ��
2.��ɨ�赽ĳһ�����͵�������ʱ���Ƚϵ�ǰջ��Ԫ���Ƿ���֮ƥ�䣬��ƥ�䣬��ջ�����жϣ�
3.����ǰջ��Ԫ���뵱ǰɨ������������Ų�ƥ�䣬�򽫸������Ž�ջ(��ʱ�Ѿ�ƥ��ʧ��)��
4.������ջΪ�գ�������ƥ��ɹ��������Ϊ�գ��򲻳ɹ���
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
            if(s.empty()){//���ջΪ�ռ�����ջ

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
