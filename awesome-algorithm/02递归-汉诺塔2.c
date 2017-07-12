//源自：http://blog.csdn.net/kkkkkxiaofei/article/details/8333644/
#include<stdio.h>
int i=1;
void move(int n,char from, char to){//将编号为n的盘子由from移动到to
    printf("第%d步：将%d号的盘子：%c----->%c\n",i++,n,from, to);
}
//第一个塔为初始塔，第二个为借用塔，第三个为目标塔
void hanio(int n,char from,char depend_on,char to){//将n个盘子由初始塔移动到目标塔
    if(n==1){
        move(1,from ,to);//只有一个盘子时：直接将初始塔上的盘子移动到目标塔
    }
    else{
        hanio(n-1,from,to,depend_on);//现将初始塔的前n-1个盘子移动到借用塔上
        move(n,from,to);//然后将第n个盘子移动到目标塔上
        hanio(n-1,depend_on,from,to);//最后将借用塔上的n-1个盘子移动到目标塔上
    }
}
int main(){
    int n;
    printf("请输入盘子的个数：\n");
    scanf("%d",&n);
    char x='A',y='B',z='C';
    printf("盘子的移动情况如下：\n");
    hanio(n,x,y,z);
    return 0;
}
