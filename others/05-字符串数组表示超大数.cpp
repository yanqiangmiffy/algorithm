#include<iostream>
#include<cstdio>
using namespace std;
int main(){
    char a[201];
    int i,s=0;
    scanf("%s",&a);
    for(i=0;a[i]<'9'&&a[i]>'0';i++){
        s+=a[i]-'0';
    }
    if(s%3==0){
        printf("YES\n");
    }else{
        printf("No\n");
    }
    return 0;
}
