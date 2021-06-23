#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <fstream>

void save_score(std::vector<int> guesses)
{
    // getting file score
    std::ifstream input("best_score.txt");

    // if it can't open the file, it will break out of playgame()
    // and go back to the main menu
    if(!input.is_open())
    {
        std::cout << "Unable to read file" << std::endl;
        return;
    }
    // declaration and taking in currently stored score
    int best_score;
    input >> best_score;

    // opening the file in output stream
    std::ofstream output("best_score.txt");

    // if it can't open the file, it will break out of playgame()
    // and go back to the main menu
    if(!output.is_open())
    {
        std::cout << "Unable to read file" << std::endl;
        return;
    }

    // if there was never a score to begin with, then create user's first score
    if(!best_score)
    {
        output << guesses.size();
    }
    // else if use this logic to compare their score and best score
    else if(guesses.size() < best_score)
    {
    // if it is better(less than current) overwrite the current best score
        output << guesses.size();
    }
    //else keep the best score
    else
    {
        output << best_score;
    }

    //closing the files
    input.close();
    output.close();
}

// function to print out vector array of guesses
// using size() to get the vector size
// taking in best score - needs updating to show the score update
void print_vector(std::vector<int> guesses)
{
    std::cout << "It took you " << guesses.size() <<
    " tries, and here are your guesses: ";
    for(int i = 0; i < guesses.size(); i++)
    {
        std::cout << guesses[i] << '\t';
    }
    std::cout << std::endl;

    std::ifstream output2 ("best_score.txt");
    int updated_score;
    output2 >> updated_score;
    // outputting highest score
    std::cout << "Your highest score is " << updated_score << std::endl;
}

void play_game()
{
    // declaring vector to store guesses
    std::vector<int> guesses;

    // creating a sequence of random numbers
    int random = rand() % 251;

    // outputting random number for testing
    std::cout << random << std::endl;

    // asking user to guess the number
    std::cout << "Guess a number: ";

    // game keeps going until the number is correct, then breaks out
    while(true)
    {
        //storing the user's guess
        int guess;
        std::cin >> guess;

        // push_back adds the new value to the vector array
        guesses.push_back(guess);

        // if guess is equal to the random number
        if(guess == random)
        {
            std::cout << "You win!\n";
            break;
        }
        // if guess is less than the random number
        else if(guess < random)
        {
            std::cout << "Too Low\n";
        }
        // else guess is higher
        else
        {
            std::cout << "Too high\n";
        }
    }

    // calling save_score function to run score check
    save_score(guesses);

    // using print_vector function to print out guesses
    // using the vector we can print all the values and
    // not need to pass in the size, as it can store it
    // Only need to call a function to figure its size
    print_vector(guesses);
}

int main()
{
    //changing the random number by the computer's internal clock
    // the seed is forever changing
    srand(time(NULL));

    // declare variable outside to be accessible
    int choice;

    // do while loop to make the menu appear at least once
    do
    {
        //getting user input
        std::cout << "0. Quit\n";
        std::cout << "1. Play Game\n";
        std::cin >> choice;

        switch(choice)
        {
            case 0:
                std::cout << "See you again soon!\n";
                //stops all from running below (breaks out of main function)
                return 0;
            case 1:
                play_game(); // function call to playing the game
                break;
        }
    // run the game until their choice is 0
    } while(choice != 0);

    return 0;
}
