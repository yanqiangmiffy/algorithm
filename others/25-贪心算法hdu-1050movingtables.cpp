#include<iostream>
#include<algorithm>
using namespace std;

struct table{
    int from,to;
    bool flag;//记录改房间是否被访问过
}moving[205];

bool cmp(table a,table b){
    return a.from<b.from;
}

int main(){
    int i,T,n;//T代表测试实例个数，n代表每个测试下的table个数
    cin>>T;
    while(T--){
        cin>>n;
        for(i=0;i<n;i++){
            cin>>moving[i].from>>moving[i].to;
           	if(moving[i].from > moving[i].to)
			{
				int temp = moving[i].from;
				moving[i].from = moving[i].to;
				moving[i].to = temp;
			}//可能出发位置比目的地房间大,无论大小，我们都可以看做从小的房间移动到大的房间
            if(moving[i].from%2==0){//考虑实际情况，出发房间为偶数是减一，可参照题中给出的图一
                moving[i].from--;
            }
            if(moving[i].to%2==1){//考虑实际情况，结束房间为奇数是加一，
                moving[i].to++;
            }
            moving[i].flag=false;//初始化房间未被访问过
        }
        sort(moving,moving+n,cmp);//将所有table按出发房间从小到大排序;
        bool completion=false;//是否所有的table移动结束
        int cnt=-1,priorTo;//priorTo 记录前一个table移动结束的房间
        while(!completion){
            completion=true;
            cnt++;
            priorTo=0;
            for(i=0;i<n;i++){//每一轮将可以同时移动的table全部移动完：比如2->5,6->10，因为他们没有共用走廊
                if(!moving[i].flag&&moving[i].from>priorTo){
                    moving[i].flag=true;//标记当前table已经移动完毕
                    priorTo=moving[i].to;
                    completion=false;
                }
            }
        }
        cout<<cnt*10<<endl;
    }
    return 0;
}
