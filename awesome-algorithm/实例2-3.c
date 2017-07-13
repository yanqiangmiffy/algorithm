//直接插入排序
#include<stdio.h>
void insert_sort(int a[],int n){//待排数组a[]，数组有n个元素
    int i,j,temp;
    for(i=1;i<n;i++){
        temp=a[i];
        j=i-1;
        while(j>=0&&temp<a[j]){
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=temp;
    }
}
int main(){
    int array[]={2,10,4,5,1,9};
    int i=0;
    insert_sort(array,6);
    for(;i<6;i++){
        printf("%d ",array[i]);
    }
    return 0;
}
