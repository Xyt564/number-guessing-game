#include <iostream>
#include <cstdlib>
#include <ctime>

void clearScreen()
{
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
}

int main() {

    int difficulty;
    int maxNumber;
    char playAgain;
    std::srand(std::time(NULL));

    do {
    clearScreen();
    int guess = 0;
    int attempts = 0;


    std::cout << "Welcome to the Guessing game.\n\n";

    std::cout << "Choose difficulty:\n";
    std::cout << "1. Easy (1-10)\n";
    std::cout << "2. Medium (1-100)\n";
    std::cout << "3. Hard (1-1000)\n";
    std::cout << "Choice: ";

    std::cin >> difficulty;


    switch (difficulty)
    {
        case 1:
            maxNumber = 10;
            break;

        case 2:
            maxNumber = 100;
            break;

        case 3:
            maxNumber = 1000;
            break;

        default:
            std::cout << "Invalid choice. Defaulting to easy mode.\n";
            maxNumber = 10;
            difficulty = 1;
            break;
    }


    int secretnum = std::rand() % maxNumber + 1;


    std::cout << "\nGuess the number (1-" << maxNumber 
              << ") to unlock the secret message.\n";


    while (guess != secretnum)
    {
        std::cout << "Enter your guess: ";
        std::cin >> guess;

        attempts++;

        if (guess < secretnum)
        {
            std::cout << "Too low!! Try again." << std::endl;
            std::cout << "Attempt: " << attempts << "\n\n"; 
        }
        else if (guess > secretnum)
        {
            std::cout << "Too high!! Try again." << "\n";
            std::cout << "Attempt: " << attempts << "\n\n";
        }
        else
        {
            std::cout << "\nCorrect! You got it in "
                      << attempts << " attempts!\n\n";

            switch (difficulty)
            {
                case 1:
                    std::cout << "Nice job! You beat easy mode.\n";
                    break;

                case 2:
                    std::cout << "Impressive! You beat medium mode.\n";
                    break;

                case 3:
                    std::cout << "You beat hard mode! Here's your reward:\n\n";

                    std::cout << R"(

/$$       /$$                                                                  
|__/      | $$                                                                  
 /$$      | $$  /$$$$$$  /$$    /$$ /$$$$$$        /$$   /$$  /$$$$$$  /$$   /$$
| $$      | $$ /$$__  $$|  $$  /$$//$$__  $$      | $$  | $$ /$$__  $$| $$  | $$
| $$      | $$| $$  \ $$ \  $$/$$/| $$$$$$$$      | $$  | $$| $$  \ $$| $$  | $$
| $$      | $$| $$  | $$  \  $$$/ | $$_____/      | $$  | $$| $$  | $$| $$  | $$
| $$      | $$|  $$$$$$/   \  $/  |  $$$$$$$      |  $$$$$$$|  $$$$$$/|  $$$$$$/
|__/      |__/ \______/     \_/    \_______/       \____  $$ \______/  \______/ 
                                                   /$$  | $$                    
                                                  |  $$$$$$/                    
                                                   \______/                     

)";
                    break;

                default:
                    std::cout << "You won!\n";
                    break;
            }
        }
    }

    std::cout << "\nDo you want to play again? (y/n): ";
    std::cin >> playAgain;
    
} while (playAgain == 'y' || playAgain == 'Y');

    return 0;
}