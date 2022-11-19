#include <iostream>
#include <string>
#include <limits>

using namespace std;

void print_array(int array[], int size)
{
    for(int i=0; i<size;i++)
    {
        cout<< array[i]<<"\t";
    }
    cout<<endl;
}

int main()
{
    const int SIZE = 10;
    int guesses[SIZE];
    
    int count = 0;
    for(int i =0; i<SIZE;i++)
    {
        if(cin>>guesses[i])//returns to cin and will evaluate true only if number
        {
            count++;
            //input worked
        } else
        {
            break;//invalide character
        }
    }

    print_array(guesses,count);
    cin.clear();
    cin.ignore(1000, '\n');//does not break but helps next input to be taken in properly
    //to clear every possible input after that we use
    //std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    string test;
    cin>>test;
    cout<<test;
}
/*int main()
{
    int guesses[] = {20,23,24,35,65};//extra size is filled by 0
    int size = sizeof(guesses)/sizeof(int);
    print_array(guesses,5);
    for(int i=0; i<size;i++)
    {
        cout<<guesses[i]<<"\t";
    }
}*/

