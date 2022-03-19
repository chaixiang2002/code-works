#include <cassert>
#include <cstdio>

#include "map.hpp"

template<typename T>
auto assert_eq(T a, T b)
->void {
    return assert(a == b);
}

int main(int,char**) {
    Map<int, int> map;

    map.insert(10, 10);
    map.insert(20, 20);
    map.insert(30, 30);
    map.insert(40, 40);
    map.insert(50, 50);
    map.insert(60, 60);
    map.insert(70, 70);
    map.insert(80, 80);
    map.insert(90, 90);

    assert_eq(map[20], 20);
    assert_eq(map[40], 40);
    assert_eq(map[50], 50);
    assert_eq(map[30], 30);
    assert_eq(map[70], 70);

    try {
        map.remove(100);
    } catch(const char* err) {
        printf("%s", err);
    }

    return 0;
}

