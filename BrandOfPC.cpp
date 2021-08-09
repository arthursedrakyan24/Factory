#include "all.hpp"

void BrandOfPC(PC object[1],PC all){
	std::cout<<"Which Brand of PC do you want to purchase?\n1) hp\n2) DELL\n3) Acer\n4) Asus\n";
	int answer;
	std::cin>>answer;
	switch(answer) {
		case 1:
			all.Brand="hp";
			all.price=all.price+150;
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
		default:
			std::cout<<"You have written the wrong number.\n";
			BrandOfPC(object,all);
	}
	object[0]=all;
}

