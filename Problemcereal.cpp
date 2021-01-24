#include <iostream>
#include <string>

using namespace std;

int main (int argc, char **argv) {
  float metricTon = 35273.92;
  float ounces;
  float tons;
  float cerealBoxes;

  cout << "Weight of cereal (in ounces): " << endl;
  cin >> ounces;
  tons = ounces / metricTon;

  cout << "Weight (in tons): " << tons << endl;
  cerealBoxes = metricTon / ounces;

  cout << "Number of boxes needed to make 1 ton: " << cerealBoxes << endl;
  if (ounces > metricTon) {
    cout << "Box already weighs over 1 ton" << endl;
  }
  
  return 0;
}
