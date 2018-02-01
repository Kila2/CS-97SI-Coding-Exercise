#include <iostream>
#include <cmath>
using namespace std;

bool prime(int a){
    for (int i=2; i<=sqrt((double)a); i++) {
        if(a%i==0){
            return false;
        }
    }
    return true;
}

int main(){
    while (true) {
        int n;
        cin>>n;
        if(n==0){
            break;
        }
        if(n%2!=0){
            cout<<"Goldbach's conjecture is wrong."<<endl;
        }
        else{
            for (int i=3; i<=n/2; i++) {
                if(prime(i)&&prime(n-i)){
                    cout<<n<<" = "<<i<<" + "<<n-i<<endl;
                    break;
                }
            }
        }
    }
    return 0;
}
