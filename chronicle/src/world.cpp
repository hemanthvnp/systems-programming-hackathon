#include "../include/world.hpp"
#include <iostream>

using namespace std;

bool WorldState::playerExists(unsigned int id) const
{
    for (const auto &player : players)
    {
        if (player.id == id)
            return true;
    }

    return false;
}

bool WorldState::spawnPlayer(const Player &player)
{
    if (playerExists(player.id))
    {
        cout << "Error: Player ID already exists.\n";
        return false;
    }

    players.push_back(player);

    cout << "Spawned.\n";
    return true;
}

void WorldState::listPlayers() const
{
    for (const auto &player : players)
    {
        cout << "[" << player.id << "] "
             << player.username
             << " <" << player.email << ">\n";
    }

    cout << players.size() << " entities.\n";
}