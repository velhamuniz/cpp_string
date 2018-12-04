#include <iostream>

char* change_str_case(char s[]){
	int cnt = 0;

	while (s[cnt] != '\0'){
		if ((s[cnt] >= 'a') && (s[cnt] <= 'z')){
			s[cnt] = s[cnt] - 32;
		}
		else if ((s[cnt] >= 'A') && (s[cnt] <= 'Z')){
			s[cnt] = s[cnt] + 32;
		}
		cnt++;
	}
	return s;
}

int main (){
	int len = 50;
	char frase[len];

	std::cout << "Esse programa muda letras minusculas para maiuscula e vice-versa!" << std::endl;
	std::cout << "Insira uma frase: " << std::endl;
	std::cin.get(frase,len);
	std::cout << "Frase de saida:" << change_str_case(frase) << std::endl;

	return 0;
}
