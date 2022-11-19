#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

void print_array( int array[], int size)
{
    for(int i=0; i<size;i++)
    {
        cout<< array[i]<<"\t";
    }
    cout<< endl;
}

void play_game()
{
    int guesses[250];
    int guess_count=0;

    int guess;
    int random = rand() % 251;/*rand generates a random number and % divides it by 251 hence
    giving a remainder anywhere beloww 251 upto 250*/
    cout<< "Game is being played!!\n";
    cout<< random<< endl;
    while(guess!=random) // or while(true)
    {
        cin>> guess;
        guesses[guess_count++] = guess;


        if (guess == random)
        {
                cout<<"Hey you win\n";
                break;
        } else if (guess>random)
        {
            cout<<"High answer\n";
        } else
        {
                cout<<"Low answer\n";
        }
        }
        print_array(guesses, guess_count);
            
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
    } while (choice!=0);
    
}