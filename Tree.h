#pragma once

#ifndef ZY_TREE_H
#define ZY_TREE_H

namespace zy {
    template<typename V>
    class TreeNode {
    public:
        V val_;

        explicit TreeNode(V v) :val_(v) {}

        V val() const { return val_; }
    };
}

#endif