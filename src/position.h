/**
 * @file position.h
 * @brief This file contains the definition of the Position class used for representing a position in a grid.
 */

#pragma once

/**
 * @class Position
 * @brief A class to represent a position in a grid with row and column indices.
 */
class Position {
public:
    /**
     * @brief Constructor for the Position class.
     * @param row The row index of the position.
     * @param column The column index of the position.
     */
    Position(int row, int column);

    int row;    ///< The row index of the position.
    int column; ///< The column index of the position.
};
