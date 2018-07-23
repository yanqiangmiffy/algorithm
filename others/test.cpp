#include<iostream>
using namespace std;
int NthPrime(int n){
        int i = 2, j = 1;
        while (true) {
            j = j + 1;
            if (j > i / j) {
                n--;
                if (n == 0)
                    break;
                j = 1;
            }
            if (i % j == 0) {
                i++;
                j = 1;
            }
        }
        return i;
}
int main()
{
    int n,num,count=0;     //count代表已经找到了几个素数
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>num;
        int x=NthPrime(num);
        cout<<x<<endl;
    }
    return 0;
}
