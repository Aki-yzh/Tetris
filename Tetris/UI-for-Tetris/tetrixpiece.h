#ifndef TETRIXPIECE_H
#define TETRIXPIECE_H

enum TetrixShape { NoShape, shape1, shape2, shape3, shape4, shape5,
                   shape6, shape7 };//Noshape用于初始化

class TetrixPiece
{
public:

  static constexpr int stddots[8][4][2] = {
        { { 0, 0 },   { 0, 0 },   { 0, 0 },   { 0, 0 } },//无形状
        { { 0, -1 },  { 0, 0 },   { -1, 0 },  { -1, 1 } },//闪电形状
        { { 0, -1 },  { 0, 0 },   { 1, 0 },   { 1, 1 } },//反闪电形状
        { { 0, -1 },  { 0, 0 },   { 0, 1 },   { 0, 2 } },//长条
        { { -1, 0 },  { 0, 0 },   { 1, 0 },   { 0, 1 } },//山形状
        { { 0, 0 },   { 1, 0 },   { 0, 1 },   { 1, 1 } },//田
        { { -1, -1 }, { 0, -1 },  { 0, 0 },   { 0, 1 } },//反7
        { { 1, -1 },  { 0, -1 },  { 0, 0 },   { 0, 1 } }//7字形
    };//各种形状对应的坐标
    TetrixShape pieceShape;
    int dots[4][2];

    int minX() const;
    int maxX() const;
    int minY() const;
    int maxY() const;
    int x(int index) const { return dots[index][0]; }
    int y(int index) const { return dots[index][1]; }
    void setRandomShape();
    void setShape(TetrixShape shape);
    TetrixPiece(){setShape(NoShape);}//构造函数
    TetrixShape shape() const { return pieceShape; }//显示形状
    TetrixPiece rotatedLeft() const;
    TetrixPiece rotatedRight() const;


};

#endif
