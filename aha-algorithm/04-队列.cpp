#include<stdio.h>
#include<iostream>
using namespace std;
int main(){
    int q[102]={0,6,3,1,7,5,8,9,2,4},head,tail;
    int i;
    //��ʼ����
    head=1;
    tail=10;
    while(head<tail){
        //��ӡ���׵���β
        printf("%d`",q[head]);
        head++;
        //�ֽ��¶��׵�����ӵ���β
        q[tail]=q[head];
        tail++;
        //�ٽ����׳���
        head++;
    }
    return 0;
}
