#ifndef GAME_H
#define GAME_H

#include <vector>
#include "CellState.h"

class Game {
public:
    Game(int size);

    void initGameBoard(int size);
    void resetGame(int size);
    void setCellState(int row, int col, int currentPlayer, int selected_radio1, int selected_radio2);
    CellState getCurrentPlayerSymbol(int currentPlayer, int selected_radio1, int selected_radio2);

    const std::vector<std::vector<CellState>>& getGameBoard() const;

private:
    std::vector<std::vector<CellState>> gameBoard;
};

#endif
