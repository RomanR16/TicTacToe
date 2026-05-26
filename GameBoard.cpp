#include "GameBoard.h"
#include <iostream>

GameBoard::GameBoard() {
    initializeBoard();
    std::cout << "New Board" << std::endl;
    printBoard();
}

void GameBoard::initializeBoard() {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            boardValues[i][j] = ' ';
        }
    }
}

void GameBoard::printBoard() {
    for (int i = 0; i < 3; i++) {
        std::cout << boardValues[i][0] << "|" << boardValues[i][1] << "|" << boardValues[i][2] << std::endl;
        if (i != 2) {
            std::cout << "-+-+-" << std::endl;
        }
    }
}