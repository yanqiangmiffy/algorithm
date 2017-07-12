//ººÅµËþ½â·¨Ò»
#include<stdio.¡¤h>
void han(char x,char y,char z,int n){
    if(n==1){
        printf("num %d from %c to %c\n",n,x,z);
    }
    else{
        han(x,z,y,n-1);
        printf("num %d from %c to %c\n",n,x,z);
        han(y,x,z,n-1);
    }
}
int main(){
    int n;
    char x='A',y='B',z='C';
    scanf("%d",&n);
    han(x,y,z,n);
    return 0;
}
