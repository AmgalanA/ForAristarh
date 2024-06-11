#pragma once
#include "grid.h"
#include "blocks.cpp"

class Game
{
    public:
        Game();
        ~Game();
        void Draw();
        void HandleInput();
        void MoveBlockDown();
        bool gameOver;
        int score;
        Music music;
        Grid GetGrid();
        Block GetCurrentBlock();
        Block GetNextBlock();
        std::vector<Block> GetBlocks();

    private:
        void MoveBlockLeft();
        void MoveBlockRight();
        bool IsBlockOutside();
        Block GetRandomBlock();
        std::vector<Block> GetAllBlocks();
        void RotateBlock();
        void LockBlock();
        void UpdateScore(int linesCleared, int moveDownPoints);
        bool BlockFits();
        void Reset();
        Grid grid;
        std::vector<Block> blocks;
        Block currentBlock;
        Block nextBlock;
        Sound rotateSound;
        Sound clearSound;
};