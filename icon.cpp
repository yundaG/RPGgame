#include "icon.h"
#include<iostream>
int ICON::GRID_SIZE = 32;


pair<string,ICON> pairArray[] =
{
    make_pair("player",ICON("player",1,13, 1, 2)),
    make_pair("stone",ICON("stone",4,9, 1, 1)),
    make_pair("fruit",ICON("fruit",10,13, 1, 1)),
    make_pair("satan",ICON("satan",8,12,1,2)),
    make_pair("well",ICON("well",2,10,2,3)),
    make_pair("grave",ICON("grave",6,9,1,1)),
    make_pair("jar",ICON("jar",14,2,1,1)),
    make_pair("wine",ICON("wine",14,0,1,1)),
    make_pair("tree",ICON("tree",0,7,2,2)),
    make_pair("cactus",ICON("cactus",5,13,1,1)),
    make_pair("wood",ICON("wood",3,5,1,1)),
    make_pair("grass",ICON("grass",6,14,1,1))
};

map<string,ICON> ICON::GAME_ICON_SET(pairArray,pairArray+sizeof(pairArray)/sizeof(pairArray[0]));


ICON::ICON(string name, int x, int y, int w, int h){
    this->typeName = name;
    this->srcX = x;
    this->srcY = y;
    this->width = w;
    this->height = h;
}

ICON ICON::findICON(string type){
    map<string,ICON>::iterator kv;
    kv = ICON::GAME_ICON_SET.find(type);
    if (kv==ICON::GAME_ICON_SET.end()){

       cout<<"Error: cannot find ICON"<<endl;
       return ICON();
    }
    else{
        return kv->second;
    }
}
