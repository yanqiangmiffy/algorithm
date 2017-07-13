#include<stdio.h>
//快速排序
void quick_sort(int *a,int left,int right){
    if(left>right){/*如果左边索引大于或者等于右边的索引就代表已经整理完成一个组了*/
        return;
    }
    int i=left;
    int j=right;
    int key=a[left];
    while(i<j){
        while(i<j&&key<=a[j]){
        /*寻找结束的条件就是，1，找到一个小于或者大于key的数（大于或小于取决于你想升
        序还是降序）2，没有符合条件1的，并且i与j的大小没有反转*/
            j--;
        }
        a[i]=a[j];

        while(i < j && key>= a[i])
        /*这是i在当组内向前寻找，同上，不过注意与key的大小关系停止循环和上面相反，
        因为排序思想是把数往两边扔，所以左右两边的数大小与key的关系相反*/
        {
            i++;
        }
        a[j]=a[i];
        a[i]=key;/*当在当组内找完一遍以后就把中间数key回归*/
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
