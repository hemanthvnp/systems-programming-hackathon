#include "../include/console.hpp"

#include <iostream>
#include <string>

using namespace std;

Console::Console() : input("")
{
}

void Console::DebugConsole()
{
    while (true)
    {
        cout << "ironhold> ";

        string line;
        getline(cin, line);

        if (line.empty())
            continue;

        if (line == ".help")
        {
            cout << ".quit       Shut down the world engine\n";
            cout << ".help       Show this message\n";
            cout << ".version    Show engine version\n";
            cout << ".status     Show world status\n";
            continue;
        }

        if (line == ".version")
        {
            cout << "Chronicle v0.1 — Ironhold World Engine\n";
            continue;
        }

        if (line == ".status")
        {
            cout << "World: offline\n";
            continue;
        }

        if (line == ".quit")
        {
            cout << "Goodbye!\n";
            return;
        }

        Command cmd;

        if (!parseCommand(line, cmd))
        {
            cout << "Error: " << cmd.getError() << endl;
            continue;
        }

        if (cmd.getType() == "SPAWN_PLAYER")
        {
            Player player;
            player.id = cmd.getId();
            player.username = cmd.getUsername();
            player.email = cmd.getEmail();

            world.spawnPlayer(player);
        }
        else if (cmd.getType() == "LIST_PLAYERS")
        {
            world.listPlayers();
        }
    }
}