// arrays: 2D array
#include <stdio.h>//length(),printf()
int main(){
	int i,j;
	int marks[2][3]={
	{40,10,20},
	{50,80,70}
	};
	for(i=0;i<2;i++){//rows
	for(j=0;j<3;j++){//columns
		printf(" marks [%d][%d]=%d\n",i,j, marks[i][j]);
	}
	
	}
	return 0;
}