#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<fstream>

using namespace std;

void lectura2()
{
    ifstream archivo3("RespuestasProyecto.txt");
    string texto3;

    if(archivo3.fail())
    {
        cout<<"Error to create the file..."<<endl;
    }

    while(!archivo3.eof())
    {
        getline(archivo3,texto3);
        cout<<texto3<<endl;
    }

    archivo3.close();
}

void escritura()
{
    ofstream archivo;
    string texto;

    archivo.open("RespuestasProyecto.txt",ios::app);

    if(archivo.fail())
    {
        cout<<"Error to create the file..."<<endl;
    }
    fflush(stdin);
    cout<<"Answer:"<<endl;
    getline(cin,texto);

    archivo<<texto<<endl;
    archivo.close();
    
}