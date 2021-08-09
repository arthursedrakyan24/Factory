#include "all.hpp"

void SSDofPC(PC object[1], PC all){
	int answer;
	std::cout<<"What kind of SSD do you want?\n1) SATA\n2) M.2\n3) PCIe\n";
	std::cin>>answer;
	switch(answer){
		case 1:
			all.SSD="SATA";
			all.price=all.price+50;
			break;
		case 2:
			all.price=all.price+70;
			all.SSD="M.2";
			break;
		case 3:
			all.price=all.price+90;
			all.SSD="PCIe";
			break;
		default:
			std::cout<<"You've written the wrong number.";
			return SSDofPC(object,all);
		}
	object[0]=all;
}

