#include "MutantStack.hpp"

int main(){
	MutantStack<int> mutant;
	int i = 0;
	
	while (++i <= 10)
		mutant.push(i * 100);
	std::cout << mutant.top() << std::endl;
	std::cout << mutant.size() << std::endl;
	mutant.pop();
	std::cout << mutant.size() << std::endl;

	MutantStack<int>::iterator iterator = mutant.begin();
	++iterator;
	std::cout << *iterator << std::endl;
	++iterator;
	std::cout << *iterator << std::endl;

	return 0;
}