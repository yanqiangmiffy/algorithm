#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int n,arr[100],max,min;
    double ave=0,sum=0;
    while(cin>>n){
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        max=arr[0],min=arr[0];
        for(int i=0;i<n;i++){
            max=arr[i]>max?arr[i]:max;
            min=arr[i]<min?arr[i]:min;
            sum+=arr[i];
        }
        ave=(sum-min-max)/(n-2);
        cout<<setprecision(2)<<std::fixed<<ave<<endl;
        sum=0;
    }
    return 0;
}
