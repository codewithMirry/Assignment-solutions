#include <stdio.h>
int main () {
	
	//declare the array
	int myNumbers[]={1,2,3,4,5,6,7,8,9,10};
	int i;
	
	//find the number of elements in the array
	int length=sizeof(myNumbers) / sizeof(myNumbers[0]);
	
	//loop through the array
	for(i=0; i<length; i++) {
		printf("%d\n", myNumbers[i]);
	}
	return 0;
}



#include <stdio.h>
int main () {
	
	//array storing different ages
	int ages[]={20,22,18,35,48,26,87,70};
	
	//declaring variables
	float average;
	int sum=0;
	int i;
	
	//get the length of the array
	int length=sizeof(ages)/sizeof(ages[0]);
	
	//loop through the array
	for(i=0; i<length; i++) {
		sum=sum+ages[i];           //by doing this we have calculated the total sum 
	}
	
	//calculate the average
	average=sum/length;
	
	//print the average value
	printf("The average value is %.2f\n", average);
	
	return 0;
	
}
