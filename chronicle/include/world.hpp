#ifndef WORLD_HPP
#define WORLD_HPP

#include <vector>
#include <string>
#include "player.hpp"

class WorldState
{
private:
    std::vector<Player> players;

public:
    bool spawnPlayer(const Player& player);
    void listPlayers() const;
    bool playerExists(unsigned int id) const;
};

#endif