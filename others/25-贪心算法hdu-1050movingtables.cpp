#include<iostream>
#include<algorithm>
using namespace std;

struct table{
    int from,to;
    bool flag;//��¼�ķ����Ƿ񱻷��ʹ�
}moving[205];

bool cmp(table a,table b){
    return a.from<b.from;
}

int main(){
    int i,T,n;//T�������ʵ��������n����ÿ�������µ�table����
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
			}//���ܳ���λ�ñ�Ŀ�ĵط����,���۴�С�����Ƕ����Կ�����С�ķ����ƶ�����ķ���
            if(moving[i].from%2==0){//����ʵ���������������Ϊż���Ǽ�һ���ɲ������и�����ͼһ
                moving[i].from--;
            }
            if(moving[i].to%2==1){//����ʵ���������������Ϊ�����Ǽ�һ��
                moving[i].to++;
            }
            moving[i].flag=false;//��ʼ������δ�����ʹ�
        }
        sort(moving,moving+n,cmp);//������table�����������С��������;
        bool completion=false;//�Ƿ����е�table�ƶ�����
        int cnt=-1,priorTo;//priorTo ��¼ǰһ��table�ƶ������ķ���
        while(!completion){
            completion=true;
            cnt++;
            priorTo=0;
            for(i=0;i<n;i++){//ÿһ�ֽ�����ͬʱ�ƶ���tableȫ���ƶ��꣺����2->5,6->10����Ϊ����û�й�������
                if(!moving[i].flag&&moving[i].from>priorTo){
                    moving[i].flag=true;//��ǵ�ǰtable�Ѿ��ƶ����
                    priorTo=moving[i].to;
                    completion=false;
                }
            }
        }
        cout<<cnt*10<<endl;
    }
    return 0;
}
