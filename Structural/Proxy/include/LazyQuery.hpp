#pragma once

#include <iostream>

#include "BigQuery.hpp"
#include "Query.hpp"

class LazyQuery : Query {

public:
    LazyQuery(std::string query) : Query(query), query{query} { std::cout << "Doesn't load the query because it is not needed yet" << std::endl; };
    ~LazyQuery(){ delete bigQuery; };
    void call();
private:
    BigQuery* bigQuery{nullptr};
    std::string query;
};