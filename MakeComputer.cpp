#include "all.hpp"

void PCMake(PC object[1], PC all);
void MakeComputer(PC object[1]){
	int choice;
	std::cin>>choice;
	assert(choice==1 || choice==2); 
	switch(choice) {
		case 1:
			{
			PC newpc;
			PCMake(object, newpc);
			break;
			}
		case 2: 
			Notebook newnote;
	//		notemake();
			break;
	}
}

