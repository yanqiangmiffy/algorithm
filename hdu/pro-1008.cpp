#include<iostream>
using namespace std;
int main(){
    //����¥�����
    int n;
    while(cin>>n&&n){
        int flag=0,floor=0,dis=0,time=0;
        for(int i=0;i<n;i++){
            cin>>floor;

            if(floor>flag){//¥������
                for(int j=1;j<=floor-flag;j++){
                    time+=6;
                }

            }
            else if(floor<flag){//¥������
                for(int j=1;j<=flag-floor;j++){
                    time+=4;
                }
            }
            time+=5;
            flag=floor;
        }
        cout<<time<<endl;
    }
    return 0;
}
