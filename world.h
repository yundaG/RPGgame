#ifndef WORLD_H
#define WORLD_H
#include "rpgobj.h"
#include <vector>
#include <string>
#include <QPainter>
#include "player.h"

class World : public Player
{
public:
    World(){}
    ~World(){}
    void initWorld(string mapFile);
        //输入的文件中定义了初始状态下游戏世界有哪些对象，出生点在哪
        /*e.g.
           player 5 5
           stone 3 3
           fruit 7 8
         */
    void show(QPainter * painter);
        //显示游戏世界所有对象
    void handlePlayerMove(int direction, int steps);
        //假定只有一个玩家
    void handlePlayerMove1(int direction, int steps);
        //假定只有一个玩家
    int get_x(){return _player.getPosX();}
    int get_y(){return _player.getPosY();}
    int getx1(){return player1.getPosX();}
    int gety1(){return player1.getPosY();}

private:
    vector<RPGObj> _objs;
    Player _player;
    Player player1;
};

#endif // WORLD_H
