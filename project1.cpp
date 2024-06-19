#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void NinjaPasswordGeneration(int N)
{
	int randomNo = 0;

	srand((int)(time(NULL)));

	char numbers[] = "0123456789";

	char LowerCase[] = "abcdefghijklmnoqprstuvwyzx";

	char UpperCase[] = "ABCDEFGHIJKLMNOQPRSTUYWVZX";

	char SpecialChar[] = "!@#$^&*?";

	char NinjaPassword[N];

	
	randomNo = rand() % 4;
   	
  	int i=0;
	while (i < N) {

	if (randomNo == 1) {
		NinjaPassword[i] = numbers[rand() % 10];
		randomNo = rand() % 4;
		printf("%c", NinjaPassword[i]);
	}
	
	else if (randomNo == 2) {
		NinjaPassword[i] = SpecialChar[rand() % 8];
		randomNo = rand() % 4;
		printf("%c", NinjaPassword[i]);
	}
	
	else if (randomNo == 3) {
		NinjaPassword[i] = LowerCase[rand() % 26];
		randomNo = rand() % 4;
		printf("%c", NinjaPassword[i]);
	}
	
	else {
		NinjaPassword[i] = UpperCase[rand() % 26];
		randomNo = rand() % 4;
		printf("%c", NinjaPassword[i]);
	}
      	i++;
	}
}


int main()
{
	int n;
	printf("Hi Ninja,enter length of the Password: ");
	scanf("%d",&n);
	printf("Ninja, your password is:");

	NinjaPasswordGeneration(n); printf("\n\n");

	while(1){
  		int num;
  		printf("Ninja,press 1 to generate a new password or press 0 to exit: ");
  		scanf("%d",&num);

  		if(num==1){
  		printf("Your new password is: ") ; NinjaPasswordGeneration(n); printf("\n\n");
  		}

  		else{
    	printf("You have exited Ninja!");
      	return 0;
  		}   
    }
}
