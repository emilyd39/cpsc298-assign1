#include <iostream>
#include <string>

using namespace std;

int main (int argc, char **argv) {
  int maxRoomCapacity;
  int numPeople;

  cout << "Maximum Room Capacity: " << endl;
  cin >> maxRoomCapacity;
  cout << "Number of People Attending Meeting: " << endl;
  cin >> numPeople;

  if (numPeople <= maxRoomCapacity) {
    cout << "It is legal to hold the meeting." << endl;
    cout << maxRoomCapacity - numPeople << " more people may legally attend." << endl;
  }
  else {
    cout << "The meeting cannot be held due to fire regulations." << endl;
    cout << numPeople - maxRoomCapacity << " people must be excluded to meet fire regulations." << endl;
  }

  return 0;
}
