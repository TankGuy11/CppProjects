#include <iostream>
#include <cmath>
#include <string>
#include <cctype>

double add(double a, double b) {
    return a + b;
}
double subtract(double a, double b){
    return a-b;
}
double multiply(double a, double b){
    return a*b;
}
double divide(double a, double b){
    return a/b;
}
double logarithm(double a, double b){
    return log(a)/log(b);
}
double cosec(double a){
    return pow(sin(a), -1);
}
double sec(double a){
    return pow(cos(a), -1);
}
double cotan(double a){
    return pow(tan(a), -1);
}

int main() {
    std::string yon;
    std::string func;
    std::string oper;
    bool loopbreaker = true;
    bool programme_ender = true;
    double x;
    double y;
    std::cout << "Welcome to the calculator app. Please enter a number: ";
    std::cin >> x;
    while (true) {
    if (typeid(x).name() != typeid(6.7).name()){
            std::cout << "\nPlease enter a vaild number: ";
            std::cin >> x;
        } else {
            break;
        }
    }
    while(programme_ender){ 
        std::cout << "\nWould like to apply a trig function or a log[Y/N] ? ";
        std::cin >> yon;
        while(loopbreaker){
            if (yon == "Y" || yon == "y"){
                std::cout << "\nPlease enter a function: ";
                std::cin >> func;
                while(true){
                    for (int i=0; i < func.size(); i++){
                        func[i] = std::tolower(func[i]);
                    }
                    if (func == "sin"){
                        x = sin(x);
                        loopbreaker = false;
                        break;
                    } else if (func == "cos") {
                        x = cos(x);
                        loopbreaker = false;
                        break;
                    } else if (func == "tan") {
                        x = tan(x);
                        loopbreaker = false;
                        break;
                    } else if (func == "cosec" || func == "csc") {
                        x = cosec(x);
                        loopbreaker = false;
                        break;
                    } else if (func == "sec") {
                        x = sec(x);
                        loopbreaker = false;
                        break;
                    } else if (func == "cot" || func == "cotan"){
                        x = cotan(x);
                        loopbreaker = false;
                        break;
                    } else if (func == "ln" || func == "loge"){
                        x = log(x);
                        loopbreaker = false;
                        break;
                    } else if (func == "lg" || func == "log2") {
                        x = log2(x);
                        loopbreaker = false;
                        break;
                    } else if (func == "log" || func == "log10"){
                        x = log10(x);
                        loopbreaker = false;
                        break;
                    } else {
                        std::cout << "\nPlease enter a valid function: ";
                        std::cin >> func;
                    }
                }
            } else if (yon == "N" || yon == "n"){
                    loopbreaker = false;
                    break;
                } else {
                    std::cout << "\nPlease enter either Y or N: ";
                    std::cin >> yon;
                }

        }
        loopbreaker = true;   
        yon = "";
        std::cout << "\nPlease enter another number: ";
        std::cin >> y;
        while (true) {
            if (typeid(y).name() != typeid(6.7).name()){
                std::cout << "\nPlease enter a vaild number: ";
            } else {
                break;
            }
        }
        std::cout << "\nWould like to apply a trig function or a log[Y/N] ? ";
        std::cin >> yon;
        while (loopbreaker) {
            if (yon == "Y" || yon == "y"){
                std::cout << "\nPlease enter an function: ";
                std::cin >> func;
                while (true){
                    for (int i=0; i < func.size(); i++){
                        func[i] = std::tolower(func[i]);
                    }
                    if (func == "sin"){
                        y = sin(y);
                        loopbreaker = false;
                        break;
                    } else if (func == "cos") {
                        y = cos(y);
                        loopbreaker = false;
                        break;
                    } else if (func == "tan") {
                        y = tan(y);
                        loopbreaker = false;
                        break;
                    } else if (func == "cosec" || func == "csc") {
                        y = cosec(y);
                        loopbreaker = false;
                        break;
                    } else if (func == "sec") {
                        y = sec(y);
                        loopbreaker = false;
                        break;
                    } else if (func == "cot" || func == "cotan"){
                        y = cotan(y);
                        loopbreaker = false;
                        break;
                    } else if (func == "ln" || func == "loge"){
                        y = log(y);
                        loopbreaker = false;
                        break;
                    } else if (func == "lg" || func == "log2") {
                        y = log2(y);
                        loopbreaker = false;
                        break;
                    } else if (func == "log" || func == "log10"){
                        y = log10(y);
                        loopbreaker = false;
                        break;
                    } else {
                        std::cout << "\nPlease enter a valid input: ";
                        std::cin >> func;
                    }
                }
            } else if (yon == "N" || yon == "n"){
                break;
            } else {
                std::cout << "\nPlease enter either Y or N: ";
                std::cin >> yon;
            }
    }  
        std::cout <<"\nPlease enter the operation you would like to perform between these two: ";
        std::cin >> oper;
                    while (true){
                        for (int i=0; i < oper.size(); i++){
                            oper[i] = std::tolower(oper[i]);
                        }
                        if (oper == "+"  || oper == "add"){
                            std::cout << "\nYour sum is: " << add(x,y);
                            x = add(x,y);
                            break;
                        } else if (oper == "-"  || oper == "subtract"){
                            std::cout << "\nYour difference is: " << subtract(x,y);
                            x = subtract(x,y);
                            break;
                        } else if (oper == "*"  || oper == "multiply" || oper == "x" || oper == "X"){
                            std::cout << "\nYour product is: " << multiply(x,y);
                            x = multiply(x,y);
                            break;
                        } else if (oper == "/"  || oper == "divide"){
                            std::cout << "\nYour quotient is: " << divide(x,y);
                            x = divide(x,y);
                            break;
                        } else if (oper == "^"  || oper == "exponentiate" || oper == "power" || oper == "exponent" || oper == "index" || oper == "degree"){
                            std::cout << "\n"<< x << " to the degree of "<< y <<" is: " << pow(x,y);
                            x = pow(x,y);
                            break;
                        } else if (oper == "log" || oper == "logarithm"){
                            std::cout << "\nlog " << y << " to the base " << x << " is: " <<logarithm(x, y);
                            x = logarithm(x, y);
                            break;
                        } else {
                            std::cout << "\nPlease Enter a valid operator: ";
                            std::cin >> oper;
                        }
                    }
                    yon = "";
                    loopbreaker = true;
                    std::cout << "\nWould you like perform another operation between the obtained product and another number? [Y/N] ";
                    std::cin >> yon;

                    while(true){
                        if(yon == "Y" or yon == "y"){
                            break;
                        } else if (yon == "N" or yon == "n"){
                            return 0;
                        } else {
                            std::cout << "\nPlease enter either Y or N ";
                            std::cin >> yon;
                        }
                    }
                }
}