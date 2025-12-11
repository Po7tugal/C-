#include <iostream>

int soma(int n1, int n2) {
    return (n1+n2);
}

int subtracao(int n1, int n2) {
    return (n1-n2);
}



int multiplicacao(int n1, int n2) {
    return (n1*n2);
}


int divisao(int n1, int n2) {
    if (n2==0){
        return 0;
    }
    return (n1/n2);
}


int main() {
    // most
    std::cout << "\nO resultado da soma e: " << soma(2,3);
    std::cout << "\nO resultado da subtracao e: " << subtracao(2,3);
    std::cout << "\nO resultado da multiplicacao e: " << multiplicacao(2,3);
    std::cout << "\nO resultado da divisao e: " << divisao(2,3);

    return 0;
}


