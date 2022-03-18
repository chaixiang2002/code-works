#include <iostream>
#include <ostream>
#include <stdio.h>
#include <stdlib.h>
#include <vector>
using namespace std;

#define lowbit(x) ( (x)&-(x) )//
int main(){
    int x=16,d=10,tmp=0;
    while (x<=100) {
        cout<<x<<'\t'<<d<<'\t'<<tmp<<'\t'<<lowbit(x)<<endl;
        tmp+=d;
        x+=lowbit(x);
    }
    return 0;
}