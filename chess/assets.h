#ifndef ASSETS_H
#define ASSETS_H
#include<QPixmap>
#include<vector>
enum avatars
{
    pawn_white,
    knight_white,
    bishop_white,
    queen_white,
    king_white,
    knight_black,
    bishop_black,
    queen_black,
    king_black,
    pawn_black,
    rook_black,
    rook_white,
    empty
};
struct avatar
{

    std::vector<QPixmap>collection_of_avatars;
};
#endif // ASSETS_H
