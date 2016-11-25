#include <string>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>

class Player {
  private:
    double assets;
    double liabilities = 0;
    double cash;
    int skill;

  public:
    double purchaseRate = 1.00;
    double paymentRate = 1.00;
    double maintenanceRate = 1.00;
    double snatchRate = 0.00;

    double getAssets();
    void setAssets(double newAssets);
    double getLiabilities();
    void setLiabilities(double newLiabilities);
    double getCash();
    int getSkill();
    void setCash(double newCash);
    void setPurchaseRate(double newPurchaseRate);
    void setPaymentRate(double newPaymentRate);
    void setMaintenanceRate(double newMaintenanceRate);
    void setSnatchRate(double newSnatchRate);
    double getNetWorth();
}

//
Player::Player(double assets, double cash, int skill): assets(assets), cash(cash), skill(skill) {}

double Player::getAssets() {
  return assets;
}

void Player::setAssets(double newAssets) {
  assets = newAssets;
}

double Player::getLiabilities() {
  return liabilities;
}

void Player::setLiabilities(double newLiabilities) {
  liabilities = newLiabilities;
}

double Player::getCash() {
  return cash;
}

void Player::setCash() {
  cash = newCash;
}

int Player::getSkill() {
  return skill;
}

void Player::setPurchaseRate(double newPurchaseRate) {
  purchaseRate = newPurchaseRate;
}
void Player::setPaymentRate(double newPaymentRate) {
  paymentRate = newPaymentRate;
}
void Player::setMaintenanceRate(double newMaintenanceRate) {
  maintenanceRate = newMaintenanceRate;
}
void Player::setSnatchRate(double newSnatchRate) {
  snatchRate = newSnatchRate;
}
double Player::getNetWorth() {
  double netWorth = assets - liabilities;
  return netWorth;
}
