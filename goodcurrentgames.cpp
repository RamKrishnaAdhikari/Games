
#include "goodcurrentgames.h"
#include<iostream>

using namespace std;


goodcurrentgames::goodcurrentgames() {}
bool goodcurrentgames::addgame(const game& g){
    for(const auto& gam : games){
        if(gam.getid()==g.getid()){
            return false;
        }
    }
    games.push_back(g);
    return true;
}
bool goodcurrentgames::adduser(const user& u){
    for(const auto& us : users){
        if(us.getname()==u.getname()){
            return false;
        }
    }
    users.push_back(u);
    return true;
}

bool goodcurrentgames::login(const std::string& username,const std::string& password){

    for( auto& u:users){
        if(u.getname()== username){
            if(u.getpassword()==password){
                loggedinuser = &u;
                return true;
            }
        }
    }
    return false;
}
void goodcurrentgames::menu(){
    int choice;

    std::cout<<"Wählen sie optionen aus"<<endl;
        do{
        cout<<"Press 1 for register user"<<endl;
            cout<<"press 2 for list all users"<<endl;
        cout<<"press 3 for list all games"<<endl;
            cout<<"Press 4 for login"<<endl;
        cout<<"Press 5 for logout"<<endl;
            cout<<"Press 6 for quit"<<endl;
        cin>>choice;
            switch(choice){
        case 1: {cout<<"Geben Sie username und password ein"<<endl;
            std::string username;
            std::string password;
            cin>>username>>password;
            user newuser(username,password);
            if(adduser(newuser)){
                cout<<"user was added"<<endl;
            }
            else{
                cout<<"User was not added "<<endl;
            }
            break;
        }
        case 2 : {
            if(loggedinuser != nullptr){
                cout<<"Geben Sie die id des Spiels"<<endl;
                int id;
                cin>>id;
                for( auto& g : games){
                    if(g.getid()==id){
                        if(loggedinuser->getcredit()>g.getpreis()){
                        loggedinuser->adderworbenegames(g);
                            loggedinuser->setcredit(loggedinuser->getcredit()-g.getpreis());
                        g.set_anzahlgekauft(g.get_anzahlgekauft()+1);



                    }
                        else{
                            cout<<"Keine genügende Guthaben"<<endl;
                        }
                    break;

                }

            }
                cout<<"Keine Solche game wurde gefunden "<<endl;


        }
            cout<<"User ist nich eingeloggt"<<endl;
        break;
        }
        case 4 :{ cout<<"Geben sie  benutzername und password"<<endl;
            std::string benutzername;
            std::string pass;
            cin>>benutzername>>pass;
            if(login(benutzername,pass)){
                cout<<"Login war erfolgreich"<<endl;

                cout<<benutzername<<"war erfolgreich angemeldet"<<endl;

            }

            else{
                cout<<"Anmeldung war nicht erfolgreich"<<endl;
            }
            break;

        }

        case 5 :{if(loggedinuser!=nullptr){
                loggedinuser=nullptr;
                cout<<"Erfolgreich logout"<<endl;
            }
            break;
        }

        case 6 : cout<<"Programm is beendet"<<endl;
            break;

        default : cout<<"Ungültige eingabe"<<endl;





        }


    }
        while(choice!=6);

}
