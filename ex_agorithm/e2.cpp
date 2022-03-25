#include <iostream>
#include <vector>
#include "e2.hpp"
using namespace std;

void conquer(vector<chip>& chips){
    if(chips.size()==1){
        return;
    }
    vector<chip>::iterator fast;
    vector<chip>::iterator slow;
    fast=chips.begin();
    ++fast;
    slow=chips.begin();
    while (slow!=chips.end() && fast!=chips.end()) {
        vector<chip>::iterator tmp;
        if(fast->test_to(*slow) && slow->test_to(*fast)){
            auto iter=chips.erase(slow);
            ++slow;
            ++fast;
        }
        else {
            fast=chips.erase(fast);
            slow=chips.erase(slow);
        }
    }
}


int main(){
    vector<chip> chips;
    insert_test(chips);
    //vector<chip> res;//vv
    conquer(chips);
    print_all(chips);
    return 0;
}