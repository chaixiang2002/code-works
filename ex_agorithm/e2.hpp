#include <iostream>
#include <iterator>
#include <vector>

class chip{
private:
    bool val;
public:
    chip(bool vall){
        this->val=vall;
    }
    void set_val(bool vall){
        this->val=vall;
    }
    bool test_to(chip be_test){
        if(this->val==1)//好
            return be_test.val;
        return 0;//不好
    }
    void print(){
        std::cout<<this->val<<'\t';
    }
};

void insert_test(std::vector<chip>& chips){
    int a[]={1,0,1,0,1,0,1,1};
    for(int aa:a){
        chip c1(aa);
        chips.emplace_back(c1);
    }
}

void print_all(std::vector<chip>& chips){
    if(chips.empty()){
    std::cout<<"empty"<<std::endl;
    return;
    }
    for(chip ch:chips)
        ch.print();
    std::cout<<std::endl;
}

void te_print(int n){
    std::cout<<"-----"<<n<<"-----"<<std::endl;
}