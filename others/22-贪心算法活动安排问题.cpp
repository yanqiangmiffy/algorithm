#include<iostream>
#include<algorithm>
using namespace std;
struct actime{
    int start,finish;
}act[1002];
bool cmp(actime a,actime b){
    return a.finish<b.finish;
}
int main(){
    int i,n,t,total;
    while(cin>>n){//��ĸ���
        for(i=0;i<n;i++){
            cin>>act[i].start>>act[i].finish;
        }
        sort(act,act+n,cmp);//�������ʱ���С��������
        t=-1;
        total=0;
        for(i=0;i<n;i++){
            if(t<=act[i].start){
                total++;
                t=act[i].finish;
            }
        }
        cout<<total<<endl;
    }
    return 0;
}
