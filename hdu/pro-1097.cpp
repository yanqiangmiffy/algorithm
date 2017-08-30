#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int a[10]={1, 1, 4, 4, 2, 1, 1, 4, 4, 2};
    int m,n,last,ans;
    while(cin>>m>>n){
        last=m%10;
        ans=(int)pow(last,n%a[last]?n%a[last]:a[last]);
        cout<<ans%10<<endl;
    }
    return 0;
}
