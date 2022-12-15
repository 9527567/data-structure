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

    ListNode(T value, std::shared_ptr<ListNode> nextPtr) : val(value), next(nextPtr)
    {};

    explicit ListNode(T value) : val(value), next(nullptr)
    {};

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
		head = head->next;
    }

	// Add value to head.
	void addValToHead(value_type val)
	{
		std::shared_ptr<ListNode<value_type>> dummyHead = std::make_shared<ListNode<value_type>>(val);
		dummyHead->next = head;
		head = dummyHead;
	}

	// Add value to tail.
	void addValToTail(value_type val)
	{
		std::shared_ptr<ListNode<value_type>> dummyHead = std::make_shared<ListNode<value_type>>(val);
		std::shared_ptr<ListNode<value_type>> temp = head;
		if (temp == nullptr)
		{
			temp = dummyHead;
			return;
		}
		while(temp->next)
		{
			temp = temp->next;
		}
		temp->next = dummyHead;
	}

	// Add value to the nth position.
	void addValToNthPos(value_type val, int index)
	{
		std::shared_ptr<ListNode<value_type>> temp = head;
		while(index-- && temp)
		{
			temp = temp->next;
		}
		std::shared_ptr<ListNode<value_type>> insert = std::make_shared<ListNode<value_type>>(val);
		insert->next = temp->next;
		temp->next = insert;
	}

	// Delete a nth position node
	void delNodeNthPos(int index)
	{
		std::shared_ptr<ListNode<value_type>> temp = head;
		while(index-- && temp->next)
		{
			temp = temp->next;
		}
		temp->next = temp->next->next;
	}

    std::shared_ptr<ListNode<value_type>> head = std::make_shared<ListNode<value_type>>();
};

#endif //DATA_STRUCTURE_SINGLELINKLIST_HPP
