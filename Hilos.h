#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<fstream>
#include<pthread.h>
#include<windows.h>

using namespace std;

void *Cargar_plan_fitness(void *arg) 
{
  int tiempo = 15;

  bool vueltas = true;
  while(vueltas)
  {
    cout<<tiempo<<" seconds remaining to finish your fitness plan........."<<endl;

    Sleep(1000);

    system("cls"); 


    tiempo--;
    
    if(tiempo == 0)
    {
      vueltas = false;
    }
  }
    pthread_exit(NULL);
}