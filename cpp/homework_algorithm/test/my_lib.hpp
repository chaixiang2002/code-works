#ifndef __my_lib_HPP
#define __my_lib_HPP
/*
//////////////////////////
1.Treap     17  157     //
2.bit                        //
                        //
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

Treap::Treap(){
    root=NULL;
}

void Treap::left_rotate(Node* p){
    Node*t=p->r_child;
    p->r_child=t->l_child;
    t->l_child=p;
    p=t;
}
void Treap::right_rotate(Node* p){
    Node* t=p->l_child;
    p->l_child=t->r_child;
    t->r_child=p;
    p=t;
}

Node* Treap::find(int val){
    return find(root,val);
}
Node* Treap::find(Node*p,int value){
    if (p==nullptr)
        return nullptr;
    else {
        if (p->val==value) {
            return p;
        }
        else if (p->val < value)
             return find(p->r_child,value);
        else
            return find(p->l_child,value);
    }
}


void Treap::insert(int value){
    insert(root,value);
}
void Treap::insert(Node* p,int value){
    if(p==NULL){
        p=new Node(value,rand());
        printf("insert root:%d\n",p->val);
        }
    else {
        if(value==p->val){
            printf("eeeeeeeeeeeggggggegeee");

            return;
        }
        else if (value<p->val){
            insert(p->l_child,value);
            printf("eeeeeeeeeeeeeeeeeeeeeeee");
        }
        else{
            insert(p->r_child,value);
            printf("eeeeeeeefffffffffffffffeeeeeee");

        }

        if (p->l_child && p->l_child->priority > p->priority) {
            right_rotate(p);
        }
        else if (p->r_child && p->r_child->priority < p->priority) {
            left_rotate(p);
        }
    }
}
void Treap::remove(int value){
    Node* p=find(value);
    if(p==nullptr){
        std::cout<<"There aren't this value"<<std::endl;
    }
    else {
        while(p->l_child==nullptr || p->r_child==nullptr){
            if(p->l_child->priority < p->r_child->priority){
                right_rotate(p);
                p=p->r_child;
            }
            else {
                left_rotate(p);
                p=p->l_child;
            }
        }
        if(p->l_child==nullptr)
            p=p->r_child;
        else
            p=p->l_child;
    }
}
void Treap::to_check(){
    to_check(root);
}
void Treap::to_check(Node* p){//v
    printf("dsdaaaaacccccccccccccccc");

    if(p==nullptr){
        printf("\ndsda  this is nullper   c\n");
        return;
    }
    printf("dsdaaaaaaaaaaaaaaaaaaaaaaaa");
    printf("val:%d   rank:%d   l:%d    r:%d    \n",p->val,p->priority,p->l_child->val,p->r_child->val);
    printf("dsddbbbbbbbbbbbbbbbbbbbbbb");
    to_check(p->l_child);
    to_check(p->r_child);
}

void test_treap(){
    Treap treap;
    int N=10;
    int a[10]={20 ,19 ,28 ,34 ,123 ,8900 ,21334 ,4345 ,234 ,567};
    for (int i = 0; i < N; i++) {
        treap.insert(a[i]);
    }//v
    treap.to_check();
}


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