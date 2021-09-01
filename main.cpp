#include <iostream>
using namespace std;



class User{
protected:
    string userName;
    string password;
private: // NO HEREDARÁ A LA CLASE ADMIND
    string creditCard;
    short int cvc;
    // fecha de caducidad probablemente de una clase fecha y agrregación
public:
    User() : Persona(){ 
        userName = "";
        password = "";
    }
    User(string name, int age, string userName, string password) : Persona(name, age){
        this->userName = userName;
        this->password = password;
    }

    // int typeUser() override{
    //     return 0; // 0 is for normal user, 1 is for admin
    // }
// - - - - - - - SETTERS Y GETTERS - - - - - - -
    string getUserName(){
        return this->userName;
    }
    void setUserName(string userName){
        this->userName = userName;
    }
    string getPassword(){
        return this->password;
    }
    void setPassword(string password){
        this->password = password;
    }
    string getCreditCard(){
        return this->creditCard;
    }
    void setCreditCard(){
        this->creditCard = creditCard;
    }
    short int getCVC(){
        return this->cvc;
    }
    void setCVC(short int cvc){
        this->cvc = cvc;
    }

    // friend ostream &operator >>(istream &write, User &user){
    //     cout << "Write your full name >> "; 
    //     write >> user.name;
    //     cout << "Write the password >> ";
    //     write >> user.password;
    //     cout << "";
    // }
};

class Admin : public User{
    Admin(string name, int age, string userName, string password) : User(name, age, userName, password){}

    // int typeUser() override{
    //     return 1;
    // }
};

class Data {};

int main(){
    User user1;
    cin >> user1;
    cout << user1.getUserName() << endl;
}