#include <iostream>
#include <ostream>
#include <stdio.h>
#include <stdlib.h>
#include <vector>

const int mod =200907;
int fastpow(int a,int n){

    int res=1;
    int base=a;
    while(n){
        if(n&1)
            res=(base*res)%mod;
        base=(base*base)%mod;
        n>>=1;
    }

    return res;
}

///////
void high_precision_computation(){

}








int main(){
    printf("%d",fastpow(2, 10));
    return 0;
}