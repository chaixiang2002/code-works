#include <corecrt_malloc.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <corecrt.h>
int* randd(int n){
    int* p;
    p=(int*)malloc(n*sizeof(int));
    int i=0;
    for (i=0; i<n; ++i) {
        p[i]=1;
    }

    printf("原数组：\n");
    for (i=0; i<n; ++i) {
        printf("%d\t",p[i]);
    }
    return p;
}