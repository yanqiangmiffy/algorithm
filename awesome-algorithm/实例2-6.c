#include<stdio.h>
//��������
void quick_sort(int *a,int left,int right){
    if(left>right){/*�������������ڻ��ߵ����ұߵ������ʹ����Ѿ��������һ������*/
        return;
    }
    int i=left;
    int j=right;
    int key=a[left];
    while(i<j){
        while(i<j&&key<=a[j]){
        /*Ѱ�ҽ������������ǣ�1���ҵ�һ��С�ڻ��ߴ���key���������ڻ�С��ȡ����������
        ���ǽ���2��û�з�������1�ģ�����i��j�Ĵ�Сû�з�ת*/
            j--;
        }
        a[i]=a[j];

        while(i < j && key>= a[i])
        /*����i�ڵ�������ǰѰ�ң�ͬ�ϣ�����ע����key�Ĵ�С��ϵֹͣѭ���������෴��
        ��Ϊ����˼���ǰ����������ӣ������������ߵ�����С��key�Ĺ�ϵ�෴*/
        {
            i++;
        }
        a[j]=a[i];
        a[i]=key;/*���ڵ���������һ���Ժ�Ͱ��м���key�ع�*/
        quick_sort(a,left,i-1);
        quick_sort(a,i+1,right);
    }

}
 int main(){
        int a[10]={1,2,434,65,6,54,7,60,13,8};
        int i;
        quick_sort(a,0,9);
        for(i=0;i<10;i++){
            printf("%d ",a[i]);
        }
}
