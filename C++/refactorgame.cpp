#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <fstream>
using namespace std;

void save_score(int count)
{
        std::ifstream input("bestscore.txt");
        if(!input.is_open())
        {
            std::cout<<"Cant read high scores.\n";
        }
        int bestscore;
        input>>bestscore;

        std::ofstream output("bestscore.txt");
        if(!output.is_open())
        {
            std::cout<<"Cant read high scores.\n";
        }
        if(count<bestscore)
        {
            output<<count;
        } 
        else
        {
            cout<<bestscore;
        }
}

void print_v(std::vector<int> data)
{
    for(int i=0; i<data.size();i++)
    {
        cout<< data[i]<<"\t";
    }
    cout<< endl;
}

void play_game()
{
    std::vector<int> guesses;
    int guess;
    int count=0;
    int random = rand() % 251;/*rand generates a random number and % divides it by 251 hence
    giving a remainder anywhere beloww 251 upto 250*/
    cout<< "Game is being played!!\n";
    cout<< random<< endl;
    while(guess!=random) // or while(true)
    {
        cin>> guess;
        guesses.push_back(guess);
        count++;//or we could use guesses.size()
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

        save_score(count);
        print_v(guesses);
        
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