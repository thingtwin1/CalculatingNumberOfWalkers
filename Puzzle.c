#include <stdio.h>
#include <stdlib.h>

int main()
{
	
	int runIf = 0;			// the input value, runners that will run if seen a certain number
	int seen = 0;			// the input value, the number needed to get others to run

	int totalNeeded = 0;	// total number of runners needed to be added
	int runRN = 0;			// total number of runners at any given point 

	printf("Enter needed runners and will run: ");		// takes in user input 
	scanf("%d %d", &seen, &runIf);						// stores input 
	
	totalNeeded = seen + totalNeeded;					// first adds number of inital runners needed 
	runRN = seen + runIf;								// updates total of current number of runners
	
	while(seen != 1000){ 								// will stop program execution when input is 1000
	printf("Enter needed runners and will run: ");		// asks for input again 
	scanf("%d %d", &seen, &runIf);
	
	if ( seen == 1000){									// prints answer after last line of input
		break;
		}
	
	if ( runRN >= seen){								// calculates new number of runners to be added 
		runRN = runRN + runIf;
		continue;
		}
	
	if ( runRN < seen){									// calculates new number of runners to be added
		totalNeeded = (seen - runRN) + totalNeeded;
		runRN = runRN + runIf;
		continue; 
		}

	}
	printf("%d \n", totalNeeded);					// prints out how many new runners are required

	

return 0;
}
