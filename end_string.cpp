#include <iostream>
#include <cstring>

char* ultimal_letra(char s[], char r[]){
    int i=0;
    while(s[i]){
        r[i] = ' ';
        i++;
    }
    int tam = i;
    i=0;
    int j=0;
    while(s[i]){
        if(s[i] == ' '){
            r[j]=s[i-1];
            r[j+1]='.';
            j= j+2;
        }
        i++;
    }
    r[j] = s[i];
    return r;
}

int main(){

    int len = 50;
    char in_string[len];

    char out_string[len];
    std::cout << "Este programa retorna a ultima letra de cada palavra de uma string!" << std::endl;
    std::cout << "Insira uma string: " << std::endl;
    std::cin.get(in_string, len);

    ultimal_letra(in_string, out_string);

    std::cout << out_string << std::endl;

    return 0;
}
