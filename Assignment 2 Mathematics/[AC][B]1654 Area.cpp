#include <iostream>
#include <string>
#include <cmath>
using namespace std;
void getPoint(int d,int &x,int &y){
    switch (d) {
        case 1:{
            x--;
            y--;
            break;
        }
        case 2:{
            y--;
            break;
        }
        case 3:{
            x++;
            y--;
            break;
        }
        case 4:{
            x--;
            break;
        }
        case 6:{
            x++;
            break;
        }
        case 7:{
            x--;
            y++;
            break;
        }
        case 8:{
            y++;
            break;
        }
        case 9:{
            x++;
            y++;
            break;
        }
        default:
            break;
    }
}
int main(){
    int n;
    string str;
    cin>>n;
    while (n--) {
        cin>>str;
        int px1=0,py1=0;
        int px2=0,py2=0;
        long long s = 0;
        if(str.length()<3||str[0]=='5'){
            cout<<0<<endl;
        }
        else {
            getPoint(str[0]-'0', px1, py1);
            px2 = px1;
            py2 = py1;
            getPoint(str[1]-'0', px2, py2);
            for (int i=1; i<str.length()-2; i++) {
                int r = px1*py2-px2*py1;
                s += r;
                px1 = px2;
                py1 = py2;
                int d = str[i+1]-'0';
                getPoint(d, px2, py2);
            }
            //can't use double
            if(s<0) {s = -s;}
            cout<<s/2;
            if(s%2!=0){
                cout<<".5";
            }
            cout<<endl;
        }
        
    }
    return 0;
}
