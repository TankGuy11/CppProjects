#include <iostream>
#include <string>

//For diff. levl
enum Level {
    EASY = 10,
    MEDIUM = 25,
    HARD = 50
};

//Because i wanted to test functions
int randomgenz(int a){
    return rand() % a + 1;
}

int main() {
    //Sets the random sequence to the current time
    srand(time(0));
    Level difficulty;
    std::string x;
    std::string yon;
    int guess;
    std::cout << "Welcome to the number guessing game!!\nPlease Choose the difficulty level:\n";
    std::cout << "1.EASY \n2.MEDIUM \n3.HARD\n";
    std::getline(std::cin, x);
    while (true){ 
    while(2>0) {
        if (x == "EASY" || x =="1") {
            difficulty = EASY;
            break;
        } else if (x == "MEDIUM" || x == "2") {
            difficulty = MEDIUM;
            break;
        } else if (x == "HARD" || x == "3") {
            difficulty = HARD;
            break;
        } else {
            std::cout << "Type a valid input, either in numbers or words (ALL CAPS) ";
            std::getline(std::cin, x);
        }
    }
    //Random number
    int y = randomgenz(difficulty);

    int no_of_turns;
    switch (difficulty) {
        case EASY:
            no_of_turns = 4;
            break;

        case MEDIUM:
            no_of_turns = 10;
            break;

        case HARD:
            no_of_turns = 20;
            break;

        default:
            break;
    }
    switch (difficulty)
        {
        case EASY:
            std::cout << "Pick a number from 1 to 10: ";
            break;
        case MEDIUM:
            std::cout << "Pick a number from 1 to 25: ";
            break;
        case HARD:
            std::cout << "Pick a number from 1 to 50: ";
            break;
        default:
            break;
        }

    while(no_of_turns > 0){
        std::cin >> guess;
        std::cout << (guess == y ? "\nYou guessed it!!" : std::string("\nWrong Answer, No. of turns: ") + std::to_string(no_of_turns - 1) + std::string(" Try again: "));
        if(guess==y){
            break;
        }
        no_of_turns--;
    }
    if(no_of_turns == 0) {
        std::cout << "\nThe number was "<< y;
    }
    std::cout << "\nDo you want to play again?[Y/N]: ";
    std::cin >> yon;
    while(true){
        if (yon == "Y" || yon == "y"){
            break;
        } else if (yon == "N" || yon =="n"){
            return 0;
        } else {
            std::cout << "Invalid input, Type Y or N: ";
            std::getline(std::cin, yon);
        }
    }
}
    return 0;
}