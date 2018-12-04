#include <iostream>

int strlen(char s[]){
	int cnt;
	while (s[cnt]!='\0'){
		cnt++;
	}
	return cnt;
}

int main(){
	char nome[10];
	std::cout << "Insira um string: " << std::endl;
	std::cin >> nome;
	std::cout << "Minha string tem: " << strlen(nome) << std::endl;

	return 0;
}
