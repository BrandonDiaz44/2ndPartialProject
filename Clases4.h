#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<fstream>

using namespace std;

class Menu5
{
    private:
        string t5;
    public:
        Menu5(string);
        void mensajes();
};

class Menu6 : public Menu5
{
    private:
        string t6;
    public:
        Menu6(string, string);
        void mensajesfunciona();
};

Menu5::Menu5(string _t5)
{
    t5 = _t5;
}

void Menu5::mensajes()
{
    cout<<"Now, I have all your answers and information to creat your "<<t5<<"\n"<<endl;
}

Menu6::Menu6(string _t5, string _t6) : Menu5(_t5)
{
    t6 = _t6;
}

void Menu6::mensajesfunciona()
{
    mensajes();
    cout<<"From 1 to 10 tell me in how many months do you want changes? "<<t6<<"\n"<<endl;
}