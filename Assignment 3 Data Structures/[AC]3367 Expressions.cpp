#include <iostream>
#include <string>
#include <stack>
#include <queue>
using namespace std;
struct Node {
    Node *l;
    Node *r;
    char c;
};
queue<Node *> qc;
stack<Node *> sc;
Node nodes[10005];
int main(){
    int n;
    cin>>n;
    while (n--) {
        memset(nodes, 0, sizeof(nodes));
        string str;
        cin>>str;
        int t = 0;
        for (int i=0; i<str.length(); i++) {
            if(isupper(str[i])){
                Node *l = sc.top();
                sc.pop();
                Node *r = sc.top();
                sc.pop();
                Node *p = &nodes[t++];
                p->l = l;
                p->r = r;
                p->c = str[i];
                sc.push(p);
            }
            else {
                Node *p = &nodes[t++];
                p->c = str[i];
                sc.push(p);
            }
        }
        Node *p = sc.top();
        sc.pop();
        qc.push(p);
        while (qc.size()!=0) {
            Node *t = qc.front();
            qc.pop();
            sc.push(t);
            if(t->r != NULL){
                qc.push(t->r);
            }
            if(t->l != NULL){
                qc.push(t->l);
            }
        }
        while (sc.size()!=0) {
            cout<<sc.top()->c;
            sc.pop();
        }
        cout<<endl;
    }
    return 0;
}