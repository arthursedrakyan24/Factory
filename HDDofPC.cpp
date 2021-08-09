#include "all.hpp"

void HDDofPC(PC object[1], PC all){
	int answer;
	std::cout<<"What kind of HDD do you want?\n1) 1 TB\n2) 2 TB\n3) 4 TB\n4) 8 TB\n";
	std::cin>>answer;
	switch(answer){
		case 1:
			all.HDD="1 TB";
			break;
		case 2:
			all.price=all.price+100;
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
		default:
			std::cout<<"You've written the wrong number.";
			return HDDofPC(object,all);
		}
	object[0]=all;
}

