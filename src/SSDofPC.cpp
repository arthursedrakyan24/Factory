#include "all.hpp"

void SSDofPC(PC object[1], PC all){ //SSDofPC function has been created for giving the "SSD" variable the value and changing the "price" variable value.
	int answer;
	std::cout<<"What kind of SSD do you want?\n1) SATA\n2) M.2\n3) PCIe\n";
	std::cin>>answer;
	switch(answer){
		case 1:
			all.SSD="SATA";
			all.price=all.price+50; //The value of "SATA" SSD is 50, because of it the "price" variable plusing his value by 50 . 
			break;
		case 2:
			all.price=all.price+70;
			all.SSD="M.2";
			break;
		case 3:
			all.price=all.price+90;
			all.SSD="PCIe";
			break;
		default: // If the input number is not equal to 1, 2, 3, 4 the program will start the function since the beginning.
			std::cout<<"You've written the wrong number.";
			return SSDofPC(object,all);
		}
	object[0]=all; // Saving the changes in object, to array. If we don't do it we can't have the access to changed variables out of function.
}
