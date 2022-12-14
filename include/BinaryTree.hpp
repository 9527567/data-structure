//
// Created by jack on 2022-12-14.
//

#ifndef DATA_STRUCTURE_BINARYTREE_HPP
#define DATA_STRUCTURE_BINARYTREE_HPP

#include <memory>
#include <vector>
#include <optional>

template<typename T>
class BinaryTreeNode
{
    using value_type = T;
public:
    BinaryTreeNode() = default;

    BinaryTreeNode(value_type val) : val(val), left(nullptr), right(nullptr)
    {};

    BinaryTreeNode(value_type val,
                   std::shared_ptr<BinaryTreeNode<value_type>> left,
                   std::shared_ptr<BinaryTreeNode<value_type>> right) :
            val(val), left(left), right(right)
    {};

    ~BinaryTreeNode() = default;

public:
    value_type val;
    std::shared_ptr<BinaryTreeNode<value_type>> left;
    std::shared_ptr<BinaryTreeNode<value_type>> right;
};

template<typename T>
class BinaryTree
{
    using value_type = T;
public:
    BinaryTree() = default;
    // [1,nullptr,nullptr]代表一个根节点，左右子树都为空
    BinaryTree(const std::vector<std::optional<value_type>> &tree)
    {

    }

    ~BinaryTree() = delete;

public:
    std::shared_ptr<BinaryTreeNode<value_type>> root;
private:
};

#endif //DATA_STRUCTURE_BINARYTREE_HPP
