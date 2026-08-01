#ifndef COMMAND_HPP
#define COMMAND_HPP

#include <string>

class Command
{
private:
    std::string type;
    unsigned int id;
    std::string username;
    std::string email;
    std::string error;

public:
    Command();
    void setType(const std::string &t);
    void setId(unsigned int i);
    void setUsername(const std::string &u);
    void setEmail(const std::string &e);
    void setError(const std::string &e);
    std::string getType() const;
    unsigned int getId() const;
    std::string getUsername() const;
    std::string getEmail() const;
    std::string getError() const;
};

bool parseCommand(const std::string &input, Command &cmd);

#endif