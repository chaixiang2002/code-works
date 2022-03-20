#include <stdio.h>
int main(){
    int a[]={9,4,6,2,5,1};

    int i=0,j=0;
    int size=6;// size用来装 a[]的元素个数

    for(i=0;i<size-1;++i){
        int min=a[i];              //用来记录 第i到最后的元素中最小的元素的 值
        int min_index=i;           //用来记录 第i到最后的元素中最小的元素的 下标
        for (j=i+1; j<size; ++j) {
            if (a[j]<min){          //发现 更小的值
                min=a[j];           //记录这个值
                min_index=j;        //记录这个下标
            }
        }
        a[min_index]=a[i];//交换
        a[i]=min;
    }

    // 打印 a[]数组
    for (i=0; i<size; ++i) {
        printf("%d\t",a[i]);
    }

    return 0;
}













    // a=randd(10);
    // int *a;
    // int size=10;
