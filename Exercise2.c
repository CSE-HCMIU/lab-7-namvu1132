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
	int i,j,k;
	for(i=0; i<n; i++){
	   for(j=i+1; j<n; j++){
	       if(*str[i]=*str[j])
		{
		for(k=j; k<n; k++)
		{
		*str[k]=*str[k+1];
		}
		n--;
		
		j--;
	       }		
	      }	
             }
	for(i=0; i<n; i++)
	  return *str[i];
        }

int main(int argc, char *argv[]) {
	
	char *str[]={"ab","abcd","ab","abdr"};
    ex2(str,4);
		
	return 0;
}
