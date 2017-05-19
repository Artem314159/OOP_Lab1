#include "isos_triang.h"
#include "math.h"

void IsosTriang::setSide(double side)
{ this->side = side; }
void IsosTriang::setAngle(double angle)
{ this->angle = angle; }
double IsosTriang::getSide()
{ return this->side; }
double IsosTriang::getAngle()
{ return this->angle; }
void IsosTriang::changeSize(double k)
{ this->side *= k; }
double IsosTriang::findHeight()
{ return this->side * sin((180 - 2 * this->angle) * M_PI / 180); }
double IsosTriang::findBHM()
{ return this->side * sin(this->angle * M_PI / 180); }
double IsosTriang::findBisec()
{ return (2 * this->side * IsosTriang::findHeight() * cos(this->angle * M_PI / (2* 180)))/(this->side + IsosTriang::findHeight()); }
double IsosTriang::findStem()
{ return 2 * this->side * cos(this->angle * M_PI / 180); }
