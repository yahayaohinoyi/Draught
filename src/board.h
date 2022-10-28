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
        const std::string id;
        unsigned int d_numSquares;
        std::map<Position, Piece> d_positionToPiece;
        std::vector<std::string> d_moves;
    };
}

#endif //DRAUGHT_BOARD_H
