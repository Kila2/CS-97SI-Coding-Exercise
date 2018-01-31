#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int r = 0;
    int sum = 1;
    int i;
    for (i = 2; sum < n; i++) {
        sum+=i;
    }
    for (int j=1; j<=i-1; j++) {
        if(j%2==0){
            if(n%j == j/2){
                r++;
            }
        }
        else {
            if(n%j == 0){
                r++;
            }
        }
    }
    cout<<r<<endl;
    return 0;
}


