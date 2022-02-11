//
// Created by MAC on 07/02/2022.
//

#ifndef DRAUGHT_PIECE_H
#define DRAUGHT_PIECE_H

#include <iostream>
#include <vector>

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
            const std::string d_pieceId;
            Position* d_pos;
            std::vector<Position*> d_moves;
            PieceType d_type;
        };
}

#endif //DRAUGHT_PIECE_H
