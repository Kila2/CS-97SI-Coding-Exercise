#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
struct DNA{
    string str;
    int w;
}dna[100];
bool cmp(DNA a, DNA b){
    return a.w < b.w;
}
int main() {
    int n,m;
    cin>>n>>m;
    for (int i=0; i<m; i++) {
        cin>>dna[i].str;
        dna[i].w = 0;
        for (int j=0; j<n; j++) {
            for (int k=j+1; k<n; k++) {
                if(dna[i].str[j] > dna[i].str[k]){
                    dna[i].w++;
                }
            }
        }
    }
    sort(dna, dna+m, cmp);
    for (int i=0; i<m; i++) {
        cout<<dna[i].str<<endl;
    }
    return 0;
}
