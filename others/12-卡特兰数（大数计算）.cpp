//���޷���64λ���� ��߿��Լ���33���������� �������Ҫ���� ��ô��ֻ���ô���������
//h(n)=h(n-1)*(4*n-2)/(n+1);
#include<iostream>
using namespace std;
unsigned long long ctl[34]={0,1};
void catalan(){
    int i;
    for(i=2;i<34;i++){
        ctl[i]=ctl[i-1]*(4*i-2)/(i+1);
    }
}
int main(){
    catalan();
    for(int i=0;i<34;i++){
        cout<<ctl[i]<<endl;
    }
    return 0;
}
