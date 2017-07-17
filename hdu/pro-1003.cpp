//递归 http://blog.csdn.net/code_pang/article/details/7772200
#include<iostream>
using namespace std;
int main(){
    int i,caseNum,testNum;
    int n,number,sum,startPosition,endPosition,tempPosition,maxSum;
    cin>>testNum;
    for(caseNum=1;caseNum<=testNum;caseNum++){
        maxSum=-9999;
        sum=0;
        tempPosition=1;
        cin>>n;
        for(i=1;i<=n;i++){
            cin>>number;
            sum+=number;
            if(sum>maxSum){
                maxSum=sum;
                startPosition=tempPosition;
                endPosition=i;
            }
            if(sum<0){
                sum=0;
                tempPosition=i+1;
            }
        }
        cout<<"Case"<<" "<<caseNum<<":"<<"\n"<<maxSum<<" "<<startPosition<<" "<<endPosition<<"\n";
        if(testNum!=caseNum){
            cout<<"\n";
        }
    }
    return 0;
}
