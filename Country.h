#include <string>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

using namespace std;

//class Item;

class Country {
  private:
    string cname;
    int owner;     // 0: not owned
                   // x: owned by player x
                   // -x: owned by player x but mortgaged
    int item;      // 0: no item
                   // 1: 100 gold
                   // 2: 20% discount next purchase or upgrade
                   // 3: Avoid next payment
                   // 4: 50% maintenance fee for 2 turns
                   // 5: 2% gold gain when pass a player next time
    int level;     // 1: house
                   // 2: townhouse
                   // 3: apartment
                   // 4: condo
                   // 5: hotel


    double value;
    double cost;
    double fee;

  public:
    Country(string cname, int owner, int item, int level, double value, double cost, double fee);
    string getName();
    int getOwner();
    void setOwner(int newOwner);
    int getLevel();
    void setLevel(int newLevel);
    double getValue();
    void setValue(double newValue);
    int getItem();
    void setItem(int newItem);
    double getCost();
    void setCost(double newCost);
    double getFee();
    void setFee(double newFee);
    void info();
};
