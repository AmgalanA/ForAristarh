#include "block.h"
#include "position.h"

/**
 * @class LBlock
 * @brief Represents an L-shaped block in the game.
 */
class LBlock : public Block {
public:
    /**
     * @brief Constructs an LBlock.
     * Initializes the block with an L shape.
     */
    LBlock() {
        id = 1;
        cells[0] = {Position(0, 2), Position(1, 0), Position(1, 1), Position(1, 2)};
        cells[1] = {Position(0, 1), Position(1, 1), Position(2, 1), Position(2, 2)};
        cells[2] = {Position(1, 0), Position(2, 0), Position(1, 1), Position(1, 2)};
        cells[3] = {Position(0, 0), Position(0, 1), Position(1, 1), Position(2, 1)};
        Move(0, 3);
    };
};

/**
 * @class JBlock
 * @brief Represents a J-shaped block in the game.
 */
class JBlock : public Block {
public:
    /**
     * @brief Constructs a JBlock.
     * Initializes the block with a J shape.
     */
    JBlock() {
        id = 2;
        cells[0] = {Position(0, 0), Position(1, 0), Position(1, 1), Position(1, 2)};
        cells[1] = {Position(0, 1), Position(1, 1), Position(2, 1), Position(0, 2)};
        cells[2] = {Position(2, 2), Position(1, 0), Position(1, 1), Position(1, 2)};
        cells[3] = {Position(0, 1), Position(1, 1), Position(2, 0), Position(2, 1)};
        Move(0, 3);
    };
};

/**
 * @class IBlock
 * @brief Represents an I-shaped block in the game.
 */
class IBlock : public Block {
public:
    /**
     * @brief Constructs an IBlock.
     * Initializes the block with an I shape.
     */
    IBlock() {
        id = 3;
        cells[0] = {Position(1, 0), Position(1, 1), Position(1, 2), Position(1, 3)};
        cells[1] = {Position(0, 2), Position(1, 2), Position(2, 2), Position(3, 2)};
        cells[2] = {Position(2, 0), Position(2, 1), Position(2, 2), Position(2, 3)};
        cells[3] = {Position(0, 1), Position(1, 1), Position(2, 1), Position(3, 1)};
        Move(-1, 3);
    };
};

/**
 * @class OBlock
 * @brief Represents an O-shaped block in the game.
 */
class OBlock : public Block {
public:
    /**
     * @brief Constructs an OBlock.
     * Initializes the block with an O shape.
     */
    OBlock() {
        id = 4;
        cells[0] = {Position(0, 0), Position(0, 1), Position(1, 0), Position(1, 1)};
        Move(0, 4);
    };
};

/**
 * @class SBlock
 * @brief Represents an S-shaped block in the game.
 */
class SBlock : public Block {
public:
    /**
     * @brief Constructs an SBlock.
     * Initializes the block with an S shape.
     */
    SBlock() {
        id = 5;
        cells[0] = {Position(0, 1), Position(0, 2), Position(1, 0), Position(1, 1)};
        cells[1] = {Position(0, 1), Position(1, 1), Position(1, 2), Position(2, 2)};
        cells[2] = {Position(1, 1), Position(1, 2), Position(2, 0), Position(2, 1)};
        cells[3] = {Position(0, 0), Position(1, 0), Position(1, 1), Position(2, 1)};
        Move(0, 3);
    };
};

/**
 * @class TBlock
 * @brief Represents a T-shaped block in the game.
 */
class TBlock : public Block {
public:
    /**
     * @brief Constructs a TBlock.
     * Initializes the block with a T shape.
     */
    TBlock() {
        id = 6;
        cells[0] = {Position(0, 1), Position(1, 0), Position(1, 1), Position(1, 2)};
        cells[1] = {Position(0, 1), Position(1, 1), Position(1, 2), Position(2, 1)};
        cells[2] = {Position(1, 0), Position(1, 1), Position(1, 2), Position(2, 1)};
        cells[3] = {Position(0, 1), Position(1, 0), Position(1, 1), Position(2, 1)};
        Move(0, 3);
    };
};

/**
 * @class ZBlock
 * @brief Represents a Z-shaped block in the game.
 */
class ZBlock : public Block {
public:
    /**
     * @brief Constructs a ZBlock.
     * Initializes the block with a Z shape.
     */
    ZBlock() {
        id = 7;
        cells[0] = {Position(0, 0), Position(0, 1), Position(1, 1), Position(1, 2)};
        cells[1] = {Position(0, 2), Position(1, 1), Position(1, 2), Position(2, 1)};
        cells[2] = {Position(1, 0), Position(1, 1), Position(2, 1), Position(2, 2)};
        cells[3] = {Position(0, 1), Position(1, 0), Position(1, 1), Position(2, 0)};
        Move(0, 3);
    }
};
