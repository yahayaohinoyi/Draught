//
// Created by MAC on 07/02/2022.
//

#include "board.h"
#include <utility>
#include <cmath>

namespace Draught
{
    Board::Board(const std::string& id, unsigned int numSquares)
            : d_id(id), d_numSquares(numSquares)
    {
        if (!isValidNumSquares(numSquares))
        {
            throw std::invalid_argument("Draught must be played on a squared board and the root must be divisible by 2");
        }

    }

    bool Board::isValidNumSquares(unsigned int numSquares)
    {
        return isPerfectSquare(numSquares) && (int)sqrt(numSquares) % 2 == 0;
    }

    bool Board::isPerfectSquare(unsigned int val)
    {
        return ceil((double)sqrt(val)) == floor((double)sqrt(val));
    }

    void Board::populateBoard(unsigned int numPieces, unsigned int numSquares)
    {
        const int root = (int)sqrt(numSquares);
        const unsigned int piecePerColor = numPieces / 2;

        int count = 0;
        for (size_t i = 0; i < root; ++i)
        {
            for (size_t j = 0; j < root; ++j)
            {
                if (isDarkSquare(count))
                {
                    auto* piece = new Piece();
                    d_pos.insert(std::make_pair(new Draught::Position(std::to_string(i),
                                                                      std::to_string(j), *piece),
                                                   piece));
                }
            }
        }
    }

    bool Board::isDarkSquare(unsigned int count)
    {
        return count % 2 == 0;
    }

}
