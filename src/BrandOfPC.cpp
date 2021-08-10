#include "all.hpp"

void BrandOfPC(PC object[1],PC all){ //BrandOfPC function has been created for giving the "Brand" variable the value and changing the "price" variable value.
	std::cout<<"Which Brand of PC do you want to purchase?\n1) hp\n2) DELL\n3) Acer\n4) Asus\n";
	int answer;
	std::cin>>answer;
	switch(answer) {
		case 1:
			all.Brand="hp";
			all.price=all.price+150; //The value of "hp" brand is 150, because of it the "price" variable plusing his value by 150 . 
			break;
		case 2:
			all.Brand="DELL";
			all.price=all.price+50;
			break;
		case 3:
			all.Brand="Acer";
			all.price=all.price+100;
			break;
		case 4:
			all.Brand="Asus";
			break;
		default: // If the input number is not equal to 1, 2, 3, 4 the program will start the function since the beginning.
			std::cout<<"You have written the wrong number.\n";
			BrandOfPC(object,all);
	}
	object[0]=all; // Saving the changes in object, to array. If we don't do it we can't have the access to changed variables out of function.
}

