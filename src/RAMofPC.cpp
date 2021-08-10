#include "all.hpp"

void RAMofPC(PC object[1], PC all){ //RAMofPC function has been created for giving the "RAM" variable the value and changing the "price" variable value.
	int answer;
	std::cout<<"What kind of RAM do you want?\n1) 4 GB\n2) 8 GB\n3) 16 GB\n4) 32 GB\n";
	std::cin>>answer;
	switch(answer){
		case 1:
			all.RAM="4 GB";
			break;
		case 2:
			all.price=all.price+100; //The value of "8 GB" RAM is 100, because of it the "price" variable plusing his value by 100 . 
	
			all.RAM="8 GB";
			break;
		case 3:
			all.price=all.price+200;
			all.RAM="16 GB";
			break;
		case 4:
			all.price=all.price+300;
			all.RAM="32 GB";
			break;
		default: // If the input number is not equal to 1, 2, 3, 4 the program will start the function since the beginning.	
			std::cout<<"You've written the wrong number.";
			return RAMofPC(object,all);
		}
	object[0]=all; // Saving the changes in object, to array. If we don't do it we can't have the access to changed variables out of function.
}
