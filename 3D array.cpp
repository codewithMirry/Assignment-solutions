#include <stdio.h>
int main() {
	//declare a 3D array called myNum
	int myNum [3][2][3]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18};
	int i,j,k;
	//number of layers
	int layers = sizeof(myNum) / sizeof(myNum[0]);
	//number of rows
	int rows = sizeof(myNum[0]) / sizeof(myNum[0][0]);
	//number of columns
	int columns = sizeof(myNum[0][0]) / sizeof(myNum[0][0][0]);
	//loop through the array
	for(i=0;i<layers;i++) {
		printf(" layer %d: \n" , i);
		for(j=0;j<rows;j++) {
			for(k=0;k<columns;k++) {
				printf(" %d " , myNum[i][j][k]);
			}
			printf("\n"); //move to the next row
    	}
	    printf("\n"); //move to the next layer
   }

	return 0;
}