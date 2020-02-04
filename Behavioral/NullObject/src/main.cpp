#include "PrintLog.hpp"
#include "NullLog.hpp"
#include "File.hpp"

int main()
{
    PrintLog printLog{};
    NullLog nullLog{};

    File file1{"main.cpp", &printLog};
    file1.readFile();

    File file2{"main.out", &nullLog};
    file2.readFile();

    File file3{"main.c"};
    file3.readFile();

    return 0;
}