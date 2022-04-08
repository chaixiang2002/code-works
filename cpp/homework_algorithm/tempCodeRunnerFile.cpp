#include "bits/stdc++.h"
#include <stdio.h>
#include <stdlib.h>

int pc_dou(int n){
    if(n%4==0){
        int a=rand()%4;
        printf("Tony(pc) took %d beans,leftn %d beasn!\n",a,n-a);
        return a;
    }
    printf("Tony(pc) took %d beans,leftn %d beasn!\n",n%4,n-(n%4));
    return n%4;
}
int main(){
    int n;
        scanf("%d",&n);

    while (n>0) {
        int a=0;
        scanf("%d",&a);
        n-=a;
        if(n==0){
            printf("Player win!\n");
            return 0;
        }
        n-=pc_dou(n);
        if(n==0){
            printf("Player false!\n");
            return 0;
        }
    }
}