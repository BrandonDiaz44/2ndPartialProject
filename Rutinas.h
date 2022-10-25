#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<fstream>

using namespace std;

void lectura3()
{
    ifstream archivo4("Rutina1.txt");
    string texto4;

    if(archivo4.fail())
    {
        cout<<"Error to create the file..."<<endl;
    }

    while(!archivo4.eof())
    {
        getline(archivo4,texto4);
        cout<<texto4<<endl;
    }

    archivo4.close();
}

void lectura4()
{
    ifstream archivo5("Rutina2.txt");
    string texto5;

    if(archivo5.fail())
    {
        cout<<"Error to create the file..."<<endl;
    }

    while(!archivo5.eof())
    {
        getline(archivo5,texto5);
        cout<<texto5<<endl;
    }

    archivo5.close();
}

void lectura5()
{
    ifstream archivo6("Rutina3.txt");
    string texto6;

    if(archivo6.fail())
    {
        cout<<"Error to create the file..."<<endl;
    }

    while(!archivo6.eof())
    {
        getline(archivo6,texto6);
        cout<<texto6<<endl;
    }

    archivo6.close();
}

void lectura6()
{
    ifstream archivo7("Rutina4.txt");
    string texto7;

    if(archivo7.fail())
    {
        cout<<"Error to create the file..."<<endl;
    }

    while(!archivo7.eof())
    {
        getline(archivo7,texto7);
        cout<<texto7<<endl;
    }

    archivo7.close();
}

void lectura7()
{
    ifstream archivo8("Rutina5.txt");
    string texto8;

    if(archivo8.fail())
    {
        cout<<"Error to create the file..."<<endl;
    }

    while(!archivo8.eof())
    {
        getline(archivo8,texto8);
        cout<<texto8<<endl;
    }

    archivo8.close();
}

void lectura8()
{
    ifstream archivo9("Rutina6.txt");
    string texto9;

    if(archivo9.fail())
    {
        cout<<"Error to create the file..."<<endl;
    }

    while(!archivo9.eof())
    {
        getline(archivo9,texto9);
        cout<<texto9<<endl;
    }

    archivo9.close();
}

void lectura9()
{
    ifstream archivo10("Rutina7.txt");
    string texto10;

    if(archivo10.fail())
    {
        cout<<"Error to create the file..."<<endl;
    }

    while(!archivo10.eof())
    {
        getline(archivo10,texto10);
        cout<<texto10<<endl;
    }

    archivo10.close();
}

void lectura10()
{
    ifstream archivo11("Rutina8.txt");
    string texto11;

    if(archivo11.fail())
    {
        cout<<"Error to create the file..."<<endl;
    }

    while(!archivo11.eof())
    {
        getline(archivo11,texto11);
        cout<<texto11<<endl;
    }

    archivo11.close();
}

void lectura11()
{
    ifstream archivo12("Rutina9.txt");
    string texto12;

    if(archivo12.fail())
    {
        cout<<"Error to create the file..."<<endl;
    }

    while(!archivo12.eof())
    {
        getline(archivo12,texto12);
        cout<<texto12<<endl;
    }

    archivo12.close();
}

void lectura12()
{
    ifstream archivo13("Rutina10.txt");
    string texto13;

    if(archivo13.fail())
    {
        cout<<"Error to create the file..."<<endl;
    }

    while(!archivo13.eof())
    {
        getline(archivo13,texto13);
        cout<<texto13<<endl;
    }

    archivo13.close();
}