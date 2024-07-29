#pragma once

#include <string>
#include "component.h"
#include "bus.h"

class HexView: public Component
{
public:
    HexView(std::string id, Bus* bus);
    ~HexView();
    void draw() override;
    void drawMemory();
private:
    //sizes
    std::string m_id;
    Bus* m_bus;
};