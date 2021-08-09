#include "all.hpp"

void Notebook::Offer(std::string answer){
			std::cout<<"If you pay 20$ more we will give you high quality laptop bag. Do you want?(y/n)";
			std::cin>>answer;
			if(answer=="y"){
				price=price+20;
			}
}




