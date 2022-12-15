#include "singlelinklist.hpp"
#include <vector>
#include <optional>
#include <iostream>
int main(int argc, char **argv)
{
    std::vector<int> input {1,2,3,4,5,6};
	SingleLinkedList<int> singleLinkedList = SingleLinkedList<int>(input);
    while(singleLinkedList.head->next != nullptr)
    {
	    singleLinkedList.head = singleLinkedList.head->next;
        std::cout << singleLinkedList.head->val << std::endl;
    }
    std::vector<std::optional<int>> tree = {1,2,3,4,5,6,std::nullopt};
}