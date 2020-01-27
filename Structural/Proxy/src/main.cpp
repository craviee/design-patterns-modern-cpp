#include <iostream>

#include "LazyQuery.hpp"

int main()
{
    LazyQuery query{"query.sql"};
    std::cout << "Query didn't read yet because it doesn't need to" << std::endl;
    query.call();
    return 0;
}