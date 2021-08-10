#include "all.hpp"

int main(){
	PC object[1];	//Making the array by the name "object", which type is "PC", "PC" is the class name, which is the child of "Computer" class.
	Smartphone subject[1]; 	//Making the array by the name "subject", which type is "Smartphone", "Smartphone" is the class name, which is the child of "Computer" class.
        Smartphone newsp; //Making the object of "Smartphone" class.
	std::string answer, bye, line; //Declaring the "string" type variables and giving them values.
	line="--------------------------------------------------------\n";
	bye="It was a pleasure to have a work with you!.\n";
	std::cout<<"Hello dear Client, nice to see you in our factory!\nWe construct computers and smartphones, which can serve you many years.\n"<<line<<"Do you want to purchase any of our products?(y/n)";	
	std::cin>>answer;
	std::cout<<line;
	//Making the statement to know, is the user want to continue the using of program.
	if(answer=="n"){
		std::cout<<bye;
		exit;
	}
	if(answer=="y"){
		std::cout<<"What kind of the product do you want to buy?\n1) Computer\n2)Smartphone\n"; //In this time user is choosing in what way program must be work. Thanks to switch:case we define that first way is the MakeComputer function, which works with "Computer" and "PC" classes. Second way is the MakeSmartphone function, which is works with the "Smartphone" class.
		int choice;
		std::cin>>choice;
		assert(choice==1 || choice==2);
		std::cout<<line;
		switch(choice) {
			case 1:
				std::cout<<"Okay, but we have two types of computer, personal computer and notebook. What type do you want?\n1)PC\n2)Notebook\n";
				MakeComputer(object);
				break;
			case 2:
				MakeSmartphone(subject, newsp);
				break;
		}	
	}
}
