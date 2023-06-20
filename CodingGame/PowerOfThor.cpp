#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 * ---
 * Hint: You can use the debug stream to print initialTX and initialTY, if Thor
 *seems not follow your orders.
 **/

int main() {
  int light_x; // the X position of the light of power
  int light_y; // the Y position of the light of power

  int initial_tx; // Thor's starting X position
  int initial_ty; // Thor's starting Y position
  cin >> light_x >> light_y >> initial_tx >> initial_ty;
  cin.ignore();

  int currentThorXPos = initial_tx;
  int currentThorYPos = initial_ty;

  // game loop
  while (1) {
    int remaining_turns; // The remaining amount of turns Thor can move. Do not remove this line.
    cin >> remaining_turns;
    cin.ignore();

    std::string resultingMove = "";

    if (currentThorYPos > light_y) {
      resultingMove += "N";
      currentThorYPos--;
    } else if (currentThorYPos < light_y) {
      resultingMove += "S";
      currentThorYPos++;
    }

    if (currentThorXPos > light_x) {
      resultingMove += "W";
      currentThorXPos--;
    } else if (currentThorXPos < light_x) {
      resultingMove += "E";
      currentThorXPos++;
    }

    cout << resultingMove << endl;
  }
}
