#include "game.h"
game::game() {}
game ::game(int id, std::string title):
    id(id),title(title){}
game::game(const game& g):
    id(g.id),title(g.title){}

int game:: getid()const{
    return id;
}
double game::getpreis()const{
    return preis;
}
void game::set_anzahlgekauft(int n ){
    anzahlgekauft=n;
}
int game::get_anzahlgekauft()const{
    return anzahlgekauft;
}
