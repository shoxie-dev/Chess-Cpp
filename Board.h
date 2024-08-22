#ifndef _BOARD_
#define _BOARD_

#include "Piece.h"

class Board{
    public:
        Piece* squares[8][8]{nullptr};
        Piece* squares_t[8][8]{nullptr};

        Board();
        void printBoard();
        void movePiece(int startX, int startY, int endX, int endY);
        bool isCheck(char colour) const;
        bool isCheckmate(char colour) const;

        std::pair <int,int> inputCoords() const{
            std::pair <int, int> XY;
            std::cin >> XY.first;
            std::cin >> XY.second;
            return XY;
        }

        char getSymbolB(int x,int y){// B is board
            return squares[x][y]->getSymbol();
        }
        char getColourB(int x,int y){
            return squares[x][y]->getColour();
        }

        Piece* getPiece(int x, int y){
            return squares[x][y];
        }
        //virtual bool isValidPiece(int x, int y, char colour_param) override;
};


#endif