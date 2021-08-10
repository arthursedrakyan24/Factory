#include "all.hpp"

void PlatformSM(Smartphone subject[1], Smartphone all);
void MemorySM(Smartphone subject[1], Smartphone all);
void CameraSM(Smartphone subject[1], Smartphone all);

void MakeSmartphone(Smartphone subject[1], Smartphone all){
	std::string Platform, Memory, Camera;
	int price;	
	PlatformSM(subject, all);
	price=200+subject[0].price;
	Platform=subject[0].Platform;
	MemorySM(subject,all);
	price+=subject[0].price;
	Memory=subject[0].Memory;
	CameraSM(subject, all);
	price+=subject[0].price;
	Camera=subject[0].Camera;
	std::cout<<"------------------------------------------------------------------------------\n";
	std::cout<<"Okay, we have constructed the smartphone, which you wants. Here is your smartphone's parameters.\n";
	std::cout<<"Platform: "<<Platform<<std::endl;
	std::cout<<"Memory: "<<Memory<<std::endl;
	std::cout<<"Camera: "<<Camera<<std::endl;
	std::cout<<"And with all this components your price is equal to "<<price<<"$.\n";
	std::cout<<"------------------------------------------------------------------------------\nWe will deliver it to you after 10 days. Nice to have a job with you! Bye.\n";
}



