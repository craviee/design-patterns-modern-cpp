#include "LazyQuery.hpp"

void LazyQuery::call()
{
    if(!bigQuery)
        bigQuery = new BigQuery(query);
    std::cout << "Runs the loaded query" << std::endl;
}