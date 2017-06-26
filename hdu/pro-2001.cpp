#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;
int main(){
    double x1,y1,x2,y2,dis;
    while(cin>>x1>>y1>>x2>>y2){
        dis=sqrt(pow((x2-x1),2)+pow((y2-y1),2));
        cout<<setprecision(2)<<std::fixed<<dis<<endl;
    }
    return 0;
}
