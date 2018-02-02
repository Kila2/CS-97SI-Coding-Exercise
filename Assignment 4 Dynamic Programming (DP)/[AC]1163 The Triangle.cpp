#include <iostream>
using namespace std;
int main(){
    int n,t;
    cin>>n;
    int map[105][105] = {0};
    int dp[105][105] = {0};
    for (int i=1; i<=n; i++) {
        for (int j=1; j<=i; j++) {
            cin>>t;
            map[i][j] = t;
        }
    }
    dp[1][1] = map[1][1];
    int maxa = 0;
    for (int i=2; i<=n; i++) {
        for (int j=1; j<=i; j++) {
            dp[i][j] = map[i][j] + max(dp[i-1][j-1],dp[i-1][j]);
            maxa = dp[i][j]>maxa ? dp[i][j]: maxa;
        }
    }
    cout<<maxa<<endl;
    
    return 0;
}