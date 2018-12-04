#include <iostream>
#include <cstring>

char* remove_space(char s[]){
	int i = 0;
	int j = 0;

	while(s[i]){
		if (s[i] != ' '){
			s[j] = s[i];
			j++;
		}
		i++;
	}
	s[j] = '\0';

	return s;
}

bool palindromo_com_espaco(char s[]){
	int len = strlen(s);
	int cnt_inv = len - 1;

	for (int cnt = 0; cnt < (len -1); cnt++ ){
		if(s[cnt] != s[cnt_inv]){
			return false;
		}
		cnt_inv--;
	}

	return true;
}

bool palindromo_sem_espaco(char s[]){
	remove_space(s);

	int len = strlen(s);
	int cnt_inv = len - 1;
	for (int cnt = 0; cnt < (len -1); cnt++){
		if (s[cnt] != s[cnt_inv]){
			return false;
		}
		cnt_inv--;
	}

	return true;
}

int main () {
	int len = 50;
	char frase[50];

	std::cout << "Este programa eh um detecotr de palindromos: " << std::endl;

	std::cout << "Insira uma palavra ou frase: " << std::endl;
	std::cin.get(frase, len);

	std::cout << "Considerando os espacos, '" << frase <<"' eh um palindromo? " << palindromo_com_espaco(frase) << std::endl;

	std::cout << "Desconsiderando os espacos, '" << frase << "' eh um palindromo? " <<  palindromo_sem_espaco(frase) << std::endl;

	return 0;
}
