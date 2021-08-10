#include "all.hpp"

void HDDofPC(PC object[1], PC all){ //HDDofPC function has been created for giving the "HDD" variable the value and changing the "price" variable value.
	int answer;
	std::cout<<"What kind of HDD do you want?\n1) 1 TB\n2) 2 TB\n3) 4 TB\n4) 8 TB\n";
	std::cin>>answer;
	switch(answer){
		case 1:
			all.HDD="1 TB";
			break;
		case 2:
			all.price=all.price+100; //The value of "2 TB" HDD is 100, because of it the "price" variable plusing his value by 100 . 
	
			all.HDD="2 TB";
			break;
		case 3:
			all.price=all.price+200;
			all.HDD="4 TB";
			break;
		case 4:
			all.price=all.price+300;
			all.HDD="8 TB";
			break;
		default: // If the input number is not equal to 1, 2, 3, 4 the program will start the function since the beginning.	
			std::cout<<"You've written the wrong number.";
			return HDDofPC(object,all);
		}
	object[0]=all; // Saving the changes in object, to array. If we don't do it we can't have the access to changed variables out of function.
}

