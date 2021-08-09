#include "all.hpp"

void RAMofPC(PC object[1], PC all){
	int answer;
	std::cout<<"What kind of RAM do you want?\n1) 4 GB\n2) 8 GB\n3) 16 GB\n4) 32 GB\n";
	std::cin>>answer;
	switch(answer){
		case 1:
			all.RAM="4 GB";
			break;
		case 2:
			all.price=all.price+100;
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
		default:
			std::cout<<"You've written the wrong number.";
			return RAMofPC(object,all);
		}
	object[0]=all;
}

