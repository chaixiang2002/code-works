#include <iostream>
#include <string.h>
using namespace std;
//1.找最大回子序列（2循环穷举判断）
//2.删除上面子序列
//3.循环1
int removePalindromeSub(string s) {
    int len=s.length();
    for(int i=0;i<len-1;i++)
}

int main(){
    string s="baabb";
    printf("%d\n",removePalindromeSub(s));
    return 0;
}
