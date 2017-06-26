#include<iostream>
using namespace std;
int get_min(int arr[],int n);
int main(){
    int n,sum=0;
    while(cin>>n){
        int arr[n];
        if(1){
            for(int i=0;i<n;i++){
                cin>>arr[i];
                sum+=arr[i];
            }
            cout<<sum;
            int b=get_min(arr,n);
            cout<<"×îĞ¡Öµ"<<b;
        }
    }

}
int get_min(int arr[],int n){
    int temp=0;
    for(int i=0;i<n;i++){
        if(temp<arr[i]){
            temp=arr[i];
        }
    }
    return temp;
}
