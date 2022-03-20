#include <stdio.h>
int main(){
    int a=0;
    char b[10]={'1','2','3','4','5'};
    int i=0;
    for (i=0; i<5;++i) {
        printf("%c",b[i]);
    }
}