#ifndef CONSOLE_HPP
#define CONSOLE_HPP

#include <iostream>
#include <string>
#include "inputbuffer.hpp"
#include "world.hpp"
#include "command.hpp"

class Console
{
private:
    InputBuffer input;
    WorldState world;

public:
    Console();
    void DebugConsole();
};

#endif