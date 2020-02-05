#include "Human.hpp"
#include "Priest.hpp"

int main()
{
    Human human{100};
    Priest priest{};

    human.takesDamage(10);
    
    human.subscribe(&priest);
    human.takesDamage(20);
    human.unsubscribe(&priest);

    human.takesDamage(30);
    
    return 0;
}