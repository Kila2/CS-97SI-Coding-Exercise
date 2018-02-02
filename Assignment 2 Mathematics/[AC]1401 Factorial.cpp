#include <iostream>
#include <cmath>
using namespace std;
int count5(int t){
    //begin
    //1, 2, 3, 4, 5, 6, 7, 8, 9, 10, ...100  |
    //1..5, 6..10, 10..15, 16..20, 96..100   | 100/5 = 25 every group have only one "five"
    //1..25, 26..50, 50..75, 76..100         | 25/5 = 4 every group have one "five"
    //end                                    | 4/5 = 0 end
    int sum = 0;
    while(t!=0){
        t/=5;
        sum+=t;
    }
    return sum;
}
int main(){
    int n,t;
    cin>>n;
    while (n--) {
        cin>>t;
        cout<<count5(t)<<endl;
    }
    return 0;
}