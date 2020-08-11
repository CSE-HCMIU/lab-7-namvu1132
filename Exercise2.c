/*
2. Remove duplicate elements from an array and return the new length.
Do not create any temporary array
Ex:
 _________________________________________
| Input: [ab, ac, ab, bc]                 |
| Output: 3                               |
|_________________________________________|
*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<limits.h>
#define SIZE 1000

void ex2(char *str[],int n){
int count=0;
int i,j;
for(i=0;i<n-1;i++){
	for(j=i+1;j<=n-1;j++){
		if(strcmp(str[i],str[j])!=0){
			count++;
		}
	}
}
	printf("%d",count);
}
int main(int argc, char *argv[]) {
	
	char *str[]={"ab","abcd","ab","abdr"};
    ex2(str,4);
		
	return 0;
}
