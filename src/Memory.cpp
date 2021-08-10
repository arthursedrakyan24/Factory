#include "all.hpp"

void MemorySM(Smartphone subject[1], Smartphone all){ //MemorySM function has been created for giving the "Memory" variable the value and changing the "price" variable value.
	int answer;
	std::cout<<"What kind of memory storage do you want?\n1) 8 GB\n2) 16 GB\n3) 32 GB\n4) 64 GB\n";
	std::cin>>answer;
	switch(answer){
		case 1:
			all.Memory="8 GB";
			break;
		case 2:
			all.price=all.price+50; //The value of "16 GB" Camera is 50, because of it the "price" variable plusing his value by 50 . 
			all.Memory="16 GB";
			break;
		case 3:
			all.price=all.price+100;
			all.Memory="32 GB";
			break;
		case 4:
			all.price=all.price+200;
			all.Memory="64 GB";
			break;
		default: // If the input number is not equal to 1, 2, 3, 4 the program will start the function since the beginning.	
			std::cout<<"You've written the wrong number.";
			return MemorySM(subject,all);
		}
	subject[0]=all; // Saving the changes in object, to array. If we don't do it we can't have the access to changed variables out of function.
}
