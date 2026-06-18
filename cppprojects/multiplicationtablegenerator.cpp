#include <iostream>
#include <string>

void verifyNum(int& a) {
    //To verify if user input is a number or not
    while(!(std::cin >> a)){
        std::cin.clear();
        std::cin.ignore(100000, '\n');
        std::cout << "Please enter a valid number: ";
    }
}

int main() {
    std::string yon;
    while (true){
        //The number whose multiplication table is to be generated
        int x;
        std::cout << "Welcome to the multiplication table generator. Please enter the number you want to generate a table for: ";
        verifyNum(x);
        //Variable to decide how many rows should be in the table
        int y;
        std::cout << "Please enter the numbers of rows that should be included in the table: ";
        verifyNum(y);
        while (true) {
            if(y<=0){
                std::cout << "Bruh: ";
                std::cin >> y;
            } else {
                break;
            }
        }
        std::cout << std::endl;
        for(int i = 1; i <= y; i++){
            std::cout << x << " x " << i << " = " << i * x <<std::endl;
        }
        std::cout << "\nDo you want to generate another table? [Y/N]: ";
        std::cin >> yon;
        if(yon == "Y" || yon == "y") {
            yon = "";
        } else if (yon == "N" || yon == "n") {
            break;
        }
    }
    return 0;
}