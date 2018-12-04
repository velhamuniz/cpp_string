#include <iostream>

char* get_initials(char s[], char r[]){
    int i = 0;

    return r;
}

int main(){

    int len = 50;
    char in_string[len];
    char out_string[len];

    std::cout << "Este programa retorna as inicias de cada palavra de uma string!" << std::endl;
    std::cout << "Insira uma string: " << std::endl;
    std::cin.get(in_string, len);

    get_initials(in_string, out_string);

    std::cout << out_string << std::endl;

    return 0;
}
