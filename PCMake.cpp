#include "all.hpp"

void BrandOfPC(PC object[1], PC all);
void CPUofPC(PC object[1], PC all);
void PCMake(PC object[1], PC all){
	std::string Brand, CPU;
	int price;
	BrandOfPC(object, all);
	price=800+object[0].price;
	Brand=object[0].Brand;
	CPUofPC(object, all);
	CPU=object[0].CPUtype;
	price+=object[0].price;
	
}

