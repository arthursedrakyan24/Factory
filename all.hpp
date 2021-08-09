#include <iostream>
#include <cassert>

class FabricProduct {
	private:
		std::string description="All the licenses in this product is currently engaged.\nMade in Armenia\n";
	public:
		std::string Brand;
		std::string getDescription();
};

class Computer: public FabricProduct {
	public:
		std::string CPUtype, RAM, HDD, SSD, GraphicCard;
};

class PC: public Computer {
	public:
		int price=0;
		void Offer(std::string answer);
};

class Smartphone: public FabricProduct {
	public:
		int price=0;
		std::string Platform, Memory, Camera;
};

void MakeComputer(PC*);
void MakeSmartphone(Smartphone*, Smartphone);
