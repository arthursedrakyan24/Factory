#include "all.hpp"

void PlatformSM(Smartphone subject[1], Smartphone all){ //PlatformSM function has been created for giving the "Platform" variable the value and changing the "price" variable value.
	int answer;
	std::cout<<"What kind of platform do you want?\n1) Android\n2) IOS\n";
	std::cin>>answer;
	switch(answer){
		case 1:
			all.Platform="Android";
			all.price=all.price+50;//The value of "Android" Platform is 50, because of it the "price" variable plusing his value by 50 .	
			break;
		case 2:
			all.price=all.price+200;
			all.Platform="IOS";
			break;
		default:// If the input number is not equal to 1, 2 the program will start the function since the beginning.	
			std::cout<<"You've written the wrong number.";
			return PlatformSM(subject,all);
		}
	subject[0]=all; // Saving the changes in object, to array. If we don't do it we can't have the access to changed variables out of function.
}
}

