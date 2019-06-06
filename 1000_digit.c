/* A program to find largest multiplication of thirteen adjacent digits in a 1000 digit number */
/* A program to multiply thirteen adjacent numbers and finding maximum out of them */
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

/* Main function */
int main(void)
{
	clock_t start, end;	// Defining variables to measure time
	start = clock();	// Assigning starting time
	char number[1001] = "7316717653133062491922511967442657474235534919493496983520312774506326239578318016984801869478851843858615607891129494954595017379583319528532088055111254069874715852386305071569329096329522744304355766896648950445244523161731856403098711121722383113622298934233803081353362766142828064444866452387493035890729629049156044077239071381051585930796086670172427121883998797908792274921901699720888093776657273330010533678812202354218097512545405947522435258490771167055601360483958644670632441572215539753697817977846174064955149290862569321978468622482839722413756570560574902614079729686524145351004748216637048440319989000889524345065854122758866688116427171479924442928230863465674813919123162824586178664583591245665294765456828489128831426076900422421902267105562632111110937054421750694165896040807198403850962455444362981230987879927244284909188845801561660979191338754992005240636899125607176060588611646710940507754100225698315520005593572972571636269561882670428252483600823257530420752963450";
	unsigned long largest = 0, mul = 0;	// unsigned long for accomodating huge numbers.
	int i = 0;
	while (number[i+12] != '\0')		// until the end of string
	{
		/* Check if any one of thirteen numbers are zero, if so then skip ahead */
		if ((number[i] == '0') || (number[i+1] == '0') 
			|| (number[i+2] == '0') || (number[i+3] == '0')  
                        || (number[i+4] == '0') || (number[i+5] == '0')
                        || (number[i+6] == '0') || (number[i+7] == '0')  
                        || (number[i+8] == '0') || (number[i+9] == '0')  
                        || (number[i+10] == '0') || (number[i+11] == '0')
                        || (number[i+12] == '0'))
		{
			i++;	// skipping ahead
		}
		else
		{
			mul = (unsigned long) (number[i] - '0') * (number[i+1] - '0') * 
			(number[i+2] - '0') * (number[i+3] - '0') 
			* (number[i+4] - '0') * (number[i+5] - '0') 
			* (number[i+6] - '0') * (number[i+7] - '0') 
			* (number[i+8] - '0') * (number[i+9] - '0') 
			* (number[i+10] - '0') * (number[i+11] - '0')
			* (number[i+12] - '0');
		}
		/* If the mul is greater than largest, then let largest be mul */
		if (mul > largest)
			largest = mul;
		i++;	// Move ahead
	}
	/* Print the answer */
	printf("The largest consequetive digit multiplication is %ld.\n", largest);
	end = clock();		//Assigning end time

	/* Printing CPU time utilized */
	printf("Total CPU time: %lf\n", ((double) (end - start)) / CLOCKS_PER_SEC);
	return 0;
}
