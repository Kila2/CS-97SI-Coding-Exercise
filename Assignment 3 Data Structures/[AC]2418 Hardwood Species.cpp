#include <iostream>
#include <map>
#include <string>
#include <iomanip>
using namespace std;
int main(){
    string str;
    map<string,double> maps;
    int cnt = 0;
    while (!getline(cin, str).eof()) {
        maps[str]++;
        cnt++;
    }
    cout.setf(ios::fixed);
    for (map<string,double>::iterator it = maps.begin(); it!=maps.end(); it++) {
        cout<<it->first<<" "<<setprecision(4)<<it->second/cnt*100<<endl;
    }
    return 0;
}