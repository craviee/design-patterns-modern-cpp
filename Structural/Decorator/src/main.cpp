#include <iostream>

#include "Orc.hpp"
#include "Minotaur.hpp"
#include "BossDecorator.hpp"
#include "FlyDecorator.hpp"

int main()
{
    Orc orc1;
    Minotaur mino1;

    orc1.attack();
    mino1.attack();

    BossDecorator boss{orc1};
    FlyDecorator megaboss{boss};

    megaboss.attack();

    return 0;
}