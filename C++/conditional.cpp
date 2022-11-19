#include <iostream>
#include <string>

int main()
{
    int ans = 10;
    std::cout<< "Guess the number of balls : ";
    int guess;
    std::cin>>guess;
    /*we could also use
    int points = guess==ans ? 10 : 0;
    std::cout<< "You got "<< points<< "points\n";
    */
    guess==ans ? std::cout<<"Well done!\n" : std::cout<<"Please try again later\n";
    {if (guess==ans)
    {
        std::cout<< "Correct Guess!!\n";
    }
    else if (guess!=ans)    
    {
        std::cout<< "Wrong Guess oop!\n";
    }
    }

}