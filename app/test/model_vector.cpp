#include <iostream>
#include <vector>
#include <ctime>

const int EDGE = 1e5;
std::vector<int> bukkit;

int main()
{
    freopen("output", "w", stdout);
    std::srand((unsigned)time(0));
    for (int i = 0; i < EDGE; i++)
        bukkit.push_back(i);
    for (int i = 0; i < bukkit.size(); i++)
    {
        const int location = std::rand() % (bukkit.size() - i);
        bukkit.push_back(bukkit[location]);
        bukkit.erase(bukkit.begin() + location);
    }
    for (auto i : bukkit)
        std::cout << i << std::endl;
    return 0;
}