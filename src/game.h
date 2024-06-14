/**
 * @file game.h
 * @brief Contains the main wrapper for the program.
 */

#pragma once

#include "grid.h"
#include "blocks.cpp"

/**
 * @class Game
 * @brief The Game class serves as the main wrapper for the program.
 * 
 * It handles the generation of elements, processing of key events, and other game logic.
 */
class Game {
public:
    /**
     * @brief Constructor for the Game class.
     */
    Game();

    /**
     * @brief Desctructor for the Game class.
     */
    ~Game();

    /**
     * @brief Draws the game elements on the screen.
     */
    void Draw();

    /**
     * @brief Handles user input.
     */
    void HandleInput();

    /**
     * @brief Moves the current block down by one unit.
     */
    void MoveBlockDown();

    bool gameOver;    /**< Indicates whether the game is over. */
    int score;        /**< Stores the current game score. */
    Music music;      /**< Handles the game music. */

    /**
     * @brief Gets the current state of the grid.
     * @return The current Grid object.
     */
    Grid GetGrid();

    /**
     * @brief Gets the current block that is falling.
     * @return The current Block object.
     */
    Block GetCurrentBlock();

    /**
     * @brief Gets the next block that will fall.
     * @return The next Block object.
     */
    Block GetNextBlock();

    /**
     * @brief Gets a list of all blocks.
     * @return A vector containing all Block objects.
     */
    std::vector<Block> GetBlocks();

    /**
     * @brief Sets the game over state.
     * @param gameOver The game over state to set.
     */
    void SetGameover(bool gameOver);

    /**
     * @brief Checks if the game is over.
     * @return True if the game is over, otherwise false.
     */
    bool GetGameover();

    /**
     * @brief Moves the current block to the left.
     */
    void MoveBlockLeft();

    /**
     * @brief Moves the current block to the right.
     */
    void MoveBlockRight();

    /**
     * @brief Checks if the current block fits in the grid.
     * @return True if the block fits, otherwise false.
     */
    bool BlockFits();

    /**
     * @brief Checks if the current block is outside the grid.
     * @return True if the block is outside, otherwise false.
     */
    bool IsBlockOutside();

    /**
     * @brief Updates the game score based on cleared lines and moved down points.
     * @param linesCleared The number of lines cleared.
     * @param moveDownPoints The points gained by moving blocks down.
     */
    void UpdateScore(int linesCleared, int moveDownPoints);

    /**
     * @brief Resets the game to its initial state.
     */
    void Reset();

private:
    /**
     * @brief Generates a random block.
     * @return A random Block object.
     */
    Block GetRandomBlock();

    /**
     * @brief Gets a list of all blocks.
     * @return A vector containing all Block objects.
     */
    std::vector<Block> GetAllBlocks();

    /**
     * @brief Rotates the current block.
     */
    void RotateBlock();

    /**
     * @brief Locks the current block in place on the grid.
     */
    void LockBlock();

    Grid grid;               /**< The game grid. */
    std::vector<Block> blocks; /**< A list of all blocks. */
    Block currentBlock;      /**< The current block that is falling. */
    Block nextBlock;         /**< The next block that will fall. */
    Sound rotateSound;       /**< Sound played when a block is rotated. */
    Sound clearSound;        /**< Sound played when a line is cleared. */
};
