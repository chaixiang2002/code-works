#pragma once

#include <cstddef>
#include <cmath>
#include <utility>

// K -> cmp
template<typename K,typename V>
struct Node{
    K key;
    V value;
    size_t len;
    Node *left, *right;

    Node(K key, V value) : key(key), value(value), len(1),
        left(nullptr), right(nullptr) {}

    Node(const Node & node) {
        this->key = node.key;
        this->value = node->value;
        this->left = node->left;
        this->right = node->right;
    }

    auto search(K key) -> Node * {
        Node *node = nullptr;
        // left
        if (key < this->key) {
            if (this->left)
                node = this->left->search(key);
        }
        // right
        else if (key > this->key) {
            if (this->right)
                node = this->right->search(key);
        } else {
            node = this;
        }
       return node;
    }

    auto insert(K key, V value)
    -> bool {
        // left
        if (key < this->key) {
            if (this->left) {
                if (this->left->insert(key, value)) {
                    this->len += 1;
                    auto diff = 0;
                    if (this->right) {
                        diff =this->left->len - this->right->len;
                    } else {
                        diff = this->left->len;
                    }
                    if (diff > 2) {
                        this->right_rotate();
                    } else if (diff < -2) {
                        this->left_rotate();
                    }
                }
            } else {
                this->left = new Node(key, value);
                this->len += 1;
            }
        // right
        } else if (key > this->key) {
            if (this->right) {
                if (this->right->insert(key, value)) {
                    this->len += 1;
                    auto diff = 0;
                    if (this->left) {
                        diff =this->right->len - this->left->len;
                    } else {
                        diff = this->right->len;
                    }
                    if (diff > 2) {
                        this->left_rotate();
                    } else if (diff < -2) {
                        this->right_rotate();
                    }
                }
            } else {
                this->right = new Node(key, value);
                this->len +=1;
            }
        } else {
            this->value = value;
            return false;
        }
        return true;
    }


//                1
//           2          3
//       4      5    (6)      7
//    8   9  10  11 12 13  14  15
    auto remove(K key) ->bool {
        // left
        if (key < this->key) {
            if (this->left)
                this->left->remove(key);
            else
                return false;
        }
        // right
        else if (key > this->key) {
            if (this->right)
                this->right->remove(key);
            else
                return false;
        } else {
            if (this->left) {
                // cmp
                if (this->right) {

                } else {
                    auto node = this->left;
                    this->operator=(node);
                    // std::swap(this, node);
                    delete node;
                }
            } else {
                if (this->right) {
                    auto node = this->right;
                    this->operator=(node);
                    // std::swap(this, node);
                    delete node;
                } else {
                    // may crash
                    delete this;
                }
            }
        }
       return true;
    }


//      p
//    1    q
//        2  3
    auto left_rotate() -> void {
        if (this->right) {
            auto node = this->right;

        // todo: update len

            this->right = node->left;
            node->left = this;
            this->operator=(node);

        } else {

        }
    }

    //    p
    //  q   1
    // 2  3
    auto right_rotate() -> void {
        if (this->left) {
            auto node = this->left;
            this->left = node->right;
            node->right = this;
            this->operator=(node);
        }
    }

    auto operator=(Node *& node) -> Node&{
            this->key = node->key;
            this->value = node->value;
            this->left = node->left;
            this->right = node->right;
        return *this;
    }
};



