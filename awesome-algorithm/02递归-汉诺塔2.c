//Դ�ԣ�http://blog.csdn.net/kkkkkxiaofei/article/details/8333644/
#include<stdio.h>
int i=1;
void move(int n,char from, char to){//�����Ϊn��������from�ƶ���to
    printf("��%d������%d�ŵ����ӣ�%c----->%c\n",i++,n,from, to);
}
//��һ����Ϊ��ʼ�����ڶ���Ϊ��������������ΪĿ����
void hanio(int n,char from,char depend_on,char to){//��n�������ɳ�ʼ���ƶ���Ŀ����
    if(n==1){
        move(1,from ,to);//ֻ��һ������ʱ��ֱ�ӽ���ʼ���ϵ������ƶ���Ŀ����
    }
    else{
        hanio(n-1,from,to,depend_on);//�ֽ���ʼ����ǰn-1�������ƶ����������ϣ���Ҫ����Ŀ������
        move(n,from,to);//Ȼ�󽫵�n�������ƶ���Ŀ������
        hanio(n-1,depend_on,from,to);//��󽫽������ϵ�n-1�������ƶ���Ŀ�����ϣ���Ҫ������ʼ����
    }
}
int main(){
    int n;
    printf("���������ӵĸ�����\n");
    scanf("%d",&n);
    char x='A',y='B',z='C';
    printf("���ӵ��ƶ�������£�\n");
    hanio(n,x,y,z);
    return 0;
}
