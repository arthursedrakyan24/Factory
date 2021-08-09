#include "all.hpp"

void CameraSM(Smartphone subject[1], Smartphone all){
	int answer;
	std::cout<<"How much megapixel of camera  do you want?\n1) 8 MP\n2) 20 MP\n3) 40 MP\n";
	std::cin>>answer;
	switch(answer){
		case 1:
			all.Camera="8 MP";
			break;
		case 2:
			all.price=all.price+50;
			all.Camera="20 MP";
			break;
		case 3:
			all.price=all.price+150;
			all.Camera="40 MP";
			break;
		default:
			std::cout<<"You've written the wrong number.";
			return CameraSM(subject,all);
		}
	subject[0]=all;
}
