#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<fstream>

using namespace std;

void lectura()
{
    ifstream archivo2("LogoProyecto.txt");
    string texto2;

    if(archivo2.fail())
    {
        cout<<"Error to create the file..."<<endl;
    }

    while(!archivo2.eof())
    {
        getline(archivo2,texto2);
        cout<<texto2<<endl;
    }

    archivo2.close();
}