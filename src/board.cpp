//
// Created by MAC on 07/02/2022.
//

#include "board.h"
#include <sstream>
#include <cmath>

namespace Draught
{
    Board::Board(std::string id, unsigned int numSquares)
    : d_id(id), d_numSquares(numSquares)
    {
        this->buildBoard(numSquares);
    }

    void Board::buildBoard(unsigned int numSquares)
    {
        for (size_t i = 0; i < sqrt(numSquares); i += 2)
        {
            for (size_t j = 0; j < sqrt(numSquares); j += 2)
            {
                PieceColor color;
                if (i < sqrt(numSquares))
                {
                    color = PieceColor::WHITE;
                } else {
                    color = PieceColor::BLACK;
                }
                Position newPos(i, j);
                PieceType type = PieceType::PAWN;
                Piece newPiece("debkfbd", newPos, type, color);
                d_positionToPiece.insert(std::pair<Position, Piece>(newPos, newPiece));
            }
        }
    }

    std::vector<std::string> Board::moves()
    {
        return d_moves;
    }

    std::map<Position, Piece> Board::positionToPiece()
    {
        return d_positionToPiece;
    }

    unsigned int Board::numSquares()
    {
        return d_numSquares;
    }

    bool Board::isValidPosition(Position pos)
    {
        return true;
    }

    stringstream Board::visualize()
    {
        stringstream ss;
        std:map<Position, Piece>::iterator it;
        for (it = d_positionToPiece.begin(); it != d_positionToPiece.end(); ++it)
        {
            cout << (it->first).d_x << " Postion Gives Value " << (it->first).d_y << std::endl;
            ss << (it->first).d_x << " Postion Gives Value " << (it->first).d_y << std::endl;
        }
        return ss;
    }
}
