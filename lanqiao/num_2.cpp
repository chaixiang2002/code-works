#include <iostream>
#include <stdio.h>
#include "bits/stdc++.h"
using namespace std;
int main(){

    int a[10];
    memset(a,0,sizeof(a));
    for(int i=0;i<20210;++i){

        int t=i;
        while (t) {
            ++a[t%10];
            if(a[t%10]>2021){
                printf("%d",i-1);
                return 0;
            }
            t=t/10;
        }
    }
    return 0;
}