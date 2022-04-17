#include <iostream>
#include <stdio.h>
#include "bits/stdc++.h"
using namespace std;

int gbs(int x,int y){
    int mins=min(x,y),gys=0;
    for(int i=mins;i>0;--i){
        if(x%i==0 && y%i==0){
            gys=i;
            break;
        }
    }
    return (x*y)/gys;

}
int main(){
    //printf("%d\n",gbs(18,16));
    int res=0;
    for(int i=1;i<2017;i+=21){
        res+=gbs(i, i+21);
    }
    //res+=gbs(2017, 2021);
    printf("%d",res);

    return 0;
}