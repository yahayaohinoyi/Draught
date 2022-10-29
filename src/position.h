//
// Created by MAC on 07/02/2022.
//

#ifndef DRAUGHT_POSITION_H
#define DRAUGHT_POSITION_H

#include <iostream>
using namespace std;

namespace Draught
{
    class Position
    {
    public:
        unsigned int d_x;
        unsigned int d_y;
        Position(unsigned int x, unsigned int y);
    };
}

namespace std
{
    using namespace Draught;
    template<> struct less<Position>
    {
        bool operator() (const Position& lhs, const Position& rhs) const
        {
            return lhs.d_x > rhs.d_x || lhs.d_y > rhs.d_y;
        }
    };
}

#endif //DRAUGHT_POSITION_H
