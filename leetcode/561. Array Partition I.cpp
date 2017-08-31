#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
/*int arrayPairSum(vector<int>& nums) {
    int n=nums.size();
    int max=0;
    sort(nums.begin(),nums.end());
    for(int i=0;i<n-1;i+2){
        max+=nums[i];
    }
    return max;
}*/
int arrayPairSum(vector<int>& nums) {
        vector<int> hashtable(20001,0);
        for(size_t i=0;i<nums.size();i++)
        {
            hashtable[nums[i]+10000]++;
        }
        int ret=0;
        int flag=0;
        for(size_t i=0;i<20001;){
            if((hashtable[i]>0)&&(flag==0)){
                ret=ret+i-10000;
                flag=1;
                hashtable[i]--;
            }else if((hashtable[i]>0)&&(flag==1)){
                hashtable[i]--;
                flag=0;
            }else i++;
        }
        return ret;
    }
int main(){
    int n,num,max;//nÎªÅ¼Êý
    vector<int> nums;
    while(cin>>n){
        for(int i=0;i<n;i++ ){
            cin>>num;
            nums.push_back(num);
        }
        max=arrayPairSum(nums);
        cout<<max<<endl;
    }

}
