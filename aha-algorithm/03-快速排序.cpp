#include<stdio.h>
#include<iostream>
using namespace std;
int n,a[101];
void quicksort(int left,int right){
    int temp,i ,j ,t;//temp�����
    if(left>right){
        return;
    }
    temp=a[left];
    i=left;
    j=right;
    while(i!=j){
        //˳�����Ҫ��Ҫ�ȴ����������
        while(a[j]>=temp && i<j){
            j--;
        }
        //Ȼ�����������
        while(a[i]<=temp&&i<j){
            i++;
        }
        //������������λ��
        if(i<j){//���ڱ�û������ʱ
            t=a[i];
            a[i]=a[j];
            a[j]=t;
        }
    }
    //���ջ�����λ
    a[left]=a[i];
    a[i]=temp;
    quicksort(left,i-1);
    quicksort(i+1,right);
}
int main(){
    cin>>n;
    //��������
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    quicksort(0,n-1);//��������
    //�������
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}
