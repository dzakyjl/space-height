#include <iostream>
using namespace std;
 
int main() {
 
  double weight;
  int x;
 
  cout << "Please enter your current earth weight: " << endl;
  cin >> weight;
 
  cout << "\nI have information for the following planets:\n\n" << endl;
  cout << "   1. Venus   2. Mars    3. Jupiter\n" << endl;
  cout << "   4. Saturn  5. Uranus  6. Neptune\n\n" << endl;
 
  cout << "Which planet are you visiting? " << endl;
  cin >> x;
 
  if (x == 1) {
 
    weight = weight * 0.78;
 
  } else if (x == 2) {
 
    weight = weight * 0.39;
 
  } else if (x == 3) {
 
    weight = weight * 2.65;
 
  } else if (x == 4) {
 
    weight = weight * 1.17;
 
  } else if (x == 5) {
 
    weight = weight * 1.05;
 
  } else if (x == 6) {
 
    weight = weight * 1.23;
 
  }
 
  cout << "\nYour weight: " << weight << "\n" << endl;

  return 0;
}
