#include <stdio.h>


int main(){
    int n;
    while(scanf("%d",&n)!=EOF&&n!=0){
        int a[n];




        for(int i=0;i<n;++i){
            scanf("%d",&a[i]);
        }





        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                if(abs(a[i])<abs(a[j])){
                    int tmp=a[i];
                    a[i]=a[j];
                    a[j]=tmp;
                }
            }
        }


        for(int i=0;i<n;++i){
            printf("%d ",a[i]);
        }
    }

    return 0;
}