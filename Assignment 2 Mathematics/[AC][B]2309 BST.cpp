#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n;
    cin>>n;
    while (n--) {
        int t;
        cin>>t;
        int fl = (int)(log(t)/log(2));
        int r = 1<<fl;
        while (r!=t) {
            if(r>t){
                r = r-(1<<(--fl));
            }
            else if(r<t)
            {
                r = r+(1<<(--fl));
            }
            else{
                break;
            }
        }
        fl--;
        int l = t;
        r = t;
        while (fl!=-1) {
            l = l-(1<<fl);
            r = r+(1<<fl--);
        }
        cout<<l<<" "<<r<<endl;
    }
    return 0;
}