#include <iostream>
#include <cstring>

bool is_substring(char s[], char r[]){
	int len_s = strlen(s);
	int len_r = strlen(r);

	bool result = false;

	for (int i = 0; i < len_s; i++){
		for (int j = 0; j < len_r; j++){
			if (s[i] == r[j]){ //BUG -> s[] sendo indexado errado
				result = true;
			}else{
				result = false;
				break;
			}
		}
		if (result = true){
			return true;
		}
	}
	return false;
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

	std::cout << s2 << " eh substring de " << s1 << ": " << is_substring(s1,s2) << std::endl;

	return 0;
}
