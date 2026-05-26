#ifndef TICTACTOE_GAMEBOARD_H
#define TICTACTOE_GAMEBOARD_H


class GameBoard {
public:
    GameBoard();
    void printBoard();

private:
    char boardValues[3][3];
    void initializeBoard();
};


#endif