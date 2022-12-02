#include "../include/human_player.h"

human_player::human_player(){};

int human_player::play(const playfield &field) {
  while (true) {
    int col;
    cout << "Enter column: ";
    cin >> col;
    if (field_helper<playfield>::valid_input(field, col)) {
      return col;
    } else {
      cout << "Invalid Input: Try again!" << endl;
    }
  }
}
