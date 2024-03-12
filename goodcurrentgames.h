#ifndef GOODCURRENTGAMES_H
#define GOODCURRENTGAMES_H
#include"user.h"
#include"game.h"
#include<vector>

class goodcurrentgames
{
public:
    goodcurrentgames();
    std::vector<user> users;
    std::vector<game>games;
    bool addgame(const game& g);
    bool adduser(const user& u);
    bool login(const std::string& username,const std::string& password);
    void menu();
private:
    user* loggedinuser;
};

#endif // GOODCURRENTGAMES_H
