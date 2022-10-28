//
// Created by MAC on 07/02/2022.
//

#include "board.h"

namespace Draught
{
    Board::Board(std::string id, unsigned int numSquares)
    : d_id(id), d_numSquares(numSquares)
    {}

    std::vector<std::string> Board::moves()
    {
        return d_moves;
    }

    std::map<Position, Piece> Board::positionToPiece()
    {
        return d_positionToPiece;
    }

    unsigned int Board::numSquares()
    {
        return d_numSquares;
    }
}
