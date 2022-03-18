#include <iostream>
#include <stdio.h>
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
        return;
    }
    int mid=(l+r)/2;
    divide(l, chips, mid,res);
    divide(mid+1, chips, r,res);
}

void conquer(vector<chip>& chips,vector<chip>& before,vector<chip>& res){
    if(chips.size()==1){//false
    cout<<"dasdasdasdasdasd:";
        print_all(chips);
        return;
    }
    divide(0, chips, chips.size(), before);
    vector<chip> now;
    conquer(before, now,res);
    cout<<"ch:";
    print_all(chips);
    cout<<"before:";
    print_all(before);
}

int main(){
    vector<chip> chips;
    insert_test(chips);
    vector<chip> tmp;//vv
    vector<chip> res;

    conquer(chips, tmp,res);

    cout<<"res:\n"<<endl;
    print_all(res);
    return 0;
}