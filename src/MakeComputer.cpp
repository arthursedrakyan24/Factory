#include "all.hpp"

void PCMake(PC *object, PC all);
void notemake(PC *object, PC all);
void MakeComputer(PC *object){ //During this function computer want to know, what type of computer you want to make, it means it wants to know in what way to run.
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
			PC newnote;
			notemake(object, newnote);
			break;
	}
}
