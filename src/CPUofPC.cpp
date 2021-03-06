#include "all.hpp"

void CPUofPC(PC object[1], PC all){ //CPUofPC function has been created for giving the "CPUtype" variable the value and changing the "price" variable value.
	int answer;
	std::cout<<"What kind of CPU do you want?\n1) Intel core i3\n2) Intel core i5\n3) Intel core i7\n4) Intel core i9\n";
	std::cin>>answer;
	switch(answer){
		case 1:
			all.CPUtype="Intel core i3";
			break;
		case 2:
			all.price=all.price+100; //The value of "Intel core i5" CPUtype is 100, because of it the "price" variable plusing his value by 150 . 	
			all.CPUtype="Intel core i5";
			break;
		case 3:
			all.price=all.price+200;
			all.CPUtype="Intel core i7";
			break;
		case 4:
			all.price=all.price+300;
			all.CPUtype="Intel core i9";
			break;
		default: // If the input number is not equal to 1, 2, 3, 4 the program will start the function since the beginning.
			std::cout<<"You've written the wrong number.";
			return CPUofPC(object,all);
		}
	object[0]=all; // Saving the changes in object, to array. If we don't do it we can't have the access to changed variables out of function.
}

