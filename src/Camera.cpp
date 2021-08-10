#include "all.hpp"

void CameraSM(Smartphone subject[1], Smartphone all){ //CameraSM function has been created for giving the "Camera" variable the value and changing the "price" variable value.
	int answer;
	std::cout<<"How much megapixel of camera  do you want?\n1) 8 MP\n2) 20 MP\n3) 40 MP\n";
	std::cin>>answer;
	switch(answer){
		case 1:
			all.Camera="8 MP";
			break;
		case 2:
			all.price=all.price+50; //The value of "8 MP" Camera is 8 MP, because of it the "price" variable plusing his value by 50 . 
			all.Camera="20 MP";
			break;
		case 3:
			all.price=all.price+150;
			all.Camera="40 MP";
			break;
		default: // If the input number is not equal to 1, 2, 3 the program will start the function since the beginning.	
			std::cout<<"You've written the wrong number.";
			return CameraSM(subject,all);
		}
	subject[0]=all; // Saving the changes in object, to array. If we don't do it we can't have the access to changed variables out of function.
}
