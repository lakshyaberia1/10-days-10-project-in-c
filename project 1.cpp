#include <stdio.h> 
#include<stdlib.h>
#include<time.h>
/*here stdlib.h is  file in c which use in this programe to compiler to guess the numeer between 1 to 100
it have many other use such as :
1. memory allocation and deallocation.
2. process control.
3. type conversion.
4. scarching and sorting.
5. mathamatical function(abs(int n),div).
6. enviromental access.
7. program utilities.
8. macros and constants.
9.data type. 
*/
int main(){

int num,attp=0;
srand(time(0));
/*s rand is a library function of stdlib.h which help which seed the random number 
here time(0) is used which is a library fuction of time.h which help to take current 
calender time in second here it is used with srand to different value of
 randam numberevery time*/

int random = rand()% 100+1;
//here we had used rand function to take random number from 1 to 100

 
printf("welcome to number gussing game ");
printf("\n gusse the number from 1 to 100 please");
printf("enter your guess:");
do
{
	
	scanf("%d",&num);
	attp++;
	if(num>random)
	{
		printf("\n smaller number plz:");
		
	}
	else if(num<random){
		printf("\n greater number plz:");}
		else if(num=random)
		{
			printf("congratulation you guess it right in %d time\n",attp);
			
		}
	
	
}while(num!=random);
return 0;


}

