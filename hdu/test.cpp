#include<iostream>
#include<stdio.h>
#include<algorithm>
#include<iomanip>
using namespace std;
struct house{
    int bean_num;//ÿ�����京�еĶ�������
    int cost;//��ȡbean_num�����ӣ�����Ҫ��è����
    double rate;//�Լ۱�
}h[1005];

bool cmp(house a,house b){
    if(a.rate!=b.rate)
    return a.rate>b.rate;
    else
    return a.bean_num<b.bean_num;
}
int main(){
    int m,n,i;
    double gains;
    while(cin>>m>>n&&m!=-1&&n!=-1){
        gains=0;
        for(i=0;i<n;i++){
            cin>>h[i].bean_num>>h[i].cost;
            h[i].rate=h[i].bean_num*1.0/h[i].cost;
        }
        sort(h,h+n,cmp);
        for(i=0;i<n;i++){
            if(m>h[i].cost){
                m-=h[i].cost;
                gains+=h[i].bean_num;
            }else{
                gains+=h[i].rate*m;
                break;
            }
        }
        cout<<setiosflags(ios::fixed)<<setprecision(3)<<gains<<endl;
    }
    return 0;
}
