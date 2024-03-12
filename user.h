#ifndef USER_H
#define USER_H
#include"game.h"
#include<vector>
class user
{
public:
    user();
    user(const std::string& username,const std::string& password);
    user(const user& u);
    std::string getname()const;
    std::string getpassword()const;
    user(const std::string& username, const std::string& password, double credit);
    void adderworbenegames(const game& g);
    void setcredit(double c);
    double getcredit()const;
private:
    std::string username;
    std::string password;
    std::vector<game> erworbenegames;
    double credit;

};

#endif // USER_H
