#include <cmath>
#include<iostream>
#include <ostream>
using namespace std;

int num=0;
int lcs(string& x, string& y,int i,int j){
    ++num;
    if(i==-1 || j==-1)
        return 0;
    else if (i>-1&&j>-1&&x[i]==y[j])
        return lcs(x,y,i-1, j-1)+1;
    else
        return max(lcs(x,y,i,j-1), lcs(x,y,i-1,j));
}

int main(){

    string x="ABCBDAB";
    string y="BDCABA";
    int n=x.length(),m= y.length();
    cout<< "MAX lcs: "<<lcs(x,y,x.length()-1, y.length()-1)<<endl;
    cout<<"num: "<<num<<'\t'<<'\t'<<'\t'<<"O():"<< n*pow(2,m) <<endl;
}