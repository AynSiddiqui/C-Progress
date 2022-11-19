#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <array>
using namespace std;

void print_a(std::array<int,251> data, int size)
{
    for(int i=0; i<size;i++)
    {
        cout<< data[i] <<"\t";
    }
    cout<< endl;
}

void play_game()
{
    std::array<int,251> guesses;
    int guess;
    int guess_count=0;

    int random = rand() % 251;/*rand generates a random number and % divides it by 251 hence
    giving a remainder anywhere beloww 251 upto 250*/
    cout<< "Game is being played!!\n";
    cout<< random<< endl;
    while(guess!=random) // or while(true)
    {
        cin>> guess;
        guesses[guess_count++]=guess;

        if (guess == random)
        {
                cout<<"Hey you win\n";
                break;
        } else if (guess>random)
        {
            cout<<"High answer\n";
        } else if(guess<random)
        {
                cout<<"Low answer\n";
        }
        }
        print_a(guesses, guess_count);
            
   }

int main()
{
    srand(time(NULL));
    //srand will seed a random number once at the start of the code and will change everytime
    int choice;
    do
    {
    cout<< "0. Quit! \n1. Play Game!\n";
    cin>> choice;
    switch (choice)
        {
        case 0:
            cout<< "Thanks. Bye!\n";
            break;

        case 1:
            play_game();
            break;
        }
    }  while (choice!=0);
    
}