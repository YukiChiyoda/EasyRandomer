#include <iostream>
#include <list>
#include <ctime>

const int EDGE = 1e5;
std::list<int> bukkit;

int main()
{
    freopen("output", "w", stdout);
    std::srand((unsigned)time(0));
    for (int i = 0; i < EDGE; i++)
        bukkit.push_back(i);
    for (int i = 0; i < bukkit.size(); i++)
    {
        const int location = std::rand() % (bukkit.size() - i);
        std::list<int>::iterator iter = bukkit.begin();
        std::advance(iter, location);
        bukkit.push_back(*iter);
        bukkit.erase(iter);
    }
    for (auto i : bukkit)
        std::cout << i << std::endl;
    return 0;
}