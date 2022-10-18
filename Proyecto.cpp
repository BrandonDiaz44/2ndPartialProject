#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<fstream>

using namespace std;

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

int main()
{
    lectura();
    char y;
    int z;

    cout<<"\n"<<endl;
    cout<<"\n"<<endl;
    cout<<"Are you ready to transform into a Greek god with me?"<<endl;
    cout<<"\n"<<endl;
    cout<<"\n"<<endl;
    cout<<"Please, answer this questions to give you your fitness plan:"<<endl;
    cout<<"\n"<<endl;

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
    cout<<"Do you want to see your answers?"<<endl;
    cout<<"Type 'Y' if you want to see your answers, and 'N' if you don't want to."<<endl;
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
            cout<<"Please put a correct letter."<<endl;
        }
    }

    while(y != 'B');
    {
        cout<<"Perfect."<<endl;
    }

    cout<<"\n"<<endl;
    cout<<"Now, I have all your answers and information to creat your diet and training."<<endl;
    cout<<"\n"<<endl;
    cout<<"From 1 to 10 tell me in how many months do you want changes? 1 is one month and 10 is ten months"<<endl;
    cout<<"Are you ready to see your diet and training?"<<endl;
    cout<<"\n"<<endl;
    cout<<"Type 'Y' if you are ready, and 'N' if you are not ready to see your diet and training."<<endl;
    cout<<"\n"<<endl;


}