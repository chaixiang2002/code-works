#include <stdio.h>

int main(){
    int a[]={9,4,6,2,5,1};

    int i=0,j=0;
    int size=6;// size用来装 a[]的元素个数
    for( i=0;i<size-1;++i){
        for ( j=i+1; j<size ; ++j) {
            if(a[i]>a[j]){         //发现 左边的元素a[i]比右边的元素a[j]大，就交换
                int tmp=a[i];
                a[i]=a[j];
                a[j]=tmp;
            }
        }
    }

    // 打印 a[]数组
    for (i=0; i<size; ++i) {
        printf("%d\t",a[i]);
    }

    return 0;
}