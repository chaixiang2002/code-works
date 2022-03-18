#include <iostream>
#include <vector>
#include "e2.hpp"
using namespace std;

void divide(int l,vector<chip>& chips,int r,vector<chip>& res){
    if(l==r-1){
        if( chips[l].test_to(chips[r]) && chips[r].test_to(chips[l]) ){
            res.emplace_back(chips[l]);
        }
        return;
    }
    if(r==l) {
        res.emplace_back(chips[l]);
    }
    int mid=(l+r)/2;
    divide(l, chips, mid,res);
    divide(mid, chips, r,res);
}

void conquer(vector<chip>& chips,vector<chip>& before){
    cout<<"sd"<<endl;

    if(chips.size()==1){
    cout<<"33"<<endl;
        return;
    }
    divide(0, chips, chips.size(), before);
    vector<chip> now;
    conquer(before, now);
    cout<<"11"<<endl;
}


int main(){
    vector<chip> chips;
    insert_test(chips);
    vector<chip> res;//vv
    conquer(chips, res);
    return 0;
}