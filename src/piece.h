//
// Created by MAC on 07/02/2022.
//

#ifndef DRAUGHT_PIECE_H
#define DRAUGHT_PIECE_H

#include <iostream>
#include <vector>
#include "position.h"

namespace Draught
{
    enum class PieceType
    {
        KING, PAWN
    };
    class Piece
    {
        public:
        private:
            const std::string d_pieceId;
            Position d_pos;
            PieceType d_type;
        };
}

#endif //DRAUGHT_PIECE_H
