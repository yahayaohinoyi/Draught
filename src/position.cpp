//
// Created by MAC on 07/02/2022.
//

#include "position.h"

#include <utility>

namespace Draught
{
    Position::Position(std::string row, std::string col, Piece  p)
    : d_row(std::move(row)), d_col(std::move(col)), d_p(std::move(p))
    {}
}
