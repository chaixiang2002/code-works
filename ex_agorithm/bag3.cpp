#include<iostream>
using namespace std;
#include <algorithm>

int bagV=10;
int v[5]={0,1,3,5,9};
int w[5]={0,2,3,4,7};
int dp[5][10+1]={{0}};
int item[5];


int res=0;
void maxlist(){
    for(int i=1;i<5;++i){
        for(int j=1;j<=bagV;++j){
            if(j<w[i])
                dp[i][j]=dp[i-1][j];     //dp[i][j]=dp[i][j-1];xxxxxx
            else {
                dp[i][j]=max(dp[i-1][j],dp[i][j-w[i]] + v[i]);
            }

            if(dp[i][j]>res)
                res=dp[i][j];
        }
    }
}

void print(){
    cout<<"动态规划表："<<'\n';
    for(auto& t:dp){
        for(auto& tt:t){
            cout<<tt<<'\t';
        }
        cout<<'\n';
    }
	cout << "最优解输出:  " << res <<endl;

}


int main(){
            cout<<"tt"<<'\t';

    maxlist();
    print();
    return 0;
}