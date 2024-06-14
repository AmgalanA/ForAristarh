/**
 * @file block.h
 * @brief Contains the definition of class block in the game.
 */

#pragma once

#include <vector>
#include <map>
#include "position.h"
#include "colors.h"

/**
 * @class Block
 * @brief The Block class represents a block in the game.
 */
class Block {
public:
    /**
     * @brief Constructor for the Block class.
     */
    Block();

    /**
     * @brief Draws the block at the specified offset.
     * @param offsetX The x-axis offset.
     * @param offsetY The y-axis offset.
     */
    void Draw(int offsetX, int offsetY);

    /**
     * @brief Moves the block by the specified rows and columns.
     * @param rows The number of rows to move.
     * @param columns The number of columns to move.
     */
    void Move(int rows, int columns);

    /**
     * @brief Gets the positions of the cells that make up the block.
     * @return A vector of Position objects representing the cell positions.
     */
    std::vector<Position> GetCellPositions();

    /**
     * @brief Rotates the block.
     */
    void Rotate();

    /**
     * @brief Undoes the last rotation of the block.
     */
    void UndoRotation();

    int id;    /**< The identifier for the block. */
    std::map<int, std::vector<Position>> cells;    /**< The cells that make up the block, mapped by their positions. */

private:
    int cellSize;        /**< The size of each cell in the block. */
    int rotationState;   /**< The current rotation state of the block. */
    std::vector<Color> colors; /**< The colors of the block. */
    int rowOffset;       /**< The row offset of the block. */
    int columnOffset;    /**< The column offset of the block. */
};
