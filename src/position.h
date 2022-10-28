//
// Created by MAC on 07/02/2022.
//

#ifndef DRAUGHT_POSITION_H
#define DRAUGHT_POSITION_H

#include <iostream>

namespace Draught
{
    class Position
    {
    private:
        std::string d_x;
        std::string d_y;
    public:
        Position(std::string x, std::string y);
    };
}

#endif //DRAUGHT_POSITION_H
