#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n,m;
    cin>>n;
    m = 1;
    while (n--) {
        int t;
        cin>>t;
        int r = t*2+1;
        int l = 1;
        int c = 0;
        int cp = r/2;
        int k = cp;
        cout<<"Scenario #"<<m++<<":"<<endl;
        for (int i=0; i<r; i++) {
            cout<<"slice #"<<l++<<":"<<endl;
            for (int col = 0; col<r; col++) {
                for (int row = 0; row<r; row++) {
                    if(abs((double)(row-cp))+abs((double)(col-cp))<=c){
                        cout<<abs((double)(row-cp))+abs((double)(col-cp))+k;
                    }
                    else{
                        cout<<".";
                    }
                }
                cout<<endl;
            }

            if(l>(r/2+1)){
                c--;
                k++;
            }
            else{
                c++;
                k--;
            }
        }
        cout<<endl;
    }
    return 0;
}



