#include <iostream>
#include <cstring>

bool is_substring(char s[], char r[]){
	int i = 0;
	int j = 0;
	bool result = false;

	while (s[i]){
		j = 0;
		while (r[j]){
			if (s[i] == r[j]){ //BUG -> s[] sendo indexado errado
				result = true;
				i++;
				j++;
			}else{
				result = false;
				i++;
				j++;
				break;
			}
		}
		if (result == true){
			break;
		}
	}
	if (result == true){
		return true;
	}else{
		return false;
	}
}

int main (){
	int len = 50;
	char s1[len];
	char s2[len];

	std::cout << "Esse programa verifica se uma string s2 esta contido outra string s1." << std::endl;

	std::cout << "Insira uma string: " << std::endl;
	std::cin.get(s1,len);

	std::cout << "Insira uma possivel substring: " << std::endl;
	std::cin >> s2;

	if (is_substring(s1,s2) == true){
		std::cout << s2 << " eh substring de " << s1 << std::endl;
	}else{
		std::cout << s2 << " nao eh substring de " << s1 << std::endl;
	}

	return 0;
}
