#include <iostream>
#include <cmath>
#include <iomanip>
#define PI 3.1415926
using namespace std;
int main(){
    int n,t;
    double r;
    int i = 1;
    cin>>n;
    while (n--) {
        cin>>r>>t;
        cout<<"Scenario #"<<i++<<":"<<endl;
        double x = (r*sin(PI/t))/(1+sin(PI/t));
        cout.setf(ios::fixed);
        cout<<setprecision(3)<<x<<endl;
        cout<<endl;
    }
    return 0;
}