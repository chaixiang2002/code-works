#include <iostream>
#include "vector"
using namespace std;

vector<vector<int>> permute(vector<int>& nums);


int main(){
    vector<int> nu={1,2,3};
    vector<vector<int>> re=permute(nu);
    for(int i=0;i<re.size();i++){
        for(int j=0;j<re[i].size();j++){
            cout<<re[i][j]<<'\t';
        }
        cout<<endl;
    }
    return 0;

}



vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> result;
        if(nums.size()==1)
            return {nums};
        int t=nums.back();
        nums.pop_back();
        result=permute(nums);

        for(int i=0;i<result.size();i++){
            vector<int> copyy(result[i].begin(),result[i].end());
            result.erase(result.begin());
            for(int j=0;j<copyy.size();j++){
                vector<int> copyy1(copyy.begin(),copyy.end());
                copyy1.insert(copyy1.begin()+j,t);
                result.push_back(copyy1);
            }
        }
       return result;
    }