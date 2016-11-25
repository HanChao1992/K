#include "Country.cc"

int itemRand () {
  srand (time(NULL));
  int item = rand () % 2;
  switch (item) {
    case 0:
      return item;
    case 1:
      item = rand () % 6;
      return item;
    default:
      return item;
  }
}

int main() {
  cout << "Welcome to Big Rich Old Guy!" << endl;
  cout << "Please enter your name!" << endl;
  string pName;
  bool nameConfirm = false;
  while (!nameConfirm) {
    cin >> pName
    cout << "Your name is " << pName << endl;
    cout << "Is that right?" << endl;
    nameConfirm = true;
  }
  int item = itemRand();
  Country China("China", 0, item, 1, 1000, 2000, 0);
  China.info();

}
