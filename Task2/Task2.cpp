#include <iostream>
#include <string>

std::string name = "";
std::string answer = "";
std::string sYes = "yes";
std::string sNo = "no";
int age;



int main() {
	std::cout << "What is your name? ";
	std::getline(std::cin, name);
	
	std::cout << "How old are you " << name << "? ";
	std::cin >> age;
	std::cin.ignore();
	std::cout << "Do you drink coffee? ";
	std::getline(std::cin, answer);
	

	
	if ((answer.compare(sYes)) == 0) {
		std::cout << '\n' << "Your name is " << name << '\n' << "you are "<< age << " years old" << '\n' << "and you like coffee" << std::endl;
	}
	
	
	if ((answer.compare(sNo)) == 0) {
		std::cout << '\n' << "Your name is " << name << '\n' << age << " years old" << '\n' << "and you don't enjoy coffee" << std::endl;
	}
	
	return 0;

}