#include <stdio.h>

int main(){
    int a[]={9,4,6,2,5,1};

    int i=0,j=0;
    int size=sizeof(a)/sizeof(int);// size用来装 a[]的元素个数
    for( i=1;i<size;++i){
        for ( j=0; j<size-i ; ++j) {
            if(a[j]>a[j+1]){         //发现 左边的元素a[j]比右边的元素a[j+1]大，就交换
                int tmp=a[j];
                a[j]=a[j+1];
                a[j+1]=tmp;
            }
        }
    }

    // 打印 a[]数组
    for (i=0; i<size; ++i) {
        printf("%d\t",a[i]);
    }

    return 0;
}