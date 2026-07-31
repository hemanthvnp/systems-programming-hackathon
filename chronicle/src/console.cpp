#include "../include/console.hpp"
using namespace std;
int InputBuffer::DebugConsole(){
    int cmd_l = 0
    while(1){
        cout<<"ironhold>";
        string s;
        cin>>s;
        if(s==".help"){
            cout<<".quit       Shut down the world engine\n.help       Show this message\n.version    Show engine version\n.status     Show world status\n";
            setcmd();
        }
        else if(s==".version"){
            cout<<"Chronicle v0.1 — Ironhold World Engine\n";
            setcmd();
        }
        else if(s==".quit"){
            setcmd();
            return 0;
        }
        else if(s==".status"){
            setcmd();
            cout<<"Feature not yet developed\n";
        }
        else{
            cout<<"Error\n";
        }
        
    }
}