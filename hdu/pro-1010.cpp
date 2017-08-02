//http://blog.csdn.net/hdd871532887/article/details/41889241
//∆Ê≈ººÙ÷¶
#include<stdio.h>
#include<math.h>
#include<iostream>
using namespace std;
char map[9][9];
int n,m,t,x,dx,dy,ok;
int a[4][2]={{0,1},{0,-1},{1,0},{-1,0}};
void dfs(int x,int y,int time){
    int i,ans;
    if(x==dx&&y==dy&&time==t){
        ok==1;
    }
    if(ok){
        return;
    }
    if(x<1||y<1||x>n||y>n){
        return;
    }
    ans=t-time-abs(dx-x)-abs(dy-y);
}
int main(){

}
