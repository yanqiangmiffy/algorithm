//http://blog.sina.com.cn/s/blog_002e20310100xg0h.html
#include<stdio.h>
#include<string.h>
int main(){
    int a,b,n;
    while(scanf("%d%d%d",&a,&b,&n)==3){
        if(!a&&!b&&!n){
            break;
        }
        int arr[48];
        arr[1]=1;
        arr[2]=1;
        for(int i=3;i<48;i++){
            arr[i]=(a*arr[i-1]+b*arr[i-2])%7;
        }
        printf("%d\n",arr[n%48]);
    }
}
