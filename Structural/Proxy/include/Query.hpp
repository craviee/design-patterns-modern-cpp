#pragma once

#include <string>

class Query {

public:
    Query(std::string query){};
    ~Query(){};
    virtual void call() = 0;
};