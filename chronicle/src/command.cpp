#include "../include/command.hpp"
#include <sstream>
using namespace std;

Command::Command()
{
    type = "";
    id = 0;
    username = "";
    email = "";
    error = "";
}
void Command::setType(const string &t)
{
    type = t;
}

void Command::setId(unsigned int i)
{
    id = i;
}

void Command::setUsername(const string &u)
{
    username = u;
}

void Command::setEmail(const string &e)
{
    email = e;
}

void Command::setError(const string &e)
{
    error = e;
}

string Command::getType() const
{
    return type;
}

unsigned int Command::getId() const
{
    return id;
}

string Command::getUsername() const
{
    return username;
}

string Command::getEmail() const
{
    return email;
}

string Command::getError() const
{
    return error;
}

bool parseCommand(const string &input, Command &cmd)
{
    string word1, word2;

    stringstream ss(input);

    ss >> word1 >> word2;

    if (word1 == "SPAWN" && word2 == "PLAYER")
    {
        int id;

        if (!(ss >> id))
        {
            cmd.setError("Missing player id.");
            return false;
        }

        if (id <= 0)
        {
            cmd.setError("ID must be positive.");
            return false;
        }

        string username, email;

        if (!(ss >> username >> email))
        {
            cmd.setError("Invalid SPAWN syntax.");
            return false;
        }

        if (username.length() > 32)
        {
            cmd.setError("username too long (max 32 chars).");
            return false;
        }

        if (email.length() > 255)
        {
            cmd.setError("email too long (max 255 chars).");
            return false;
        }

        cmd.setType("SPAWN_PLAYER");
        cmd.setId(id);
        cmd.setUsername(username);
        cmd.setEmail(email);

        return true;
    }

    if (word1 == "LIST" && word2 == "PLAYERS")
    {
        cmd.setType("LIST_PLAYERS");
        return true;
    }

    cmd.setError("Unknown command.");
    return false;
}