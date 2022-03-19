#ifndef __my_lib_HPP
#define __my_lib_HPP
/*
//////////////////////////
1.Treap     17  157     //
2.bit                        //
3.splay
4.AVL                       //
                        //
                        //
                        //
//////////////////////////
*/
#include <iostream>
#include <ostream>
#include <stdio.h>
#include <stdlib.h>
#include <vector>
#include "treap.cpp"
struct Node{
    int val;
    int priority;
    Node* l_child;
    Node* r_child;
    Node(int value,int level):val(value),priority(level),l_child(NULL),r_child(NULL){}
};
class Treap{
private:
    Node* root;
    void left_rotate(Node *p);
    void right_rotate(Node *p);
    void insert(Node* p,int value);
    void remove(Node* p,int value);
    Node* find(Node*p,int value);
    void to_check(Node* p);

public:
    Treap();
    void insert(int value);
    void remove(int value);
    bool search(int value);
    Node* find(int val);
    void to_check();
};




class bit{
private:

public:
    std::vector<int> tree;
    int lenth;
    bit(int len);
    int lowbit(int x){return ((x)&-(x));}//补码,'与运算'
    void insert(int index,int val);
    void divide(int index,int val);
    int  origin(int index);
    void check();
};

bit::bit(int len){
    printf("bbdddddddddddd");

    tree[len+1]=99999;//??????????????????????????????????
    printf("eeeeeeeeeeeeeb");

    lenth=len;

}

void bit::insert(int index, int val){
    printf("aaaaaaaaaaaaa");
    while (index<=lenth) {
        tree[index]+=val;
        index+=lowbit(index);
    }
}

int bit::origin(int index){
    int res=tree[index];
    int t=index;
    return 0;///////
}
void bit::check(){
    for(auto i=0;i<lenth;++i)
        std::cout <<"tree["<<i<<"]="<<tree[i]<<std::endl;
}

void check_bit(){
    printf("bbbbbbbbbbbbb");
    bit bitt(18);
    printf("bcccccccccccccccc");
    for(int i=1;i<=18;++i){
        bitt.insert(i-1, i);
    }
    bitt.check();
}

#endif