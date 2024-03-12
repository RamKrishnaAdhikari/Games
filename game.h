#ifndef GAME_H
#define GAME_H
#include<string>
class game
{
public:
    game();
    game(int id, std::string title);
    game(const game& g);
    int getid()const;
    double getpreis()const;
   void  set_anzahlgekauft(int n);
    int get_anzahlgekauft()const;
private:
    int id;
    std::string title;
    double preis;
     int  anzahlgekauft=0;
};

#endif // GAME_H
