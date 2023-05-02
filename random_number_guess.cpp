#include <iostream>
#include <string.h>
#include <stdlib.h>
using namespace std;
int number_to_guess; // a random number to be guessed
int low_limit;       // the lowest limit of players range
int high_limit;      // the upper limit of players range
int guess_count;     // counts the number of guesses made
int player_number;   // counts the gotten grom the player
char line[80];       // input buffer for a single line
int main()
{
    try
    {
        while (1) //loops until the break condition is met
        {
            number_to_guess = rand() % 100 + 1;
            low_limit = 0;
            high_limit = 100;
            guess_count = 0;
            string opt;
        game:
            cout << "Do you wish to \nplay\nquit" << endl;
            getline(cin, opt);
            if (opt == "quit")
            {
                break;
            }
            else if (opt == "play")
            {
                while (1)
                {
                    cout << "The number should be between " << low_limit << " - " << high_limit << endl;
                    cout << "Enter the value " << guess_count << endl;
                    ++guess_count;
                    cin >> player_number;
                    if (player_number >= low_limit && player_number <= high_limit)
                    {
                        if (player_number == number_to_guess)
                        {
                            cout << "Congratulations!!! You got it right" << endl;
                            break;
                        }
                        else if (player_number < number_to_guess)
                        {
                            cout << "The number you guessed is lower...try again" << endl;
                            low_limit = player_number;
                        }
                        else if (player_number > number_to_guess)
                        {
                            cout << "The number you guessed is higher...try again" << endl;
                            high_limit = player_number;
                        }
                        else
                        {
                            cerr << "The value you entered is invalid...try again" << endl;
                            break;
                        }
                    }
                    else if (player_number >= 'a' && player_number <= 'z' || player_number >= 'A' && player_number <= 'Z')
                    {
                        cerr << "Error occured...The value you entered is not a number" << endl;
                        break;
                    }
                    else
                    {
                        cerr << "Number out of range" << endl;
                        break;
                    }
                }
            }
            else
            {
                cerr << "Error the option you entered does not exist...try again" << endl;
                break;
            }
            cout << "Bingo" << endl;
        }
    }
    catch (...)
    {
        cout << "Errors occured" << endl;
    }
    return 0;
}