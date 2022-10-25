#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<fstream>

using namespace std;

class Menu7
{
    private:
        string t7;
    public:
        Menu7(string);
        virtual void mensajes2();
};

class Menu8 : public Menu7
{
    private:
        string t8;
    public:
        Menu8(string, string);
        void mensajes2();
};

Menu7::Menu7(string _t7)
{
    t7 = _t7;
}

void Menu7::mensajes2()
{
    cout<<"Are you ready to see your diet and training"<<t7<<endl;
}

Menu8::Menu8(string _t7, string _t8) : Menu7(_t7)
{
    t8 = _t8;
}

void Menu8::mensajes2()
{
    Menu7::mensajes2();
    cout<<"Type 'Y' if you are ready, and 'N' if you are not ready to see your diet and "<<t8<<endl;
}