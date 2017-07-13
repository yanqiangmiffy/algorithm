//顺序查找
#include<stdio.h>
typedef struct student{
    int id;
    char name[10];
    float score;
}Student;

int search(Student stu[],int n,int key){
    int i;
    for(i=0;i<n;i++){
        if(stu[i].id==key){
            return i;
        }
    }
    return -1;
}
int main(){
    Student stu[4]={
    {1001,"小明",100},
    {1002,"小华",95},
    {1003,"小安",93},
    {1004,"小溪",98}
    };
    int addr;
    addr=search(stu,4,1004);
    printf("顺序搜索的结果是：\n");
    printf("学号是：%d\n",stu[addr].id);
    printf("姓名是：%s\n",stu[addr].name);
    printf("分数是：%f\n",stu[addr].score);
}
