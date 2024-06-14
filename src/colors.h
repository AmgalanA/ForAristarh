#pragma once

#include <raylib.h>
#include <vector>

/**
 * @file colors.h
 * @brief Contains the color definitions and a function to get all cell colors.
 */

/**
 * @brief Dark grey color used for blocks.
 */
extern const Color darkGrey;

/**
 * @brief Green color used for blocks.
 */
extern const Color green;

/**
 * @brief Red color used for blocks.
 */
extern const Color red;

/**
 * @brief Orange color used for blocks.
 */
extern const Color orange;

/**
 * @brief Yellow color used for blocks.
 */
extern const Color yellow;

/**
 * @brief Purple color used for blocks.
 */
extern const Color purple;

/**
 * @brief Cyan color used for blocks.
 */
extern const Color cyan;

/**
 * @brief Blue color used for blocks.
 */
extern const Color blue;

/**
 * @brief Light blue color used for blocks.
 */
extern const Color lightBlue;

/**
 * @brief Dark blue color used for blocks.
 */
extern const Color darkBlue;

/**
 * @brief Retrieves a vector containing all cell colors.
 * @return A vector of Color objects representing all cell colors.
 */
std::vector<Color> GetCellColors();
