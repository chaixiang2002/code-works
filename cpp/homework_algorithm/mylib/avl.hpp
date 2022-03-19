#ifndef __avl_HPP
#define __avl_HPP

#include <iostream>
#include <ostream>
#include <stdio.h>
#include <stdlib.h>
#include <vector>

#define max(x,y) x>y?x:y
struct Node{
    int data;
    int height;
    Node *left;
    Node *right;
};

// typedef struct node node_t;
// typedef struct node* nodeptr_t;

int treeHeight(Node* root){
    if(root==NULL){
        return 0;
    }
    else {
        return max(treeHeight(root->left),treeHeight(root->right))+1;
    }
}

int treeGetBalanceFactor(Node* root){
    if(root==NULL)
        return 0;
    else
        return root->left->height - root->right->height;
}

Node* treeRotateRight(Node* root){
    Node* t =root->left;

    root->left=t->right;
    t->right=root;

    root->height=max(treeHeight(root->left),treeHeight(root->right))+1;
    t->height=max(treeHeight(t->left), treeHeight(t->right))+1;

    return t;
}

Node* treeRotateleft(Node* root){
    Node* t=root->right;

    root->right=t->left;
    t->left=root;

    root->height=max(treeHeight(root->left),treeHeight(root->right))+1;
    t->height=max(treeHeight(t->left), treeHeight(t->right))+1;

    return t;
}

Node* treeGetBalance(Node*root){
    int factor =treeGetBalanceFactor(root);//??????
    if(factor>1 && treeGetBalanceFactor(root->left) >0)
        return treeRotateRight(root);
    else if (factor > 1 && treeGetBalanceFactor(root->left) <=0){
        root->left = treeRotateleft(root->left);
        return treeRotateRight(temp);

    }
}
#endif