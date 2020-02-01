#include <iostream>
#include <vector>

int main()
{
    std::vector<int> numbers = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    for(auto iterator = numbers.begin(); iterator != numbers.end(); iterator++)
        std::cout << "This number is: " << *iterator << std::endl;

    for(auto iterator = numbers.begin(); iterator != numbers.end(); iterator++)
    {
        (*iterator)++;
        std::cout << "Adding 1 to the number: " << *iterator << std::endl;
    }

    for(auto reverseIterator = numbers.rbegin(); reverseIterator != numbers.rend(); reverseIterator++)
        std::cout << "Reverse order: " << *reverseIterator << std::endl;
        
    return 0;
}