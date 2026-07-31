#include "../include/inputbuffer.hpp"
using namespace std;
class InputBuffer{
    private:
        string cmd;
        int cmd_history_length;
    public:
        InputBuffer(string c){
            cmd = c;
            cmd_history_length=0;
        }
        void getcmd(){
            return cmd_history_length;
        }
        void setcmd(){
            cmd_history_length+=1
        }
        ~InputBuffer(){
            cmd_history_length=0;
        }
};