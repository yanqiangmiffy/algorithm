#include<iostream>
#include<iomanip>
using namespace std;
int get_min(int a[],int n);
int get_max(int a[],int n);
int main(){
    int n;
    while(cin>>n){
        if(n>2&&n<=100){
            double num,sum=0,score=0,min_temp,max_temp;
            for(int i=0;i<n;i++){
                cin>>num;

                if(min_temp>num||min_temp==num){
                    min_temp=num;
                }
                else if(max_temp<num||max_temp==num){
                    max_temp=num;
                }
                sum+=num;
            }
            cout<<sum<<endl;
            score=sum-max_temp-min_temp;
            cout<<max_temp<<min_temp<<endl;
            cout<<setprecision(2)<<std::fixed<<static_cast<double>(score/(n-2))<<endl;
            sum=0,score=0;
        }
    }
}
int get_min(int arr[],int n){
    int temp;
    for(int i=0;i<n;i++){
        if(temp>arr[i]||temp==arr[i]){
            temp=arr[i];
        }
    }
    return temp;
}

int get_max(int arr[],int n){
    int temp;
    for(int i=0;i<n;i++){
        if(temp<arr[i]||temp==arr[i]){
            temp=arr[i];
        }
    }
    return temp;
}
