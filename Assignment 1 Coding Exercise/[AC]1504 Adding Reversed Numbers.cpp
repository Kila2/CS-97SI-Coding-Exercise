#include <iostream>
using namespace std;
int reverse(int t){
    int r = 0;
    while (t/10!=0) {
        r = r*10 + t%10;
        t/=10;
    }
    r = r*10 + t;
    return r;
}
int main(){
    int n,a,b;
    cin>>n;
    while (n--) {
        cin>>a>>b;
        cout<<reverse(reverse(a)+reverse(b))<<endl;
    }
    return 0;
}