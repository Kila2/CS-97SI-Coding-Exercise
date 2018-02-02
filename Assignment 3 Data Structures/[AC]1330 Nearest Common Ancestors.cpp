#include <iostream>
using namespace std;
int L[10005];
int main(){
    int n;
    cin>>n;
    while (n--) {
        memset(L, 0, sizeof(L));
        int l,p,c;
        cin>>l;
        for (int i=0; i<l-1; i++) {
            cin>>p>>c;
            L[c] = p;
        }
        cin>>p>>c;
        int t = c,a;
        while (L[t]!=0) {
            a = t;
            t = L[t];
            L[a] = 0;
        }
        t = p;
        while (L[t]!=0) {
            t = L[t];
        }
        cout<<t<<endl;
    }
    return 0;
}
