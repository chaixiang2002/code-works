#pragma once

#include <deque>

#include "node.hpp"

template<typename K,typename V>
class Map{
public:
    Map() : root(nullptr) {}

public:
    ~Map() {
        std::deque<Node<K, V> *> deque;
        if (not this->empty()) deque.push_back(root);
        while (not deque.empty()) {
            auto node = deque.back();
            deque.pop_back();
                if (node->left) {
                    deque.push_back(node->left);
                }
                if (node->right) {
                    deque.push_back(node->right);
                }
            delete node;
        }
    }

public:
    auto size() -> size_t const {
        return this->root ? this->root->len : 0;
    }

public:
    auto empty() -> bool{
        return !this->root;
    }

public:
    auto insert(K key, V value) {
        if (this->root) {
            this->root->insert(key, value);
        } else {
            this->root = new Node<K, V>(key, value);
        }
    }

public:
    auto remove(K key) -> bool {
        if (not this->empty()) {
          return this->root->remove(key);
        } else {
            return false;
        }
    }

public:
    auto get(K key) -> V &{
        return this->operator[](key);
    }

public:
    auto operator[](K key) -> V & {
        auto node = this->root;
        if (node) {
            node = node->search(key);
        }
        if (node) {
            return node->value;
        } else {
            throw "error";
        }
    }

private:
    Node<K, V> *root;
};
