#include <iostream>

char* get_initials(char s[], char r[]){
    int i = 0;

    while(s[i]){
        r[i] = ' ';
        i++;
    }

    i = 0;
    int  j = 0;
    while(s[i]){
        if(i == 0){
            r[j] = s[i];
            r[j+1] = '.';
	    r[j+2] = ' ';
            i++;
	    j = j + 3;
        }else{
            if(s[i] == ' '){
                r[j] = s[i+1];
		r[j+1] = '.';
		r[j+2] = ' ';
		j = j + 3;
            }
	}
	i++;
    }
    r[j] = '\0';
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
