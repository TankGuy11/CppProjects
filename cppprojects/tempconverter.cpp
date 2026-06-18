#include <iostream>
#include <string>
#include <cmath>
#include <cctype>
#include "convertfuncs.h"

int main() {
    //Magnitude for conversions
    double firstnum;
    //Input unit
    std::string tempunitinput;
    //Output unit
    std::string tempunitoutput;
    //To break smaller loops
    bool loopbreaker = true;
    //To input Yes or No at the end of the program
    std::string yon;

    std::cout << "Welcome to the temperature converter app.";
    //Main loop
    while(true){
        std::cout << "\nPlease enter the first number: ";
        std::cin >> firstnum;
        //To verify if correct type or not
        while(loopbreaker){
            if(!(std::cin.fail())){
                std::cout << "Please enter the current unit of temperature for this number: ";
                std::cin >> tempunitinput;
                //To verify if correct unit or not
                while(loopbreaker){
                    for(int i=0; i < tempunitinput.length();i++){
                        tempunitinput[i] = std::tolower(tempunitinput[i]);
                    }
                    if(tempunitinput == "c" or tempunitinput == "celsius" || tempunitinput == "°c"){
                        std::cout << "Please enter the unit the number must be converted into: ";
                        std::cin >> tempunitoutput;
                        while(true){
                            for(int i = 0; i < tempunitoutput.length();i++){
                                tempunitoutput[i] = std::tolower(tempunitoutput[i]);
                            }
                            if(tempunitoutput == "fahrenheit" || tempunitoutput == "f" || tempunitoutput == "°f"){
                                std::cout << "Your result is: " << CtoF(firstnum) << "°F";
                                loopbreaker = false;
                                break;
                            } else if (tempunitoutput == "kelvin" || tempunitoutput == "k" || tempunitoutput == "k"){
                                std::cout << "Your result is: " << CtoK(firstnum) << "K";
                                loopbreaker = false;
                                break;
                            } else if (tempunitoutput == "rankine" || tempunitoutput == "r" || tempunitoutput == "°r" || tempunitoutput == "ra" || tempunitoutput == "°ra"){
                                std::cout <<"Your result is: " << CtoR(firstnum) << "°R";
                                loopbreaker = false;
                                break;
                            } else if  (tempunitoutput == "desile" || tempunitoutput == "de"  || tempunitoutput == "°de"){
                                std::cout << "Your result is: " << CtoD(firstnum) << "°De";
                                loopbreaker = false;
                                break;
                            } else if (tempunitoutput == "newton" || tempunitoutput == "n" || tempunitoutput == "°n"){
                                std::cout << "Your result is: " << CtoN(firstnum) << "°N";
                                loopbreaker = false;
                                break;
                            } else if (tempunitoutput == "reaumur" || tempunitoutput == "re" || tempunitoutput == "°re"){
                                std::cout << "Your result is: " << CtoRe(firstnum) << "°Re";
                                loopbreaker = false;
                                break;
                            } else if (tempunitoutput == "romer" || tempunitoutput == "ro" || tempunitoutput =="°ro"){
                                std::cout << "Your result is: " << CtoRo(firstnum) << "°Ro";
                                loopbreaker = false;
                                break;
                            } else {
                                std::cout << "Please enter a valid unit: ";
                                std::cin >> tempunitoutput;
                            }
                        }
                        
                    } else if(tempunitinput == "f" or tempunitinput == "fahrenheit" || tempunitinput == "°f"){
                        std::cout << "Please enter the unit the number must be converted into: ";
                        std::cin >> tempunitoutput;
                        while(true){
                            for(int i=0; i < tempunitoutput.length();i++){
                                tempunitoutput[i] = std::tolower(tempunitoutput[i]);
                            }
                            if(tempunitoutput == "celsius" || tempunitoutput == "c" || tempunitoutput == "°c"){
                                std::cout << "Your result is: " << FtoC(firstnum) << "°C";
                                loopbreaker = false;
                                break;
                            } else if (tempunitoutput == "kelvin" || tempunitoutput == "k" || tempunitoutput == "k"){
                                std::cout << "Your result is: " << FtoK(firstnum) << "K";
                                loopbreaker = false;
                                break;
                            } else if (tempunitoutput == "rankine" || tempunitoutput == "r" || tempunitoutput == "°r" || tempunitoutput == "ra" || tempunitoutput == "°ra"){
                                std::cout <<"Your result is: " << FtoR(firstnum) << "°R";
                                loopbreaker = false;
                                break;
                            } else if  (tempunitoutput == "desile" || tempunitoutput == "de"  || tempunitoutput == "°de"){
                                std::cout << "Your result is: " << FtoD(firstnum) << "°De";
                                loopbreaker = false;
                                break;
                            } else if (tempunitoutput == "newton" || tempunitoutput == "n" || tempunitoutput == "°n"){
                                std::cout << "Your result is: " << FtoN(firstnum) << "°N";
                                loopbreaker = false;
                                break;
                            } else if (tempunitoutput == "reaumur" || tempunitoutput == "re" || tempunitoutput == "°re"){
                                std::cout << "Your result is: " << FtoRe(firstnum) << "°Re";
                                loopbreaker = false;
                                break;
                            } else if (tempunitoutput == "romer" || tempunitoutput == "ro" || tempunitoutput =="°ro"){
                                std::cout << "Your result is: " << FtoRo(firstnum) << "°Ro";
                                loopbreaker = false;
                                break;
                            } else {
                                std::cout << "Please enter a valid unit: ";
                                std::cin >> tempunitoutput;
                            }
                        }
                        
                    } else if(tempunitinput == "k" or tempunitinput == "kelvin"){
                        std::cout << "Please enter the unit the number must be converted into: ";
                        std::cin >> tempunitoutput;
                        while(true){
                            for(int i=0; i < tempunitoutput.length();i++){
                                tempunitoutput[i] = std::tolower(tempunitoutput[i]);
                            }
                            if(tempunitoutput == "celsius" || tempunitoutput == "c" || tempunitoutput == "°c"){
                                std::cout << "Your result is: " << KtoC(firstnum) << "°C";
                                loopbreaker = false;
                                break;
                            } else if (tempunitoutput == "fahrenheit" || tempunitoutput == "f" || tempunitoutput == "°f"){
                                std::cout << "Your result is: " << KtoF(firstnum) << "F";
                                loopbreaker = false;
                                break;
                            } else if (tempunitoutput == "rankine" || tempunitoutput == "r" || tempunitoutput == "°r" || tempunitoutput == "ra" || tempunitoutput == "°ra"){
                                std::cout <<"Your result is: " << KtoR(firstnum) << "°R";
                                loopbreaker = false;
                                break;
                            } else if  (tempunitoutput == "desile" || tempunitoutput == "de"  || tempunitoutput == "°de"){
                                std::cout << "Your result is: " << KtoD(firstnum) << "°De";
                                loopbreaker = false;
                                break;
                            } else if (tempunitoutput == "newton" || tempunitoutput == "n" || tempunitoutput == "°n"){
                                std::cout << "Your result is: " << KtoN(firstnum) << "°N";
                                loopbreaker = false;
                                break;
                            } else if (tempunitoutput == "reaumur" || tempunitoutput == "re" || tempunitoutput == "°re"){
                                std::cout << "Your result is: " << KtoRe(firstnum) << "°Re";
                                loopbreaker = false;
                                break;
                            } else if (tempunitoutput == "romer" || tempunitoutput == "ro" || tempunitoutput =="°ro"){
                                std::cout << "Your result is: " << KtoRo(firstnum) << "°Ro";
                                loopbreaker = false;
                                break;
                            } else {
                                std::cout << "Please enter a valid unit: ";
                                std::cin >> tempunitoutput;
                            }
                        }
                        
                    } else if(tempunitinput == "r" or tempunitinput == "rankine" || tempunitinput == "°r" || tempunitinput == "°ra" || tempunitinput == "ra"){
                        std::cout << "Please enter the unit the number must be converted into: ";
                        std::cin >> tempunitoutput;
                        while(true){
                            for(int i=0; i < tempunitoutput.length();i++){
                                tempunitoutput[i] = std::tolower(tempunitoutput[i]);
                            }
                            if(tempunitoutput == "celsius" || tempunitoutput == "c" || tempunitoutput == "°c"){
                                std::cout << "Your result is: " << RtoC(firstnum) << "°C";
                                loopbreaker = false;
                                break;
                            } else if (tempunitoutput == "fahrenheit" || tempunitoutput == "f" || tempunitoutput == "°f"){
                                std::cout << "Your result is: " << RtoF(firstnum) << "F";
                                loopbreaker = false;
                                break;
                            } else if (tempunitoutput == "kelvin" || tempunitoutput == "k"){
                                std::cout <<"Your result is: " << RtoK(firstnum) << "K";
                                loopbreaker = false;
                                break;
                            } else if  (tempunitoutput == "desile" || tempunitoutput == "de"  || tempunitoutput == "°de"){
                                std::cout << "Your result is: " << RtoD(firstnum) << "°De";
                                loopbreaker = false;
                                break;
                            } else if (tempunitoutput == "newton" || tempunitoutput == "n" || tempunitoutput == "°n"){
                                std::cout << "Your result is: " << RtoN(firstnum) << "°N";
                                loopbreaker = false;
                                break;
                            } else if (tempunitoutput == "reaumur" || tempunitoutput == "re" || tempunitoutput == "°re"){
                                std::cout << "Your result is: " << RtoRe(firstnum) << "°Re";
                                loopbreaker = false;
                                break;
                            } else if (tempunitoutput == "romer" || tempunitoutput == "ro" || tempunitoutput =="°ro"){
                                std::cout << "Your result is: " << RtoRo(firstnum) << "°Ro";
                                loopbreaker = false;
                                break;
                            } else {
                                std::cout << "Please enter a valid unit: ";
                                std::cin >> tempunitoutput;
                            }
                        }
                        
                } else if(tempunitinput == "de" or tempunitinput == "desile" || tempunitinput == "°de"){
                        std::cout << "Please enter the unit the number must be converted into: ";
                        std::cin >> tempunitoutput;
                        while(true){
                            for(int i=0; i < tempunitoutput.length();i++){
                                tempunitoutput[i] = std::tolower(tempunitoutput[i]);
                            }
                            if(tempunitoutput == "celsius" || tempunitoutput == "c" || tempunitoutput == "°c"){
                                std::cout << "Your result is: " << DtoC(firstnum) << "°C";
                                loopbreaker = false;
                                break;
                            } else if (tempunitoutput == "fahrenheit" || tempunitoutput == "f" || tempunitoutput == "°f"){
                                std::cout << "Your result is: " << DtoF(firstnum) << "F";
                                loopbreaker = false;
                                break;
                            } else if (tempunitoutput == "kelvin" || tempunitoutput == "k"){
                                std::cout <<"Your result is: " << DtoK(firstnum) << "°R";
                                loopbreaker = false;
                                break;
                            } else if  (tempunitoutput == "rankine" || tempunitoutput == "ra"  || tempunitoutput == "°ra" || tempunitoutput == "°r" || tempunitoutput == "r"){
                                std::cout << "Your result is: " << DtoR(firstnum) << "°De";
                                loopbreaker = false;
                                break;
                            } else if (tempunitoutput == "newton" || tempunitoutput == "n" || tempunitoutput == "°n"){
                                std::cout << "Your result is: " << DtoN(firstnum) << "°N";
                                loopbreaker = false;
                                break;
                            } else if (tempunitoutput == "reaumur" || tempunitoutput == "re" || tempunitoutput == "°re"){
                                std::cout << "Your result is: " << DtoRe(firstnum) << "°Re";
                                loopbreaker = false;
                                break;
                            } else if (tempunitoutput == "romer" || tempunitoutput == "ro" || tempunitoutput =="°ro"){
                                std::cout << "Your result is: " << DtoRo(firstnum) << "°Ro";
                                loopbreaker = false;
                            } else {
                                std::cout << "Please enter a valid unit: ";
                                std::cin >> tempunitoutput;
                            }
                        }
                        
                }else if(tempunitinput == "n" or tempunitinput == "newton" || tempunitinput == "°n"){
                        std::cout << "Please enter the unit the number must be converted into: ";
                        std::cin >> tempunitoutput;
                        while(true){
                            for(int i=0; i < tempunitoutput.length();i++){
                                tempunitoutput[i] = std::tolower(tempunitoutput[i]);
                            }
                            if(tempunitoutput == "celsius" || tempunitoutput == "c" || tempunitoutput == "°c"){
                                std::cout << "Your result is: " << NtoC(firstnum) << "°C";
                                loopbreaker = false;
                                break;
                            } else if (tempunitoutput == "fahrenheit" || tempunitoutput == "f" || tempunitoutput == "°f"){
                                std::cout << "Your result is: " << NtoF(firstnum) << "F";
                                loopbreaker = false;
                                break;
                            } else if (tempunitoutput == "kelvin" || tempunitoutput == "k"){
                                std::cout <<"Your result is: " << NtoK(firstnum) << "°R";
                                loopbreaker = false;
                                break;
                            } else if  (tempunitoutput == "desile" || tempunitoutput == "de"  || tempunitoutput == "°d"){
                                std::cout << "Your result is: " << NtoD(firstnum) << "°De";
                                loopbreaker = false;
                                break;
                            } else if (tempunitoutput == "rankine" || tempunitoutput == "r" || tempunitoutput == "°r" || tempunitoutput == "ra" || tempunitoutput == "°ra"){
                                std::cout << "Your result is: " << NtoR(firstnum) << "°R";
                                loopbreaker = false;
                                break;
                            } else if (tempunitoutput == "reaumur" || tempunitoutput == "re" || tempunitoutput == "°re"){
                                std::cout << "Your result is: " << NtoRe(firstnum) << "°Re";
                                loopbreaker = false;
                                break;
                            } else if (tempunitoutput == "romer" || tempunitoutput == "ro" || tempunitoutput =="°ro"){
                                std::cout << "Your result is: " << NtoRo(firstnum) << "°Ro";
                                loopbreaker = false;
                                break;
                            } else {
                                std::cout << "Please enter a valid unit: ";
                                std::cin >> tempunitoutput;
                            }
                        }
                        
                }else if(tempunitinput == "re" or tempunitinput == "reamur" || tempunitinput == "°re"){
                        std::cout << "Please enter the unit the number must be converted into: ";
                        std::cin >> tempunitoutput;
                        while(true){
                            for(int i=0; i < tempunitoutput.length();i++){
                                tempunitoutput[i] = std::tolower(tempunitoutput[i]);
                            }
                            if(tempunitoutput == "celsius" || tempunitoutput == "c" || tempunitoutput == "°c"){
                                std::cout << "Your result is: " << RetoC(firstnum) << "°C";
                                loopbreaker = false;
                                break;
                            } else if (tempunitoutput == "fahrenheit" || tempunitoutput == "f" || tempunitoutput == "°f"){
                                std::cout << "Your result is: " << RetoF(firstnum) << "F";
                                loopbreaker = false;
                                break;
                            } else if (tempunitoutput == "kelvin" || tempunitoutput == "k"){
                                std::cout <<"Your result is: " << RetoK(firstnum) << "°R";
                                loopbreaker = false;
                                break;
                            } else if  (tempunitoutput == "desile" || tempunitoutput == "de"  || tempunitoutput == "°d"){
                                std::cout << "Your result is: " << RetoD(firstnum) << "°De";
                                loopbreaker = false;
                                break;
                            } else if (tempunitoutput == "rankine" || tempunitoutput == "r" || tempunitoutput == "°r" || tempunitoutput == "ra" || tempunitoutput == "°ra"){
                                std::cout << "Your result is: " << RetoR(firstnum) << "°N";
                                loopbreaker = false;
                                break;
                            } else if (tempunitoutput == "newton" || tempunitoutput == "n" || tempunitoutput == "°r"){
                                std::cout << "Your result is: " << RetoN(firstnum) << "°N";
                                loopbreaker = false;
                                break;
                            } else if (tempunitoutput == "romer" || tempunitoutput == "ro" || tempunitoutput =="°ro"){
                                std::cout << "Your result is: " << RetoRo(firstnum) << "°Ro";
                                loopbreaker = false;
                                break;
                            } else {
                                std::cout << "Please enter a valid unit: ";
                                std::cin >> tempunitoutput;
                            }
                        }
                        
                } else if(tempunitinput == "ro" or tempunitinput == "romer" || tempunitinput == "°ro"){
                        std::cout << "Please enter the unit the number must be converted into: ";
                        std::cin >> tempunitoutput;
                        while(true){
                            for(int i=0; i < tempunitoutput.length();i++){
                                tempunitoutput[i] = std::tolower(tempunitoutput[i]);
                            }
                            if(tempunitoutput == "celsius" || tempunitoutput == "c" || tempunitoutput == "°c"){
                                std::cout << "Your result is: " << RotoC(firstnum) << "°C";
                                loopbreaker = false;
                                break;
                            } else if (tempunitoutput == "fahrenheit" || tempunitoutput == "f" || tempunitoutput == "°f"){
                                std::cout << "Your result is: " << RotoF(firstnum) << "F";
                                loopbreaker = false;
                                break;
                            } else if (tempunitoutput == "kelvin" || tempunitoutput == "k"){
                                std::cout <<"Your result is: " << RotoK(firstnum) << "°R";
                                loopbreaker = false;
                                break;
                            } else if  (tempunitoutput == "desile" || tempunitoutput == "de"  || tempunitoutput == "°d"){
                                std::cout << "Your result is: " << RotoD(firstnum) << "°De";
                                loopbreaker = false;
                                break;
                            } else if (tempunitoutput == "rankine" || tempunitoutput == "r" || tempunitoutput == "°r" || tempunitoutput == "ra" || tempunitoutput == "°ra"){
                                std::cout << "Your result is: " << RotoR(firstnum) << "°N";
                                loopbreaker = false;
                                break;
                            } else if (tempunitoutput == "newton" || tempunitoutput == "n" || tempunitoutput == "°r"){
                                std::cout << "Your result is: " << RotoN(firstnum) << "°N";
                                loopbreaker = false;
                                break;
                            } else if (tempunitoutput == "reaumur" || tempunitoutput == "re" || tempunitoutput =="°re"){
                                std::cout << "Your result is: " << RotoRe(firstnum) << "°Re";
                                loopbreaker = false;
                                break;
                            } else {
                                std::cout << "Please enter a valid unit: ";
                                std::cin >> tempunitoutput;
                            }
                        }
                        
                } else {
                    std::cout << "Please enter a valid unit: ";
                    std::cin >> tempunitinput;
                }
            }
        } else {
            std::cin.clear();
            std::cin.ignore(100000, '\n');
            std::cout << "Please enter a valid number: ";
            std::cin >> firstnum;
        }
    }

    std::cout << "\nDo you want to use this program again? [Y/N]: ";
    std::cin >> yon;
    loopbreaker = true;
    while(true){
        if(yon == "Y" || yon == "y"){
            break;
        } else if (yon == "N" || yon == "n"){
            return 0;
            break;
        } else {
            std::cout << "please enter either Y or N: ";
            std::cin >> yon;
        }
    }

}
    return 0;
}