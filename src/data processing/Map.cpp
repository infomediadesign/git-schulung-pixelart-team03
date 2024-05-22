//
// Created by keanu on 5/22/2024.
//

#include "Map.h"
#include "TilesonUtilities.h"

Map::Map(std::string p_filename)
{
    map = *tileson.parse(p_filename);
    std::vector<tson::Layer> layer = new std::vector<tson::Layer>(map.getLayers());
    for (auto &layer : map.getLayers())
    {

    }
}
