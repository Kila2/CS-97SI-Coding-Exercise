#include <iostream>
using namespace std;
int main() {
    double num;
    while(cin>>num&&num!=0) {
        double n = 2;
        double sum = 0;
        while(sum<num){
            sum+=1/n;
            n++;
        }
        cout<<n-2<<" card(s)"<<endl;
    }
    return 0;
}
