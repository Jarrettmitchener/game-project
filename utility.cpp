#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

//make sure to add srand(time(NULL)) before
int diceRoll(int n)
{
    
    int random = (rand() % n) + 1;

    return random;
}

struct weapon 
{
    int damage;
    double critical;
    double accuaracy;
}wooden_sword, iron_sword, steel_sword;

struct armor
{
    int defense;
    double speed;
    int health;
}cloth, chainmail, iron;

struct enemy
{
    string name;
    int health;
    int damage;
}skeleton, goblin, barbarian;

