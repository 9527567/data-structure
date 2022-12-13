#include "singlelinklist.hpp"
#include <vector>
#include "iostream"
int main(int argc, char **argv)
{
    std::vector<int> input {1,2,3,4,5,6};
    auto singlelinkedlist = SingleLinkedList<int>(input);
    while(singlelinkedlist.head->next != nullptr)
    {
        singlelinkedlist.head = singlelinkedlist.head->next;
        std::cout << singlelinkedlist.head->val << std::endl;
    }
}