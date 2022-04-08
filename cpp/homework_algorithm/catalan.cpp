
#include "bits/stdc++.h"
#include <stdio.h>
// long fact(long n){
//     if(n<3)
//         return 2;
//     return n*fact(n-1);
// }

int main(){
    long n;
    scanf("%ld",&n);

    //printf("%ld\n",fact(n));
    unsigned long long a=1,b=1;
    for(int i=1;i<=2*n;++i){
        a*=i;
        if(i==n){
            b=a;
        }
    }

    printf("a:%lld,b:%lld\n",a,b);
    unsigned long long c=(b*b*(n+1));
    printf("c:%lld\n",c);
    printf("a/c:%lld\n",a/c);
    return 0;
}