#pragma once

#include "Components.h"

class PositionComponent : public Component{
private:
  int xpos;
  int ypos;

public:
  PositionComponent(){
    xpos = 0;
    ypos = 0;
  }
  PositionComponent(int x, int y){
    xpos = x;
    ypos = y;
  }
  int x() {return xpos;}
  int y() {return ypos;}
  void update() override{
    xpos++;
    ypos++;
  }
  void x(int x) {xpos = x;}
  void y(int y) {ypos = y;}
  void setPos(int x, int y){
    xpos = x;
    ypos = y;
  }

};
