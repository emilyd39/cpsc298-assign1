#include <iostream>
#include <string>

using namespace std;

int main (int argc, char **argv) {
  float metricTon = 35273.92;
  float ounces;
  float tons;
  float cerealBoxes;

  // gets ounces and converts it to tons using conversion 1 ton = 35273.92 ounces
  cout << "Weight of cereal (in ounces): " << endl;
  cin >> ounces;
  tons = ounces / metricTon;

  // prints out the converted weight in tons
  cout << "Weight (in tons): " << tons << endl;

  // calculates number of cereal boxes that would weigh 1 ton and prints it
  cerealBoxes = metricTon / ounces;
  cout << "Number of boxes needed to make 1 ton: " << cerealBoxes << endl;

  // if 1 cereal box already weighs more than 1 ton, the message is printed
  if (ounces > metricTon) {
    cout << "Box already weighs over 1 ton" << endl;
  }

  return 0;
}
