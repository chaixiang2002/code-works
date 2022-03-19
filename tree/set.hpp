#pragma once

#include "map.hpp"

// only a wrapper
template<typename T>
class Set {
private:
    Map<T, void> map;

public:
    Set() : map() {}

public:
    auto insert(T value) {
        map.insert(value, static_cast<void>(0));
    }

public:
    auto remove(T value) ->bool {
        return map.remove(value);
    }

    // todo
};
