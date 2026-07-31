#include "../include/inputbuffer.hpp"
#include <iostream>

InputBuffer::InputBuffer(std::string c)
{
    cmd = c;
    cmd_history_length = 0;
}

void InputBuffer::getcmd()
{
    std::cout << "Current command: " << cmd << std::endl;
}

void InputBuffer::setcmd()
{
    cmd_history_length++;
}

InputBuffer::~InputBuffer()
{
}