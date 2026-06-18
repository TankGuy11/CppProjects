#include <iostream>
#include "convertfuncs.h"

//All conversions from Celsius
double CtoK(double a) {
    return a + 273.15;
}
double CtoF(double a){
    return (9*a)/5 + 32;
}
double CtoR(double a){
    return (9 * CtoK(a))/5;
}
double CtoD(double a){
    return ((100 - a) * 3)/2;
}
double CtoN(double a){
    return (a*33)/100;
}
double CtoRe(double a){
    return (a*4)/5;
}
double CtoRo(double a){
    return (a*21)/40 + 7.5;
}

//All conversions from Fahrenheit
double FtoC(double a){
    return ((a - 32) * 5)/9;
}
double FtoK(double a){
    return FtoC(a) + 273.15;
}
double FtoR(double a){
    return a + 459.67;
}
double FtoD(double a){
    return ((100 - FtoC(a))*3)/2;
}
double FtoN(double a){
    return ((a-32) * 11)/60;
}
double FtoRe(double a){
    return ((a-32)*4)/9;
}
double FtoRo(double a){
    return ((a - 32)*7)/24 + 7.5;
}

//All conversions from Kelvin
double KtoC(double a){
    return a - 273.15;
}
double KtoF(double a){
    return (KtoC(a) * 9)/5 + 32;
}
double KtoR(double a){
    return (a*9)/5;
}
double KtoD(double a){
    return ((100 - KtoC(a))*3)/2;
}
double KtoN(double a){
    return (KtoC(a)*33)/100;
}
double KtoRe(double a){
    return (KtoC(a)*4)/5;
}
double KtoRo(double a){
    return (KtoC(a)*21)/40 + 7.5;
}

//All conversions from Rankine
double RtoC(double a){
    return ((a - 491.67) * 5)/9;
}
double RtoF(double a){
    return (RtoC(a) * 9)/5 + 32;
}
double RtoK(double a){
    return (a*5)/9;
}
double RtoD(double a){
    return ((100 - RtoC(a))*3)/2;
}
double RtoN(double a){
    return (RtoC(a)*33)/100;
}
double RtoRe(double a){
    return (RtoC(a)*4)/5;
}
double RtoRo(double a){
    return (RtoC(a)*21)/40 + 7.5;
}

//All conversions from Reaumur
double RetoC(double a){
    return (a*5)/4;
}
double RetoF(double a){
    return (RetoC(a) * 9)/5 + 32;
}
double RetoK(double a){
    return RetoC(a) + 273.15;
}
double RetoD(double a){
    return ((100 - RetoC(a))*3)/2;
}
double RetoN(double a){
    return (RetoC(a)*33)/100;
}
double RetoR(double a){
    return (RetoK(a) * 9)/5;
}
double RetoRo(double a){
    return (RetoC(a)*21)/40 + 7.5;
}

//All conversions from Romer
double RotoC(double a){
    return ((a - 7.5) * 40)/21;
}
double RotoF(double a){
    return (RotoC(a) * 9)/5 + 32;
}
double RotoK(double a){
    return RotoC(a) + 273.15;
}
double RotoD(double a){
    return ((100 - RotoC(a))*3)/2;
}
double RotoN(double a){
    return (RotoC(a)*33)/100;
}
double RotoRe(double a){
    return (RotoC(a)*4)/5;
}
double RotoR(double a){
    return (RotoK(a) * 9)/5;
}

//All conversions from Desile
double DtoC(double a){
    return 100 - 2*(a/3);
}
double DtoK(double a){
    return DtoC(a) + 273.15;
}
double DtoF(double a){
    return (9/5) * DtoC(a) + 32;
}
double DtoR(double a){
    return DtoK(a) * (9/5);
}
double DtoN(double a){
    return DtoC(a) * (33/100);
}
double DtoRe(double a){
    return DtoC(a) * (4/5);
}
double DtoRo(double a){
    return DtoC(a) * (21/40) +7.5;
}

//All conversions from Newton
double NtoC(double a){
    return a * (100/33);
}
double NtoK(double a){
    return NtoC(a) + 273.15;
}
double NtoF(double a){
    return NtoC(a) * (9/5) + 32;
}
double NtoR(double a){
    return NtoK(a) * (9/5);
}
double NtoD(double a){
    return (100 - NtoC(a)) * (3/2);
}
double NtoRe(double a){
    return NtoC(a) * (33/100);
}
double NtoRo(double a){
    return NtoC(a) * (21/40) + 7.5;
}