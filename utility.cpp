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
}cloth, chainmail, ironArmor;

struct enemy
{
    string name;
    int health;
    int damage;
};

struct character
{
    string name;
    int health;
    int itemCount;
    int bagItems[3];
    weapon charWeapon;
    armor charArmor;
}player;

void weaponsInit()
{
    wooden_sword.damage = 5;
    wooden_sword.accuaracy = 0.90;
    wooden_sword.critical = 0.10;

    iron_sword.damage = 10;
    iron_sword.accuaracy = 0.90;
    iron_sword.critical = 0.10;

    steel_sword.damage = 15;
    steel_sword.accuaracy = 0.95;
    steel_sword.critical = 0.20;
}

void armorInit()
{
    cloth.defense = 5;
    cloth.health = 5;
    cloth.speed = 0.10;

    chainmail.defense = 8;
    chainmail.health = 7;
    chainmail.speed = 0.12;

    ironArmor.defense = 10;
    ironArmor.health = 10;
    ironArmor.speed = 0.12;
}

weapon getWeapon(int type)
{
    weapon Weapon;
    switch (type)
    {
    case 0:
        Weapon = wooden_sword;
        break;
    case 1:
        Weapon = iron_sword;
        break;
    case 2:
        Weapon = steel_sword;
        break;
    default:
        break;
    }
    return Weapon;
}

character initCharacter()
{
    player.health = 50;
    player.itemCount = 0;
    player.charArmor = cloth;
    player.name = "Lemony";
    player.charWeapon = wooden_sword;
    return player;
    
}
//creates a common enemy
//0 - creates skeleton
//1 - creates goblin
//2 - creates barbarian
enemy commonEnemyCreate(int type)
{
    enemy commonEnemy;

    switch (type)
    {
    case 0 :
        commonEnemy.name = "skeleton";
        commonEnemy.health = 10;
        commonEnemy.damage = 3;
        break;
    
    case 1 :
        commonEnemy.name = "goblin";
        commonEnemy.health = 20;
        commonEnemy.damage = 6;

    case 2 :
        commonEnemy.name = "barbarian";
        commonEnemy.health = 40;
        commonEnemy.damage = 12;
    default:
        break;
    }

    return commonEnemy;
}

