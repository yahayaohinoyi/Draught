//
// Created by MAC on 07/02/2022.
//

#ifndef DRAUGHT_POSITION_H
#define DRAUGHT_POSITION_H

#include <iostream>
#include "piece.h"

namespace Draught
{
    class Position
    {
    public:
        Position(std::string  row, std::string  col, Piece  p);
    private:
        const std::string d_row;
        const std::string d_col;
        Piece d_p;
    };
}

#endif //DRAUGHT_POSITION_H
