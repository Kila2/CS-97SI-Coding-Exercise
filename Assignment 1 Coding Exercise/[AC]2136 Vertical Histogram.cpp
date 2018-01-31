#include <iostream>
#include <string>
#include <string.h>
using namespace std;
int main(){
    int alpha[26];
    memset(alpha, 0, sizeof(alpha));
    string str;
    for (int i=0; i<4; i++) {
        getline(cin, str);
        for (int j=0; j<str.length(); j++) {
            if(str[j]>='A'&&str[j]<='Z'){
                alpha[str[j]-'A']++;
            }
        }
    }
    int max = 0;
    for (int i=0; i<26; i++) {
        max = alpha[i]>max?alpha[i]:max;
    }
    for (int i=max; i>0; i--) {
        for (int j=0; j<26; j++) {
            if(alpha[j]>=i){
                cout<<"* ";
            }
            else {
                cout<<"  ";
            }
        }
        cout<<endl;
    }
    cout<<"A B C D E F G H I J K L M N O P Q R S T U V W X Y Z "<<endl;
    return 0;
}