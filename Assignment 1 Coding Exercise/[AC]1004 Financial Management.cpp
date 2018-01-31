#include <iostream>
#include<iomanip>
using namespace std;
int main() {
    double sum = 0;
    double item = 0;
    for (int i=0; i<12; i++) {
        cin>>item;
        sum+=item;
    }
    cout.setf(ios::fixed);
    cout<<"$"<<setprecision(2)<<sum/12.0<<endl;
    return 0;
}
