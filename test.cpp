#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN

#include "external/doctest.h"
#include <vector>
#include "src/grid.h"
#include "src/position.h"
#include "src/block.h"
#include "src/game.h"
#include <iostream>

TEST_CASE("Check Initial Values Of The Grid") {
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

TEST_CASE("Check Get Random Block") {
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

TEST_CASE("Check Move Block Down") {
    Game game = Game();
    std::vector<int> prevPositionsRow;
    std::vector<int> prevPositionsCol;

    std::vector<Position> cellPositions = game.GetCurrentBlock().GetCellPositions();
    for (int i = 0; i < cellPositions.size(); ++i) {
        prevPositionsRow.push_back(cellPositions[i].row);
        prevPositionsCol.push_back(cellPositions[i].column);
    }

    game.MoveBlockDown();
    cellPositions = game.GetCurrentBlock().GetCellPositions();

    for (int i = 0; i < cellPositions.size(); ++i) {
        CHECK(prevPositionsRow[i] == (cellPositions[i].row - 1));
        CHECK(prevPositionsCol[i] == (cellPositions[i].column));
    }
}

TEST_CASE("Check Move Block Left") {
    Game game = Game();
    std::vector<int> prevPositionsCol;
    std::vector<int> prevPositionsRow;

    std::vector<Position> cellPositions = game.GetCurrentBlock().GetCellPositions();
    for (int i = 0; i < cellPositions.size(); ++i) {
        prevPositionsCol.push_back(cellPositions[i].column);
        prevPositionsRow.push_back(cellPositions[i].row);
    }

    game.MoveBlockLeft();
    cellPositions = game.GetCurrentBlock().GetCellPositions();

    for (int i = 0; i < cellPositions.size(); ++i) {
        CHECK(prevPositionsCol[i] == (cellPositions[i].column + 1));
        CHECK(prevPositionsRow[i] == (cellPositions[i].row));
    }
}

TEST_CASE("Check Move Block Right") {
    Game game = Game();
    std::vector<int> prevPositionsCol;
    std::vector<int> prevPositionsRow;

    std::vector<Position> cellPositions = game.GetCurrentBlock().GetCellPositions();
    for (int i = 0; i < cellPositions.size(); ++i) {
        prevPositionsCol.push_back(cellPositions[i].column);
        prevPositionsRow.push_back(cellPositions[i].row);
    }

    game.MoveBlockRight();
    cellPositions = game.GetCurrentBlock().GetCellPositions();

    for (int i = 0; i < cellPositions.size(); ++i) {
        CHECK(prevPositionsCol[i] == (cellPositions[i].column - 1));
        CHECK(prevPositionsRow[i] == (cellPositions[i].row));
    }
}

TEST_CASE("Check BlockFits") {
    Game game = Game();

    for (int i = 0; i < 150; ++i) {
        game.MoveBlockDown();
        if (game.BlockFits() == true) {
            CHECK(game.BlockFits() == true);
        }
    }

    CHECK(game.BlockFits() == false);
}

TEST_CASE("Check Is Block Outside") {
    Game game = Game();

    for (int i = 0; i < 100; ++i) {
        game.MoveBlockRight();

        CHECK(game.IsBlockOutside() == false);
    }
}

TEST_CASE("Check Update Score") {
    Game game = Game();

    CHECK(game.score == 0);

    game.UpdateScore(0, 0);

    CHECK(game.score == 0);

    game.UpdateScore(1, 0);

    CHECK(game.score == 100);

    game.UpdateScore(0, 1);

    CHECK(game.score == 101);

    game.UpdateScore(2, 0);

    CHECK(game.score == 401);

    game.UpdateScore(3, 0);

    CHECK(game.score == 901);

    game.UpdateScore(2, 5);

    CHECK(game.score == 1206);

    game.UpdateScore(4, 0);

    CHECK(game.score == 1206);
}

TEST_CASE("Check Reset") {
    Game game = Game();

    game.UpdateScore(2, 5);

    CHECK(game.score == 305);

    game.Reset();

    CHECK(game.score == 0);
}

TEST_CASE("Check Game Over") {
    Game game = Game();

    CHECK(game.GetGameover() == false);

    game.SetGameover(true);

    CHECK(game.GetGameover() == true);

    std::vector<int> prevPositionsRow;
    std::vector<int> prevPositionsCol;

    std::vector<Position> cellPositions = game.GetCurrentBlock().GetCellPositions();
    for (int i = 0; i < cellPositions.size(); ++i) {
        prevPositionsRow.push_back(cellPositions[i].row);
        prevPositionsCol.push_back(cellPositions[i].column);
    }

    game.MoveBlockDown();
    cellPositions = game.GetCurrentBlock().GetCellPositions();

    for (int i = 0; i < cellPositions.size(); ++i) {
        CHECK(prevPositionsRow[i] == (cellPositions[i].row));
        CHECK(prevPositionsCol[i] == (cellPositions[i].column));
    }

    for (int i = 0; i < cellPositions.size(); ++i) {
        prevPositionsCol[i] = (cellPositions[i].column);
        prevPositionsRow[i] = (cellPositions[i].row);
    }

    game.MoveBlockRight();

    for (int i = 0; i < cellPositions.size(); ++i) {
        CHECK(prevPositionsCol[i] == (cellPositions[i].column));
        CHECK(prevPositionsRow[i] == (cellPositions[i].row));
    }

    for (int i = 0; i < cellPositions.size(); ++i) {
        prevPositionsCol[i] = (cellPositions[i].column);
        prevPositionsRow[i] = (cellPositions[i].row);
    }

    game.MoveBlockRight();

    for (int i = 0; i < cellPositions.size(); ++i) {
        CHECK(prevPositionsCol[i] == (cellPositions[i].column));
        CHECK(prevPositionsRow[i] == (cellPositions[i].row));
    }

    game.HandleInput();

    CHECK(game.GetGameover() == true);
}