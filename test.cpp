#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "external/doctest.h"
#include <vector>
#include "src/grid.h"
#include "src/position.h"
#include "src/block.h"
#include "src/game.h"
#include <iostream>

TEST_CASE("Check Initial Values Of The Grid"){
    Game game = Game();
    int numRows = 10;
    int numCols = 20;

    for (int row = 0; row < numRows; ++row) {
        for (int column = 0; column < numCols; ++column) {
            Grid grid = game.GetGrid();
            CHECK(grid.grid[row][column] == 0);
        }
    }
}

TEST_CASE("Test Get Random Block") {
    Game game = Game();

    Block currentBlock = game.GetCurrentBlock();
    Block nextBlock = game.GetNextBlock();

    CHECK(currentBlock.id != nextBlock.id);

    std::vector<Block> blocks = game.GetBlocks();

    for (int i = 0; i < blocks.size(); ++i) {
        CHECK(blocks[i].id != currentBlock.id);
        CHECK(blocks[i].id != currentBlock.id);
    }
}

// void Game::MoveBlockDown()
// {
//     if (!gameOver) {
//         currentBlock.Move(1, 0);
//         if (IsBlockOutside() || BlockFits() == false) {
//             currentBlock.Move(-1, 0);
//             LockBlock();
//         }
//     }
// }

TEST_CASE("Check Move Block Down") {
    Game game = Game();
    std::vector<int> prevPositions;
    
    std::vector<Position> cellPositions = game.GetCurrentBlock().GetCellPositions();
    for (int i = 0; i < cellPositions.size(); ++i) {
        prevPositions.push_back(cellPositions[i].row);
    }
    
    game.MoveBlockDown();
    cellPositions = game.GetCurrentBlock().GetCellPositions();

    for (int i = 0; i < cellPositions.size(); ++i) {
        CHECK(prevPositions[i] == (cellPositions[i].row - 1));
    }
}
