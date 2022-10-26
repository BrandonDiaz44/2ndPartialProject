#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<fstream>

using namespace std;

void lectura13()
{
    ifstream archivo14("ListaDiaria.txt");
    string texto14;

    if(archivo14.fail())
    {
        cout<<"Error to create the file..."<<endl;
    }

    while(!archivo14.eof())
    {
        getline(archivo14,texto14);
        cout<<texto14<<endl;
    }

    archivo14.close();
}

void lectura14()
{
    ifstream archivo15("Completado1.txt");
    string texto15;

    if(archivo15.fail())
    {
        cout<<"Error to create the file..."<<endl;
    }

    while(!archivo15.eof())
    {
        getline(archivo15,texto15);
        cout<<texto15<<endl;
    }

    archivo15.close();
}

void lectura15()
{
    ifstream archivo16("Completado2.txt");
    string texto16;

    if(archivo16.fail())
    {
        cout<<"Error to create the file..."<<endl;
    }

    while(!archivo16.eof())
    {
        getline(archivo16,texto16);
        cout<<texto16<<endl;
    }

    archivo16.close();
}

void lectura16()
{
    ifstream archivo17("Completado3.txt");
    string texto17;

    if(archivo17.fail())
    {
        cout<<"Error to create the file..."<<endl;
    }

    while(!archivo17.eof())
    {
        getline(archivo17,texto17);
        cout<<texto17<<endl;
    }

    archivo17.close();
}

void lectura17()
{
    ifstream archivo18("Thanks.txt");
    string texto18;

    if(archivo18.fail())
    {
        cout<<"Error to create the file..."<<endl;
    }

    while(!archivo18.eof())
    {
        getline(archivo18,texto18);
        cout<<texto18<<endl;
    }

    archivo18.close();
}