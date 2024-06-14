/**
 * @file grid.h
 * @brief This file contains the definition of the Grid class used for managing a grid of cells.
 */

#pragma once

#include <vector>
#include <raylib.h>

/**
 * @class Grid
 * @brief A class to represent and manage a grid of cells for a game or application.
 */
class Grid {
public:
    /**
     * @brief Constructor for the Grid class.
     */
    Grid();

    /**
     * @brief Initializes the grid with default values.
     */
    void Initialize();

    /**
     * @brief Prints the grid to the console.
     */
    void Print();

    /**
     * @brief Draws the grid on the screen using raylib functions.
     */
    void Draw();

    /**
     * @brief Checks if a given cell is outside the grid boundaries.
     * @param row The row index of the cell.
     * @param column The column index of the cell.
     * @return true if the cell is outside the grid, false otherwise.
     */
    bool IsCellOutside(int row, int column);

    /**
     * @brief Checks if a given cell is empty.
     * @param row The row index of the cell.
     * @param column The column index of the cell.
     * @return true if the cell is empty, false otherwise.
     */
    bool IsCellEmpty(int row, int column);

    /**
     * @brief Clears all full rows in the grid.
     * @return The number of rows that were cleared.
     */
    int ClearFullRows();

    /**
     * @brief The grid represented as a 2D array.
     */
    int grid[20][10];

private:
    /**
     * @brief Checks if a specific row is full.
     * @param row The row index to check.
     * @return true if the row is full, false otherwise.
     */
    bool IsRowFull(int row);

    /**
     * @brief Clears a specific row in the grid.
     * @param row The row index to clear.
     */
    void ClearRow(int row);

    /**
     * @brief Moves rows down in the grid starting from a specific row.
     * @param row The starting row index.
     * @param numRows The number of rows to move down.
     */
    void MoveRowDown(int row, int numRows);

    int numRows;  ///< Number of rows in the grid.
    int numCols;  ///< Number of columns in the grid.
    int cellSize; ///< Size of each cell in the grid.
    std::vector<Color> colors; ///< Colors for the grid cells.
};
