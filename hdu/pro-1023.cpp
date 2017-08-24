#include<iostream>
#include<cstdio>
#include<cstring>

using namespace std;

int a[110][110];    //������������
int b[110];         //���������ĳ���

void Catalan(){     //��������
    int i,j,len,carry,tmp;
    a[1][0]=b[1]=1;
    len=1;
    for(i=2;i<=100;i++){
        for(j=0;j<len;j++)      //�˷�
            a[i][j]=a[i-1][j]*(4*i-2);
        carry=0;
        for(j=0;j<len;j++){     //������˽��
            tmp=carry+a[i][j];
            a[i][j]=tmp%10;
            carry=tmp/10;
        }
        while(carry){       //��λ����
            a[i][len++]=carry%10;
            carry/=10;
        }
        //carry=0;
        for(j=len-1;j>=0;j--){  //����
            tmp=carry*10+a[i][j];
            a[i][j]=tmp/(i+1);
            carry=tmp%(i+1);
        }
        while(!a[i][len-1])     //��λ�㴦��
            len--;
        b[i]=len;
    }
}

int main(){



    int n;
    Catalan();
    while(~scanf("%d",&n)){
        for(int i=b[n]-1;i>=0;i--)
            printf("%d",a[n][i]);
        printf("\n");
    }
    return 0;
}
