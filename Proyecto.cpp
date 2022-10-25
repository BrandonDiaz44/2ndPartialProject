#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<fstream>
#include "Respuestas.h"
#include "Logo.h"
#include "Clases.h"
#include "Clases2.h"
#include "Clases3.h"
#include "Clases4.h"
#include "Rutinas.h"

using namespace std;

int main()
{
    cout<<"\n"<<endl;
    lectura();
    char y;
    int z;
    char a;

    cout<<"\n"<<endl;
    Menu2 m2("transform into a Greek god","questions to give you");

    m2.principio2();

    cout<<"1. What is your objective, or your body to pursue?"<<endl;
    cout<<"2. Have you done any sport? If your answer is yes, tell me what kind of sports do you play?"<<endl;
    cout<<"3. How many hours do you have in your day to exercise?"<<endl;
    cout<<"4. Give me your history of injuries if you have some."<<endl;
    cout<<"5. Give me a list of your diseases."<<endl;
    cout<<"6. Give me the list of the foods you are allergic to."<<endl;
    cout<<"7. How old are you?"<<endl;
    cout<<"8. What is your weight?"<<endl;
    cout<<"9. How tall are you?"<<endl;
    cout<<"10. What is your fat percentage?"<<endl;
    cout<<"11. What is your water percentage?"<<endl;
    cout<<"12. What food do not you like?"<<endl;
    cout<<"13. What is your favorite food?"<<endl;
    cout<<"14. Do you want to take supplements? Like creatine, amino acids, protein, etc."<<endl;
    cout<<"\n"<<endl;
    cout<<"15. Click this option if you want to finish with the questions section...."<<endl;
    cout<<"\n"<<endl;

    int x;

    do
    {
        cin>>x;

        switch(x)
        {
            case 1:
            escritura();
            cout<<"Thanks for your answer!"<<endl;
            break;

            case 2:
            escritura();
            cout<<"Thanks for your answer!"<<endl;
            break;

            case 3:
            escritura();
            cout<<"Thanks for your answer!"<<endl;
            break;

            case 4:
            escritura();
            cout<<"Thanks for your answer!"<<endl;
            break;

            case 5:
            escritura();
            cout<<"Thanks for your answer!"<<endl;
            break;

            case 6:
            escritura();
            cout<<"Thanks for your answer!"<<endl;
            break;

            case 7:
            escritura();
            cout<<"Thanks for your answer!"<<endl;
            break;

            case 8:
            escritura();
            cout<<"Thanks for your answer!"<<endl;
            break;

            case 9:
            escritura();
            cout<<"Thanks for your answer!"<<endl;
            break;

            case 10:
            escritura();
            cout<<"Thanks for your answer!"<<endl;
            break;

            case 11:
            escritura();
            cout<<"Thanks for your answer!"<<endl;
            break;

            case 12:
            escritura();
            cout<<"Thanks for your answer!"<<endl;
            break;

            case 13:
            escritura();
            cout<<"Thanks for your answer!"<<endl;
            break;

            case 14:
            escritura();
            cout<<"Thanks for your answer!"<<endl;
            break;

            case 15:
            cout<<"\n"<<endl;
            x = 0;
            break;

            default:
            cout<<"Please, put a correct number."<<endl;
        }
    } 

    while(x != 0);
    {
        cout<<"This is the end of the questions section...."<<endl;
    }

    cout<<"\n"<<endl;
    Menu4 m4("see your answers?","and 'N' if you don't want to.");
    m4.mitad2();
    cout<<"\n"<<endl;

    do
    {
        cin>>y;

        switch(y)
        {
            case 'Y':
            lectura2();
            y = 'B';
            break;

            case 'N':
            y = 'B';
            break;

            default:
            cout<<"Please, put a correct letter."<<endl;
        }
    }

    while(y != 'B');
    {
        cout<<"Perfect."<<endl;
    }

    cout<<"\n"<<endl;
    Menu6 m6("diet and training.","1 is one month and 10 is ten months.");
    m6.mensajesfunciona();

    do
    {
        cin>>z;
        try
        {
            z;
            if(z>10)
                throw "The value that you put is not in the legal range.";
            else if(z<1)
                throw "The value that you put is not in the legal range.";
        } catch (const char *error)
        {
            cout<<"Error: "<<error<<endl;
        }
    }
    while(z<1 || z>10);
    {
        cout<<"Perfect."<<endl;
    }

    Menu7 *vector2[0];
    vector2[0] = new Menu8("?","training.");
    vector2[0]->mensajes2();
    cout<<"\n"<<endl;

    do
    {
        cin>>a;

        switch(a)
    {
        case 'Y':
        if(z==1)
        {
            lectura3();
            a = 'B';
        }
        else if(z==2)
        {
            lectura4();
            a = 'B';
        }
        else if(z==3)
        {
            lectura5();
            a = 'B';
        }
        else if(z==4)
        {
            lectura6();
            a = 'B';
        }
        else if(z==5)
        {
            lectura7();
            a = 'B';
        }
        else if(z==6)
        {
            lectura8();
            a = 'B';
        }
        else if(z==7)
        {
            lectura9();
            a = 'B';
        }
        else if(z==8)
        {
            lectura10();
            a = 'B';
        }
        else if(z==9)
        {
            lectura11();
            a = 'B';
        }
        else if(z==10)
        {
            lectura12();
            a = 'B';
        }
        break;

        case 'N':
        a = 'B';
        break;

        default:
        cout<<"Please, put a correct letter."<<endl;
    }
    }
    while(a != 'B');
    {
        cout<<"Perfect."<<endl;
    }


}