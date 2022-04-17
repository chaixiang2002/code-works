#include <iostream>
#include <stdio.h>
#include "bits/stdc++.h"
using namespace std;

double hashh(int x1,int y1,int x2,int y2){
    if(x1==x2){
        return x1*1000;
    }else if (y1==y2) {
        return y1*(-1000);
    }else {
        double k=(y1-y2)/(x1-x2);
        double b=y1-k*x1;
        return k*100+b;
    }
}

int main(){
    int a[6][2];
    for(int i=0;i<6;++i){
        a[i][0]=i%2;
        a[i][1]=i/2;//a[x][y]
    }
    set<double> myset;
    for(int i=0;i<6;++i){
        for(int j=i;j<5;++j){
            myset.insert( hashh(a[i][0],a[i][1],a[j+1][0],a[j+1][1]) );
            printf("%lf\n",hashh(a[i][0],a[i][1],a[j+1][0],a[j+1][1]) );

        }
    }
    printf("%d",myset.size());
    return 0;
}