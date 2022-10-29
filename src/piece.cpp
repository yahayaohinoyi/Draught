//
// Created by MAC on 07/02/2022.
//

#include "piece.h"

namespace Draught
{
    Piece::Piece(std::string pieceId, Position pos, PieceType type, PieceColor color)
    : d_pieceId(pieceId), d_pos(pos), d_type(type), d_color(color)
    {}

    Position Piece::position()
    {
        return d_pos;
    }

    PieceType Piece::type()
    {
        return d_type;
    }

    std::string Piece::pieceId()
    {
        return d_pieceId;
    }
}
