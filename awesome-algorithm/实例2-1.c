//˳�����
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
    {1001,"С��",100},
    {1002,"С��",95},
    {1003,"С��",93},
    {1004,"СϪ",98}
    };
    int addr;
    addr=search(stu,4,1004);
    printf("˳�������Ľ���ǣ�\n");
    printf("ѧ���ǣ�%d\n",stu[addr].id);
    printf("�����ǣ�%s\n",stu[addr].name);
    printf("�����ǣ�%f\n",stu[addr].score);
}
