#pragma once

#include "Log.hpp"
#include "NullLog.hpp"

class File
{
    public:
        File(std::string file, Log* logger = new NullLog{}) : logger{logger}{};
        ~File(){};
        void readFile();
    private:
        std::string file;
        Log* logger;
};