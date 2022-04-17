#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool cmp(int a,int b){
   return abs(a)>abs(b);
}

int main()
{
    int n;
    while(scanf("%d",&n)!=EOF&&n!=0){
        vector<int> vec;
        while(n--){
            int tmp;
            cin>>tmp;
            vec.push_back(tmp);
        }
        sort(vec.begin(),vec.end(),cmp);
        for(auto& tmp:vec){
            cout<< tmp<<" ";
        }
        cout<<endl;
    }
  return 0;
}