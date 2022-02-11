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
    public:
        Board(const std::string&  id, unsigned int numSquares);
        static bool isValidNumSquares(unsigned int numSquares);
        static bool isPerfectSquare(unsigned int val);
        void populateBoard(unsigned int numPieces, unsigned int numSquares);
        static bool isDarkSquare(unsigned int count);
    private:
        std::string d_id;
        unsigned int d_numSquares;
        std::map<const Position*, const Piece*> d_pos;
    };
}

#endif //DRAUGHT_BOARD_H
