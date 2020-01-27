#pragma once

#include <iostream>

#include "Query.hpp"

class BigQuery : Query {

public:
    BigQuery(std::string query) : Query(query) { std::cout << "Load very long query file that which takes time" << std::endl; };
    ~BigQuery(){};
    void call() override { std::cout << "Runs the loaded query" << std::endl; }
};