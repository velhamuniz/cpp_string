#include <iostream>

int* char_counter(char s[], int vector[]){
	int i = 0;
	char aux = 'a';
	while (s[i] != '\0'){
		for (int j = 0; j < 26; j++){
			if (s[i] == (aux+j)){
				vector[j]++;
			}
		}
		i++;
	}
	return vector;
}

int main () {
	int len = 50;
	char frase[len];
	int char_cnt[26];

	for (int i = 0; i < 26; i++){
		char_cnt[i] = 0;
	}

	std::cout << "Este programa contabiliza as letras minusculas de uma string!" << std::endl;
	std::cout << "Insira uma string: " << std::endl;
	std::cin.get(frase, len);

	char_counter(frase,char_cnt);

	char aux;
	for (int i = 0; i < 26; i++){
		aux = 'a'+i;
		std::cout << aux << ": "  << char_cnt[i] << std::endl;
	}


	return 0;
}
