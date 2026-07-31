#include "../include/inputbuffer.hpp"
#include <iostream>
#include <string>

using namespace std;

int InputBuffer::DebugConsole()
{
    while (true)
    {
        cout << "ironhold> ";
        string s;
        cin >> s;
        cmd = s;
        setcmd();

        if (s == ".help")
        {
            cout << ".quit       Shut down the world engine\n";
            cout << ".help       Show this message\n";
            cout << ".version    Show engine version\n";
            cout << ".status     Show world status\n";
        }
        else if (s == ".version")
        {
            cout << "Chronicle v0.1 — Ironhold World Engine\n";
        }
        else if (s == ".status")
        {
            cout << "Feature not yet developed\n";
        }
        else if (s == ".quit")
        {
            cout << "Goodbye!\n";
            return 0;
        }
        else
        {
            cout << "Unknown command. Type .help\n";
        }
    }
}