#include "user.h"

user::user() {}
user::user(const std::string& username,const std::string& password):
    username(username),password(password){}
user::user(const user& u):
    username(u.username),password(u.password){}
std::string user:: getname()const{
    return username;
}
std::string user::getpassword()const{
    return password;
}

user::user(const std::string& username,const std::string& password,double credit):
    username(username),password(password),credit(credit){}

void user::adderworbenegames(const game& g){
    erworbenegames.push_back(g);
}
void user::setcredit(double c){
    credit=c;
}
double user::getcredit()const{
    return credit;
}
