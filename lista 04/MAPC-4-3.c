#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

double soma(double a, double b){
    return a + b;
}
double subtracao(double a, double b){
    return a - b;
}
double multiplicacao(double a, double b){
    return a * b;
}
double divisao(double a, double b){
    return a / b;
}
int main(){
    setlocale(LC_ALL, "");
    
    return 0;
}