#include "MutantStack.hpp"

int main(void){
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);
	std::cout << "\n";
	MutantStack<int> mutantStack;
	mutantStack.push(1);
	mutantStack.push(2);
	mutantStack.push(3);
	mutantStack.push(4);
	std::cout << "size: " << mutantStack.size() << "\n";
	std::cout << "Top element: " <<  mutantStack.top() << "\n";
	mutantStack.pop();
	std::cout << "After pop: \n";
	std::cout << "size: " << mutantStack.size() << "\n";
	MutantStack<int>::iterator itt = mutantStack.begin();
	MutantStack<int>::iterator itte = mutantStack.end();
	++itt;
	--itt;
	std::cout << "Iter: \n";
	while (itt != itte)
	{
		std::cout << *itt << std::endl;
		++itt;
	}
	return 0;
}