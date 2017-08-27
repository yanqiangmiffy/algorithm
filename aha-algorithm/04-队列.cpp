#include<stdio.h>
#include<iostream>
using namespace std;
int main(){
    int q[102]={0,6,3,1,7,5,8,9,2,4},head,tail;
    int i;
    //初始队列
    head=1;
    tail=10;
    while(head<tail){
        //打印队首到队尾
        printf("%d`",q[head]);
        head++;
        //现将新队首的数添加到队尾
        q[tail]=q[head];
        tail++;
        //再将队首出队
        head++;
    }
    return 0;
}
