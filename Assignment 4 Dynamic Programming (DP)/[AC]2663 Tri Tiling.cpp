#include <iostream>
using namespace std;
int main(){
    int n;
    while (cin>>n&&n!=-1) {
        int dp[31] = {0};
        if(n%2==1){
            cout<<0<<endl;
            continue;
        }
        dp[0] = 1;
        dp[2] = 3;
        for(int i=4;i<=n;i+=2){
            dp[i] = 4*dp[i-2] - dp[i-4];
        }
        cout<<dp[n]<<endl;
    }
    return 0;
}