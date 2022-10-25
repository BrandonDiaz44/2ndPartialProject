#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<fstream>

using namespace std;

class Menu
{
    private:
        string t1;
    public:
        Menu(string);
        void principio();
};

class Menu2 : public Menu
{
    private:
        string t2;
    public:
        Menu2(string,string);
        void principio2();
};

Menu::Menu(string _t1)
{
    t1 = _t1;
}

Menu2::Menu2(string _t1, string _t2) : Menu(_t1)
{
    t2 = _t2;
}

void Menu::principio()
{
    cout<<"Are you ready to "<<t1<<" with me?"<<"\n"<<endl;
}

void Menu2::principio2()
{
    principio();
    cout<<"Please, answer this "<<t2<<" your fitness plan:"<<"\n"<<endl;
}



