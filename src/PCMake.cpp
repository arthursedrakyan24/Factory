#include "all.hpp"

void BrandOfPC(PC object[1], PC all);
void CPUofPC(PC object[1], PC all);
void RAMofPC(PC object[1], PC all);
void HDDofPC(PC object[1], PC all);
void SSDofPC(PC object[1], PC all);
void GraphicCardofPC(PC object[1], PC all);

void PCMake(PC object[1], PC all){ //PCMake function is the most important function for creating the PC, this is the space where we give values to the important variables.
	std::string Brand, CPU, RAM, HDD, SSD, GraphicCard; //These are the variables, which we use to save the object array variables, because after new function the values of variables is being changed.
	int price; // Everytime depends on the choices into functions the price is being changed.
	BrandOfPC(object, all);
	price=800+object[0].price;
	Brand=object[0].Brand;
	CPUofPC(object, all);
	CPU=object[0].CPUtype;
	price+=object[0].price;
	RAMofPC(object, all);
	RAM=object[0].RAM;
	price+=object[0].price;
	HDDofPC(object, all);
	HDD=object[0].HDD;
	price+=object[0].price;
	SSDofPC(object,all);
	SSD=object[0].SSD;
	price+=object[0].price;
	GraphicCardofPC(object, all);
	GraphicCard=object[0].GraphicCard;
	price+=object[0].price; //This is the final price.
	std::cout<<"------------------------------------------------------------------------------\n";
	std::cout<<"Okay, we have constructed the PC, which you wants. Here is your PC's parameters.\n";
	std::cout<<"Brand: "<<Brand<<std::endl;
	std::cout<<"CPU: "<<CPU<<std::endl;
	std::cout<<"RAM: "<<RAM<<std::endl;
	std::cout<<"HDD: "<<HDD<<std::endl;
	std::cout<<"SSD: "<<SSD<<std::endl;
	std::cout<<"Graphic Card: "<<GraphicCard<<std::endl;
	std::cout<<"And with all this components your price is equal to "<<price<<"$.\n";
	std::cout<<"------------------------------------------------------------------------------\nWe will deliver it to you after 10 days. Nice to have a job with you! Bye.\n";
}

