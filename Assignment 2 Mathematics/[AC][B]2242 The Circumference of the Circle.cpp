#include <iostream>
#include <cmath>
#include <iomanip>
#define pi 3.141592653589793
using namespace std;
void swap(float &x1, float &x2){
    float t;
    t = x1;
    x1 = x2;
    x2 = t;
}
int main(){
    float x1,x2,x3,y1,y2,y3;
    while (cin>>x1>>y1>>x2>>y2>>x3>>y3) {
        if(y2==y1){
            swap(x1,x3);
            swap(y1,y3);
        }
        else if(y3==y1){
            swap(x1, x2);
            swap(y1, y2);
        }
        float lk1 = -1/((y2-y1)/(x2-x1));
        float lk2 = -1/((y3-y1)/(x3-x1));
        // y = kx+b; b=y-kx;
        float lb1 = (y1+y2)/2-lk1*(x1+x2)/2;
        float lb2 = (y1+y3)/2-lk2*(x1+x3)/2;
        //y = k1x+b1;
        //y = k2x+b2;
        float x = (lb2-lb1)/(lk1-lk2);
        float y = lk1*x + lb1;
        float r = sqrt(pow((x-x1),2)+pow((y-y1),2));
        cout.setf(ios::fixed);
        cout<<setprecision(2)<<2*pi*r<<endl;
    }
    return 0;
}
