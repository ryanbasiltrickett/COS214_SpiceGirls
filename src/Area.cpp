#include "Area.h"

using namespace std;

Area::Area(string areaName) {
    this->areaName = areaName;
}

std::string Area::getAreaName() const {
    return areaName;
}