//
// Created by jack on 2022-12-13.
//

#ifndef DATA_STRUCTURE_SINGLELINKLIST_HPP
#define DATA_STRUCTURE_SINGLELINKLIST_HPP

#include <memory>
#include <vector>

template<typename T>
class ListNode
{
public:
    using value_type = T;

    ListNode(T value, std::shared_ptr<ListNode> nextPtr) : val(value), next(nextPtr){} ;
    explicit ListNode(T value) : val(value), next(nullptr) {};
    ListNode() = default;
    ~ListNode() = default;

	T val;
    std::shared_ptr<ListNode> next;
};

template<typename T>
class SingleLinkedList
{
public:
    using value_type = T;

    explicit SingleLinkedList(std::vector<value_type> input)
    {
        auto tail = head;
        for (auto &i: input)
        {
            tail->next = std::make_shared<ListNode<value_type>>(i);
            tail = tail->next;
        }
    }
    std::shared_ptr<ListNode<value_type>> head = std::make_shared<ListNode<value_type>>();
};

#endif //DATA_STRUCTURE_SINGLELINKLIST_HPP
