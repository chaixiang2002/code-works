/** @Author: eclipse
 * @Email: eclipsecs@qq.com
 * @Date: 2020-05-22 16:19:08
 * @Last Modified by: eclipse
 * @Last Modified time: 2020-05-22 19:46:08
 */
#include<bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node *left;
    Node *right;
    int priority;
    Node(int value, int level) : data(value), left(NULL), right(NULL), priority(level) {}
};

class Treap {
private:
    Node *root;
    void leftRotate(Node* &p);
    void rightRotate(Node* &p);
    void insert(Node* &p, int value);
    void remove(Node* &p, int value);
public:
    Treap();
    void insert(int value);
    void remove(int x);
    bool search(int x);
    int smallest();
};

Treap::Treap() {
    root = NULL;
}

void Treap::leftRotate(Node* &p) {
    Node *k = p->right;
    p->right = k->left;
    k->left = p;
    p = k;
}

void Treap::rightRotate(Node* &p) {
    Node *k = p->left;
    p->left = k->right;
    k->right = p;
    p = k;
}

void Treap::insert(int value) {
    insert(root, value);
}

void Treap::insert(Node* &p, int value) {
    if (p == NULL) {
        p = new Node(value, rand());
    } else {

        if (value == p->data) {
            printf("eeeeeeeeeeeggggggegeee");

            return;
        } else if (value < p->data) {
            insert(p->left, value);
            printf("eeeeeeeeeeeeeeeeeeeeeeee");

        } else {
            insert(p->right, value);
            printf("eeeeeeeefffffffffffffffeeeeeee");
        }

        if(p->left && p->left->priority > p->priority) {
            rightRotate(p);
        } else if(p->right && p->right->priority < p->priority) {
            leftRotate(p);
        }
    }
}

void Treap::remove(int value) {
    remove(root, value);
}

void Treap::remove(Node* &p, int value) {
    if (p->data == value) {
        if (p->left == NULL) {
            p = p->right;
        } else if (p->right == NULL) {
            p = p->left;
        } else {
            if (p->left->priority > p->right->priority) {
                rightRotate(p);
                remove(p->right, value);
            } else if (p->left->priority < p->right->priority) {
                leftRotate(p);
                remove(p->left, value);
            }
        }
    } else {
        if (value < p->data) {
            remove(p->left, value);
        } else {
            remove(p->right, value);
        }
    }
}

bool Treap::search(int value) {
    Node *p = root;
    while (p) {
        if (p->data == value) {
            return true;
        } else {
            p = p->data < value ? p->right : p->left;
        }
    }
    return false;
}

int Treap::smallest() {
    Node* p = root;
    int value;
    while (p) {
        value = p->data;
        p = p->left;
    }
    return value;
}

int main(int argc, char const *argv[]) {
    Treap treap;
    int N=10;
    int a[]={20 ,19 ,28 ,34 ,123 ,8900 ,21334 ,4345 ,234 ,567};
    for (int i = 0; i < N; i++) {
        int value;

        treap.insert(a[i]);
    }
    for (int i = 0; i < N; i++) {
        int value = treap.smallest();
        printf("%d ", value);
        treap.remove(value);
    }
    return 0;
}
