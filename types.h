#pragma once

#include "chess.hpp"

using namespace Chess;

#define NAME "Rice 2.0 Dev"
#define AUTHOR "Slender"

#define MAXPLY 64

#define INF_BOUND 30000
#define ISMATE 29000

static inline bool is_capture(Board& board, Move move){
    return !(board.pieceAtB(to(move)) == None);
}