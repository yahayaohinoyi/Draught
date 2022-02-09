//
// Created by MAC on 07/02/2022.
//

#ifndef DRAUGHT_PIECE_H
#define DRAUGHT_PIECE_H

#include <iostream>
#include <vector>
//#include "position.h"

class Position;

namespace Draught
{
    class Piece
    {
        public:
            enum class PieceType
            {
                KING, PAWN
            };
        private:
            const std::string pieceId;
            Position* pos;
            std::vector<Position> moves;
            PieceType type;
        };
}

#endif //DRAUGHT_PIECE_H
