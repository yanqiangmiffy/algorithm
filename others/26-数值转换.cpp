#include<iostream>
using namespace std;
int main(){
    //������תΪ10����
    string p="101";
    int n=0;
    for(int i=0;i<p.length();i++){
        n=n*2+(p[i]-'0');
    }
    cout<<n<<endl;
}
