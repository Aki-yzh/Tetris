#include "tetrixpiece.h"

#include <QtCore>

int TetrixPiece::minX() const{
    int min = dots[0][0];
    for (int i = 1; i < 4; i++){
        min = qMin(min, dots[i][0]);}
    return min;
}//方块占最小的x
int TetrixPiece::minY() const{
    int min = dots[0][1];
    for (int i = 1; i < 4; i++){
        min = qMin(min, dots[i][1]);}
    return min;
}
//方块占最小的y
int TetrixPiece::maxX() const{
    int max = dots[0][0];
    for (int i = 1; i < 4; i++){
        max = qMax(max, dots[i][0]);}
    return max;
}//方块占最大的x

int TetrixPiece::maxY() const{
    int max = dots[0][1];
    for (int i = 1; i < 4; i++){
        max = qMax(max, dots[i][1]);}
    return max;
}//方块占最大的y


void TetrixPiece::setShape(TetrixShape shape){
    for (int i = 0; i < 4 ; i++) {
        for (int j = 0; j < 2; j++)
          {  dots[i][j] = stddots[shape][i][j];}
    }
    pieceShape = shape;

}//生成指定形状的方块

void TetrixPiece::setRandomShape(){
    setShape(TetrixShape(QRandomGenerator::global()->bounded(7) + 1));//0～7范围内随机生成一个整数
}


TetrixPiece TetrixPiece::rotatedLeft() const
{
    if (pieceShape == shape5){
        return *this;}//田旋转无效
else{
    TetrixPiece next;
    next.pieceShape = pieceShape;
    for (int i = 0; i < 4; i++) {
        next.dots[i][0]=y(i);
        next.dots[i][1]=-x(i);

    }
    return next;}
}//左旋

TetrixPiece TetrixPiece::rotatedRight() const
{
    if (pieceShape == shape5)
       { return *this;}

    TetrixPiece next;
    next.pieceShape = pieceShape;
    for (int i = 0; i < 4; i++) {
       next.dots[i][0]=-y(i);
        next.dots[i][1]=x(i);
    }

    return next;
}//右旋,原理同上


