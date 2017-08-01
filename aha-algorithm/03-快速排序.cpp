#include<stdio.h>
#include<iostream>
using namespace std;
int n,a[101];
void quicksort(int left,int right){
    int temp,i ,j ,t;//temp存基数
    if(left>right){
        return;
    }
    temp=a[left];
    i=left;
    j=right;
    while(i!=j){
        //顺序很重要，要先从右往左查找
        while(a[j]>=temp && i<j){
            j--;
        }
        //然后从左往右找
        while(a[i]<=temp&&i<j){
            i++;
        }
        //交换两个数的位置
        if(i<j){//当哨兵没有相遇时
            t=a[i];
            a[i]=a[j];
            a[j]=t;
        }
    }
    //最终基数归位
    a[left]=a[i];
    a[i]=temp;
    quicksort(left,i-1);
    quicksort(i+1,right);
}
int main(){
    cin>>n;
    //输入数据
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    quicksort(0,n-1);//快速排序
    //输出数据
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}
