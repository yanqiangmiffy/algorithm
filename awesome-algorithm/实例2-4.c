#include<stdio.h>
//选择排序
void select_sort(int k[],int n){
    int i,j,min;
    int temp;
    for(i=0;i<=n-1;i++){
        min=i;
        for(j=i;j<=n;j++){//在后n-i个元素中找到最小的元素位置
            if(k[j]<k[min]){
                min=j;//用min记录最小元素的位置
                if(min!=i){//如果最小元素不位于后n-i个元素的第一个位置
                    temp=k[min];
                    k[min]=k[i];//元素交换
                    k[i]=temp;
                }
            }
        }
    }
}
int main(){
    int i,a[11]={4,2,5,6,3,7,8,0,9,12,-100};
    printf("数组原始数据是：\n");
    for(i=0;i<=10;i++){
        printf("%d ",a[i]);
    }
    select_sort(a,10);
    printf("\n排序后的数据是：\n");
    for(i=0;i<=10;i++){
        printf("%d ",a[i]);
    }
}
