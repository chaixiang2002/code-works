#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void _sort(vector<int>& vec){
    int size=vec.size();
    for(int i=0;i<size-1;++i){
        for(int j=i+1;j<size;++j){
            if(abs(vec[i])<abs(vec[j])){
               swap(vec[i],vec[j]);
            }
        }
    }
}

int main()
{
    vector<vector<int>> myvec; int n;
    while(scanf("%d",&n)!=EOF&&n!=0){
        vector<int> vec;
        while(n--){
            int tmp;
            cin>>tmp;
            vec.push_back(tmp);
        }
        myvec.push_back(vec);
    }

    for (auto& tmp : myvec) {
        _sort(tmp);
        for(auto& tp:tmp){
            cout <<tp<<" ";
        }
        cout<<endl;
    }
    return 0;
}