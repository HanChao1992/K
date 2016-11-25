#include "Country.h"

//
Country::Country(string cname, int owner, int item, int level, double value, double cost, double fee):
                cname(cname), owner(owner), item(item), level(level), value(value), cost(cost), fee(fee) {}

string Country::getName() {
  return cname;
}
int Country::getOwner() {
  return owner;
}
int Country::getLevel() {
  return level;
}
void Country::setLevel(int newLevel) {
  level = newLevel;
}
double Country::getValue() {
  return value;
}
void Country::setValue(double newValue) {
  value = newValue;
}
int Country::getItem() {
  return item;
}
void Country::setItem(int newItem) {
  item = newItem;
}
double Country::getCost() {
  return cost;
}
void Country::setCost(double newCost) {
  cost = newCost;
}
double Country::getFee() {
  return fee;
}
void Country::setFee(double newFee) {
  fee = newFee;
}
void Country::info() {
  cout << "A new block has been initiated!" << endl;
  cout << "The name of the country is " << cname << endl;
  cout << "The owner of the country is " << owner << endl;
  cout << "There is item " << item << " on the block." << endl;
  cout << "The current level of the country is " << level << endl;
  cout << "The current value of the country is " << value << endl;
  cout << "The cost to upgrade is " << cost << endl;
  cout << "The fee is " << fee << endl;
}
