#include <iostream>
#include <cstring>

char* reverse_string(char s[]){
	int len = strlen(s);
	int cnt = 0;
	char aux;

	while(cnt < (len-1-cnt)){
		aux = s[cnt];
		s[cnt] = s[len-1-cnt];
		s[len-1-cnt] = aux;

		cnt++;
	}
	return s;
}

int main(){
	int len = 20;
	char frase[len];

	std::cout << "Insira uma frase: ";
	std::cin.get(frase, len);
	std::cout << frase << std::endl;

	std::cout << "Frase invertida: " << std::endl;
        std::cout << reverse_string(frase) << std::endl;

	return 0;
}
