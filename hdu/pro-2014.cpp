#include<iostream>
#include<iomanip>
using namespace std;
int get_min(int a[],int n);
int get_max(int a[],int n);
int main(){
    int n,arr[100];
    while(cin>>n){
        double num,sum=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            sum+=arr[i];
        }
        int max=get_min(arr,n);
        int min=get_max(arr,n);
        cout<<setprecision(2)<<std::fixed<<(sum-max-min)/(n-2)<<endl;
        sum=0;
    }
}
int get_min(int arr[],int n){
    int temp=arr[0];
    for(int i=0;i<n;i++){

        if(temp>arr[i]||temp==arr[i]){
            temp=arr[i];
        }
    }
    return temp;
}
int get_max(int arr[],int n){
    int temp=arr[0];
    for(int i=0;i<n;i++){
        if(temp<arr[i]||temp==arr[i]){
            temp=arr[i];
        }
    }
    return temp;
}
