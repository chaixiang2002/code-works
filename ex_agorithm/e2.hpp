#include <iostream>
#include <iterator>
#include <stdlib.h>
#include <vector>

class chip{
private:
    bool val;
    int index;
public:
    chip(bool vall,int index){
        this->val=vall;
        this->index=index;
    }

    bool test_to(chip be_test){
        if(this->val==true)//好
            return be_test.val;
        return rand()%2;//不好
    }
    void print(){
        std::cout<<"chips["<<this->index<<"]:"<<this->val<<'\t';
    }
};

void insert_test(std::vector<chip>& chips){
    int a[]={1,0,1,0,1,0,1,1};
    int i=0;
    for(int& aa:a){
        chip c1(aa,i);
        ++i;
        chips.emplace_back(c1);
    }
}

void print_all(std::vector<chip>& chips){
    if(chips.empty()){
    std::cout<<"empty"<<std::endl;
    return;
    }
    for(chip& ch:chips)
        ch.print();
    std::cout<<std::endl;
}

void te_print(int n){
    std::cout<<"-----"<<n<<"-----"<<std::endl;
}