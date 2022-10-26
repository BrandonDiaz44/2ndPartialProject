#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<fstream>
#include<vector>
#include<pthread.h>
#include<windows.h>
#include<map>
#include "Respuestas.h"
#include "Logo.h"
#include "Clases.h"
#include "Clases2.h"
#include "Clases3.h"
#include "Clases4.h"
#include "Rutinas.h"
#include "Hilos.h"
#include "Daily.h"

using namespace std;

int main()
{
    cout<<"\n"<<endl;
    lectura();
    char y;
    int z;
    char a;
    char b;
    int r;
    int aux;
    int aux2;
    int d;
    int e;
    pthread_t my_thread; 
    int h;

    vector <string> vector1;
    vector <string> vector3;

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
            pthread_create(&my_thread,NULL,&Cargar_plan_fitness,NULL );
            pthread_join(my_thread,(void**)&h);
            lectura3();
            a = 'B';
        }
        else if(z==2)
        {
            pthread_create(&my_thread,NULL,&Cargar_plan_fitness,NULL );
            pthread_join(my_thread,(void**)&h);
            lectura4();
            a = 'B';
        }
        else if(z==3)
        {
            pthread_create(&my_thread,NULL,&Cargar_plan_fitness,NULL );
            pthread_join(my_thread,(void**)&h);
            lectura5();
            a = 'B';
        }
        else if(z==4)
        {
            pthread_create(&my_thread,NULL,&Cargar_plan_fitness,NULL );
            pthread_join(my_thread,(void**)&h);
            lectura6();
            a = 'B';
        }
        else if(z==5)
        {
            pthread_create(&my_thread,NULL,&Cargar_plan_fitness,NULL );
            pthread_join(my_thread,(void**)&h);
            lectura7();
            a = 'B';
        }
        else if(z==6)
        {
            pthread_create(&my_thread,NULL,&Cargar_plan_fitness,NULL );
            pthread_join(my_thread,(void**)&h);
            lectura8();
            a = 'B';
        }
        else if(z==7)
        {
            pthread_create(&my_thread,NULL,&Cargar_plan_fitness,NULL );
            pthread_join(my_thread,(void**)&h);
            lectura9();
            a = 'B';
        }
        else if(z==8)
        {
            pthread_create(&my_thread,NULL,&Cargar_plan_fitness,NULL );
            pthread_join(my_thread,(void**)&h);
            lectura10();
            a = 'B';
        }
        else if(z==9)
        {
            pthread_create(&my_thread,NULL,&Cargar_plan_fitness,NULL );
            pthread_join(my_thread,(void**)&h);
            lectura11();
            a = 'B';
        }
        else if(z==10)
        {
            pthread_create(&my_thread,NULL,&Cargar_plan_fitness,NULL );
            pthread_join(my_thread,(void**)&h);
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

    cout<<"\n";

    vector1.push_back("fitness plan.");
    vector1.push_back("you your");
    vector1.push_back("I already give");
    vector1.push_back("Now that");

    for (auto palabra = vector1.rbegin();palabra != vector1.rend(); palabra++)
    {
        cout<<*palabra<<" ";
    }

    cout<<"\n";

    vector3.push_back("you are ready.");
    vector3.push_back("Type Y if");
    vector3.push_back("daily activities to do?");
    vector3.push_back("your list of");
    vector3.push_back("ready to see");
    vector3.push_back("Are you");

    for (auto palabra2 = vector3.rbegin();palabra2 != vector3.rend(); palabra2++)
    {
        cout<<*palabra2<<" ";
    }

    do
    {
        cin>>b;

        switch(b)
        {
            case 'Y':
            cout<<"\n";
            lectura13();
            b = 'B';
            break;

            default:
            cout<<"Please, put a correct letter."<<endl;
        }
    }

    while(b != 'B');
    {
        cout<<"\n";
        cout<<"Perfect."<<endl;
    }

    cout<<"\n";
    map<string, string> clave;
    
    clave["A"] = "Please put the correspondent number of the days that you already complete all of your activities:";
    clave["B"] = "1. Monday and Tuesday";
    clave["C"] = "2. Wednesday and Thursday";
    clave["D"] = "3. Friday";
    
    

    map<string,string>::iterator iter;
    for(iter = clave.begin(); iter != clave.end(); iter++)
    {
        cout<<iter->second<<endl;
    }


    do
    {
        cin>>r;

        switch(r)
        {
            case 1:
            cout<<"\n";
            lectura14();
            aux = 5;
            r = 0;
            break;

            case 2:
            cout<<"\n";
            lectura15();
            aux = 10;
            r = 0;
            break;

            case 3:
            cout<<"\n";
            lectura16();
            aux = 15;
            r = 0;
            break;

            default:
            cout<<"\n";
            cout<<"Please, put a correct number."<<endl;
        }
    }

    while(r != 0);
    {
        cout<<"\n";
        cout<<"Perfect."<<endl;
    }

    map<string, string> clave2;
    clave2["A"] = "Type the second day you already complete:";
    clave2["B"] = "1. Monday and Tuesday";
    clave2["C"] = "2. Wednesday and Thursday";
    clave2["D"] = "3. Friday";
    
    
    cout<<"\n";
    map<string,string>::iterator i;
    for(i = clave2.begin(); i != clave2.end(); i++)
    {
        cout<<i->second<<endl;
    }

    do
    {
        cin>>d;

        switch(d)
        {
            case 1:
            if(aux == 5)
            {
                cout<<"This day you already complete..."<<endl;
                cout<<"Please put another number:"<<endl;
            }
            else
            {
                cout<<"\n";
                lectura14();
                aux2 = 5;
                d = 0;
            }
            break;

            case 2:
            if(aux == 10)
            {
                cout<<"This day you already complete..."<<endl;
                cout<<"Please put another number:"<<endl;
            }
            else
            {
                cout<<"\n";
                lectura15();
                aux2 = 10;
                d = 0;
            }
            break;

            case 3:
            if(aux == 15)
            {
                cout<<"This day you already complete..."<<endl;
                cout<<"Please put another number:"<<endl;
            }
            else
            {
                cout<<"\n";
                lectura16();
                aux2 = 15;
                d = 0;
            }
            break;

            default:
            cout<<"Please, put a correct number."<<endl;
        }
    }

    while(d != 0);
    {
        cout<<"\n";
        cout<<"Perfect."<<endl;
    }

    map<string, string> clave3;
    clave3["A"] = "Type the third day you already complete:";
    clave3["B"] = "1. Monday and Tuesday";
    clave3["C"] = "2. Wednesday and Thursday";
    clave3["D"] = "3. Friday";
    
    
    cout<<"\n";
    map<string,string>::iterator i2;
    for(i2 = clave3.begin(); i2 != clave3.end(); i2++)
    {
        cout<<i2->second<<endl;
    }

    do
    {
        cin>>e;

        switch(e)
        {
            case 1:
            if(aux == 5)
            {
                cout<<"This day you already complete..."<<endl;
                cout<<"Please put another number:"<<endl;
            }
            else if(aux2 == 5)
            {
                cout<<"This day you already complete..."<<endl;
                cout<<"Please put another number:"<<endl;
            }
            else
            {
                cout<<"\n";
                lectura14();
                e = 0;
            }
            break;

            case 2:
            if(aux == 10)
            {
                cout<<"This day you already complete..."<<endl;
                cout<<"Please put another number:"<<endl;
            }
            else if(aux2 == 10)
            {
                cout<<"This day you already complete..."<<endl;
                cout<<"Please put another number:"<<endl;
            }
            else
            {
                cout<<"\n";
                lectura15();
                e = 0;
            }
            break;

            case 3:
            if(aux == 15)
            {
                cout<<"This day you already complete..."<<endl;
                cout<<"Please put another number:"<<endl;
            }
            else if(aux2 == 15)
            {
                cout<<"This day you already complete..."<<endl;
                cout<<"Please put another number:"<<endl;
            }
            else
            {
                cout<<"\n";
                lectura16();
                e = 0;
            }
            break;

            default:
            cout<<"Please, put a correct number."<<endl;
        }
    }

    while(e != 0);
    {
        cout<<"\n";
        cout<<"Perfect."<<endl;
    }

    cout<<"\n";
    cout<<"This is the end of the fitness plan...."<<endl;
    cout<<"I hope that you can reach your goal with this fitness plan."<<endl;

    cout<<"\n";
    lectura17();



}