#include <iostream>
#include "stack"
using namespace std;

void movee(stack<int>& a,stack<int>& b,stack<int>& c,int deep){
    if (deep<=1) {
        c.push(a.top());
        a.pop();
        return;
    }
    movee(a, c, b, deep-1);
    movee(a, b, c, 1);
    movee(b, a, c, deep-1);
}
int main(){
    stack<int> a;
    stack<int> b;
    stack<int> c;
    for(int i=2;i>=0;i--){
        a.push(i);
    }
    movee(a, b, c, 3);
    for(int i=0,size=c.size();i<size;i++){
        cout<<c.top();
        c.pop();
    }
}
/*

//1
a->c;

//2
a->b;//1(b<->c)
a->c;//1
->>//1(a<->b)

//3
a->c;-|
a->b;-|
c->b;-->//2(b<->c)

a->c;
->>//2(a<->b)

*/