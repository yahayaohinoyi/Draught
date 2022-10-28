//
// Created by MAC on 07/02/2022.
//

#ifndef DRAUGHT_BOARD_H
#define DRAUGHT_BOARD_H

#include <iostream>
#include <map>
#include "position.h"
#include "piece.h"

namespace Draught
{
    class Board
    {
    private:
        const std::string d_id;
        const unsigned int d_numSquares;
        std::map<Position, Piece> d_positionToPiece;
        std::vector<std::string> d_moves;
    public:
        Board(std::string d_id, unsigned int d_numSquares);
        std::vector<std::string> moves();
        std::map<Position, Piece> positionToPiece();
        unsigned int numSquares();
    };
}

#endif //DRAUGHT_BOARD_H
