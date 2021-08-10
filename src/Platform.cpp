#include "all.hpp"

void PlatformSM(Smartphone subject[1], Smartphone all){
	int answer;
	std::cout<<"What kind of platform do you want?\n1) Android\n2) IOS\n";
	std::cin>>answer;
	switch(answer){
		case 1:
			all.Platform="Android";
			all.price=all.price+50;
			break;
		case 2:
			all.price=all.price+200;
			all.Platform="IOS";
			break;
		default:
			std::cout<<"You've written the wrong number.";
			return PlatformSM(subject,all);
		}
	subject[0]=all;
}

