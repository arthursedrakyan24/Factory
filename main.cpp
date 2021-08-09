#include "all.hpp"

int main(){
	PC object[1];
	std::string answer, bye, line;
	line="--------------------------------------------------------\n";
	bye="It was a pleasure to have a work with you!.\n";
	std::cout<<"Hello dear Client, nice to see you in our factory!\nWe construct computers and smartphones, which can serve you many years.\n"<<line<<"Do you want to purchase any of our products?(y/n)";	
	std::cin>>answer;
	std::cout<<line;
	if(answer=="n"){
		std::cout<<bye;
		exit;
	}
	if(answer=="y"){
		std::cout<<"What kind of the product do you want to buy?\n1) Computer\n2)Smartphone\n";
		int choice;
		std::cin>>choice;
		assert(choice==1 || choice==2);
		std::cout<<line;
		switch(choice) {
			case 1:
				std::cout<<"Okay, but we have two types of computer, personal computer and notebook. What type do you want?\n1)PC\n2)Notebook\n";
				MakeComputer(object*);
				break;
			case 2:
				MakeSmartphone();
				break;
		}	
	}
}
