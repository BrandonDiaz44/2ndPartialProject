#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<fstream>

using namespace std;

class Menu3
{
    private:
        string t3;
    public:
        Menu3(string);
        void mitad();
};

class Menu4 : public Menu3
{
    private:
        string t4;
    public:
        Menu4(string,string);
        void mitad2();
};

Menu3::Menu3(string _t3)
{
    t3 = _t3;
}

Menu4::Menu4(string _t3, string _t4) : Menu3(_t3)
{
    t4 = _t4;
}

void Menu3::mitad()
{
    cout<<"Do you want to "<<t3<<endl;
}

void Menu4::mitad2()
{
    mitad();
    cout<<"Type 'Y' if you want to see your answers, "<<t4<<endl;
}