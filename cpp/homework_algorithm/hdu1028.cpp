// "Well, it seems the first problem is too easy. I will let you know how foolish you are later." feng5166 says.

// "The second problem is, given an positive integer N, we define an equation like this:
//   N=a[1]+a[2]+a[3]+...+a[m];
//   a[i]>0,1<=m<=N;
// My question is how many different equations you can find for a given N.
// For example, assume N is 4, we can find:
//   4 = 4;
//   4 = 3 + 1;
//   4 = 2 + 2;
//   4 = 2 + 1 + 1;
//   4 = 1 + 1 + 1 + 1;
// so the result is 5 when N is 4. Note that "4 = 3 + 1" and "4 = 1 + 3" is the same in this problem. Now, you do it!"

#include "bits/stdc++.h"
#include <stdio.h>

int part(int n,int m){
    printf("%d %d\n",n,m);

    if (n==1 || m==1)
        return 1;
    else if(n==m)
        return 1+part(n, m-1);
    else if (n<m)
        return part(n, n);
    else
        return part(n-m, m)+ part(n, m-1);
}
int main(){
    int n,m;
    scanf("%d %d",&n,&m);
    printf("%d\n",part(n,m));
    return 0;
}

// 7(7)=1+1(6)+2(5)+3(4)+4(3)+5(2)+7(1)

// 1: 1
// 2: 2
// 3: 3
// 4: 5
// 5: 7
// 6: 11
// 7: 15

// n(n)=1+1(n-1)+2(n-2)+3(n-3)......+n-2(2)+n(1)

// 10 =1 + 1+2+3+5+7  +9+8+5  +1= 42!!!!!!!对了
