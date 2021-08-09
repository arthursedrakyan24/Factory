#include "all.hpp"

void GraphicCardofPC(PC object[1], PC all){
	int answer;
	std::cout<<"What kind of Graphic Card do you want?\n1) MSI GeForce RTX 3070\n2) Nvidia GeForce GTX 1660 Ti\n3) AMD Radeon RX 6800\n";
	std::cin>>answer;
	switch(answer){
		case 1:
			all.GraphicCard="MSI GeForce RTX 3070";
			all.price=all.price+100;
			break;
		case 2:
			all.price=all.price+50;
			all.GraphicCard="Nvidia GeForce GTX 1660 Ti";
			break;
		case 3:
			all.price=all.price+20;
			all.GraphicCard="AMD Radeon RX 6800";
			break;
		default:
			std::cout<<"You've written the wrong number.";
			return GraphicCardofPC(object,all);
		}
	object[0]=all;
}

