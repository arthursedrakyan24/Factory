#include <iostream>
#include <cassert>

class FabricProduct {	//FabricProduct is the parent of all classes, it has the "Brand" and "Description" variables.
	private:
		std::string description="All the licenses in this product is currently engaged.\nMade in Armenia\n";
	public:
		std::string Brand;
		std::string getDescription(); //This function is the getter of "description" variable.
};

class Computer: public FabricProduct { //Computer is the child of the FabricProduct and parent of PC class, it has the "CPUype", "RAM", "HDD", "SSD" and "GraphicCard" variables.
	public:
		std::string CPUtype, RAM, HDD, SSD, GraphicCard;
};

class PC: public Computer { //PC is the child of Computer. It has the variable "price".
	public:
		int price=0;
};

class Smartphone: public FabricProduct { //Smartphone is the child of FabricProduct. It has the "price", "Platform", "Memory" and "Camera" variables.
	public:
		int price=0;
		std::string Platform, Memory, Camera;
};

void MakeComputer(PC*); //MakeComputer is the function, which we use in the "main" function, with the concept of program we can say that it starts the computer building. For argument it needs the reference to the "PC" class type variable.
void MakeSmartphone(Smartphone*, Smartphone); //MakeComputer is the function, which we use in the "main" function, with the concept of program we can say that it starts the smartphone building. For argument it needs the reference to the "Smartphone" class type object and merely the "Smartphone" class type object.
