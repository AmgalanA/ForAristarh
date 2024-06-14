#include <vector>
#include "colors.h"

/**
 * @file colors.h
 * @brief Defines color constants and provides a function to get cell colors.
 */

/**
 * @brief Dark grey color constant.
 */
const Color darkGrey = {26, 31, 40, 255};

/**
 * @brief Green color constant.
 */
const Color green = {47, 230, 23, 255};

/**
 * @brief Red color constant.
 */
const Color red = {232, 18, 18, 255};

/**
 * @brief Orange color constant.
 */
const Color orange = {226, 116, 17, 255};

/**
 * @brief Yellow color constant.
 */
const Color yellow = {237, 234, 4, 255};

/**
 * @brief Purple color constant.
 */
const Color purple = {166, 0, 247, 255};

/**
 * @brief Cyan color constant.
 */
const Color cyan = {21, 204, 209, 255};

/**
 * @brief Blue color constant.
 */
const Color blue = {13, 64, 216, 255};

/**
 * @brief Light blue color constant.
 */
const Color lightBlue = {59, 85, 162, 255};

/**
 * @brief Dark blue color constant.
 */
const Color darkBlue = {44, 44, 127, 255};

/**
 * @brief Retrieves a list of cell colors.
 * @return A vector containing the cell colors.
 */
std::vector<Color> GetCellColors() {
    return {darkGrey, green, red, orange, yellow, purple, cyan, blue};
}
