#ifndef EX_L4_1_UTIL_H
#define EX_L4_1_UTIL_H

#include "playfield.h"

using namespace std;

template<typename F>
struct util {
    static bool is_playable(const F &field, int column) {
        for (int i = 0; i < playfield::height ; i++) {
            if(field.stoneat(column-1, i) == 0) { //none = 0 in playfield
                return true;
            }
        }
        return false;
    }

    static int pos_y(const F &field, int x) {
        int y = playfield::height - 1;
        while(field.stoneat(x, y) != 0) {
            y--;
        }
        return y; // real value of y, does not need -
    }
    /**
     * returns values for how good the move is
     * 5 means the game can be won
     * @param field
     * @param x
     * @return
     */
    static int rate_move(F& field, int x) {
        int current = get_current(field);
        int y = pos_y(field, x);
        int max = 0;
        //Check down
        if(current == field.stoneat(x,y+1)) {
            int down_counter = 1;
            if(current == field.stoneat(x,y+2)) {
                down_counter++;
                if(current == field.stoneat(x,y+3)){
                    return 5;
                }
            }
            max= down_counter;
        }

        //Check left-right
        if(side_check(field, x, y) > max){
            max = side_check(field, x, y);
        }

        //check diagonals
        if(diagonal_check(field, x, y) > max) {
            max = diagonal_check(field, x, y);
        }
        cout << max << " at " << x << endl;
        return max;
    }

    static int get_current(F &field) { //returns number of player currently at turn
        int counter = 1;
        for (int i = 0; i < playfield::width; ++i) {
            for (int j = 0; j < playfield::height; ++j) {
                if(field.stoneat(i, j) == 1) {
                    counter ++;
                }
                if(field.stoneat(i,j) == 2) {
                    counter --;
                }
            }
        }
        return counter;
    }

    static int side_check(F & field, int x, int y) {
        int current = get_current(field);
        int side_counter = 0;
        if(current == field.stoneat(x+1,y)) {
            side_counter++;
            if(current == field.stoneat(x+2,y)) {
                side_counter++;
                if(current == field.stoneat(x+3,y)) {
                    side_counter++;
                    if(side_counter == 3) return 5;
                }
            }
        }
        if(current == field.stoneat(x-1,y)) {
            side_counter++;
            if(side_counter == 3) return 5;
            if(current == field.stoneat(x-2,y)) {
                side_counter++;
                if(side_counter == 3) return 5;
                if(current == field.stoneat(x-3,y)) {
                    side_counter++;
                    if(side_counter == 3) return 5;
                }
            }
        }
        return side_counter;
    }

    static bool diagonal_check(F &field, int x, int y) {
        int current = get_current(field);
        int counter = 0;
        if(current == field.stoneat(x+1,y+1)) {
            counter++;
            if(current == field.stoneat(x+2,y+2)) {
                counter++;
                if(current == field.stoneat(x+3,y+3)) {
                    counter++;
                    if(counter == 3) return 5;
                }

            }
        }
        if(current == field.stoneat(x-1,y-1)) {
            counter++;
            if(counter == 3) return 5;
            if(current == field.stoneat(x-2,y-2)) {
                counter++;
                if(counter == 3) return 5;
                if(current == field.stoneat(x-3,y-3)) {
                    counter++;
                    if(counter == 3) return 5;
                }
            }
        }
        counter = 0;
        if(current == field.stoneat(x-1,y+1)) {
            counter++;
            if(current == field.stoneat(x-2,y+2)) {
                counter++;
                if(current == field.stoneat(x-3,y+3)) {
                    counter++;
                    if(counter == 3) return 5;
                }

            }
        }
        if(current == field.stoneat(x+1,y-1)) {
            counter++;
            if(counter == 3) return 5;
            if(current == field.stoneat(x+2,y-2)) {
                counter++;
                if(counter == 3) return 5;
                if(current == field.stoneat(x+3,y-3)) {
                    counter++;
                    if(counter == 3) return 5;
                }
            }
        }
        return false;
    }

};

#endif //EX_L4_1_UTIL_H
