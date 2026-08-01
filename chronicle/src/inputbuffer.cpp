#include "../include/inputbuffer.hpp"

#include <iostream>

using namespace std;

InputBuffer::InputBuffer(string c)
{
    cmd = c;
    cmd_history_length = 0;
}

void InputBuffer::getcmd()
{
    cout << cmd << endl;
}

void InputBuffer::setcmd()
{
    cmd_history_length++;
}

InputBuffer::~InputBuffer()
{
}