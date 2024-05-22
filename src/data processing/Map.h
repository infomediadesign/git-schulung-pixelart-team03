//
// Created by keanu on 5/22/2024.
//

#ifndef RAYLIBSTARTER_MAP_H
#define RAYLIBSTARTER_MAP_H


#include <vector>
#include "../tileson.h"


class Map
{
public:
    Map(std::string p_filename);
private:
    Map() = delete;
protected:
    tson::Map& map;
    std::vector<tson::Layer> layers;
    std::map<int, tson::Object> objects;

};


#endif //RAYLIBSTARTER_MAP_H
