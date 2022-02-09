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
        std::string id;
        unsigned int numSquares;
        std::map<Position, Piece> pos;
    };
}

#endif //DRAUGHT_BOARD_H
