#include "singlelinklist.hpp"
#include <vector>
#include <optional>
#include <iostream>
int main(int argc, char **argv)
{
    std::vector<int> input {1,2,3,4,5,6};
	SingleLinkedList<int> singleLinkedList = SingleLinkedList<int>(input);
	singleLinkedList.addValToNthPos(9,2);
	singleLinkedList.delNodeNthPos(3);
    while(singleLinkedList.head != nullptr)
    {
        std::cout << singleLinkedList.head->val << std::endl;
		singleLinkedList.head = singleLinkedList.head->next;
    }
    std::vector<std::optional<int>> tree = {1,2,3,4,5,6,std::nullopt};
}