#include <iostream>
#include <string>
class InputBuffer{
    private:
        std::string cmd;
        int cmd_history_length;
    public:
        InputBuffer(std::string c);
        void getcmd();
        void setcmd();
        int DebugConsole();
        ~InputBuffer();

};