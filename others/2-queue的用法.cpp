/*queue ģ����Ķ�����<queue>ͷ�ļ��С�
��stack ģ��������ƣ�queue ģ����Ҳ��Ҫ����ģ�������һ����Ԫ�����ͣ�һ��������
�ͣ�Ԫ�������Ǳ�Ҫ�ģ����������ǿ�ѡ�ģ�Ĭ��Ϊdeque ���͡�
����queue �����ʾ���������£�
queue<int> q1;
queue<double> q2;

queue �Ļ��������У�
��ӣ�������q.push(x); ��x �ӵ����е�ĩ�ˡ�
���ӣ�������q.pop(); �������еĵ�һ��Ԫ�أ�ע�⣬�����᷵�ر�����Ԫ�ص�ֵ��
���ʶ���Ԫ�أ�������q.front()�������类ѹ����е�Ԫ�ء�
���ʶ�βԪ�أ�������q.back()�������ѹ����е�Ԫ�ء�
�ж϶��пգ�������q.empty()�������п�ʱ������true��
���ʶ����е�Ԫ�ظ�����������q.size()
*/
#include<iostream>
#include<queue>
using namespace std;
int main(){
    int e,n,m;
    queue<int> q1;
    for(int i=0;i<10;i++){
        q1.push(i);
    }
    if(!q1.empty()){
        cout<<"���в�Ϊ��"<<endl;
    }
    n=q1.size();
    cout<<n<<endl;
    m=q1.back();
    cout<<m<<endl;
    for(int j=0;j<n;j++){
        e=q1.front();
        cout<<e<<" ";
        q1.pop();
    }
    cout<<endl;
    if(q1.empty())
        cout<<"q1 ����Ϊ��"<<endl;

    return 0;
}
