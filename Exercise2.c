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

void remove(char arr[], int n)
{
	
	if(n<=1)
	   return n;
	char temp[n];
	
	
	int i,j=0;
	for(i=0;i<n-1;i++)
		
	if (arr[i] != arr[i+1])
        temp[j++] = arr[i];
   
    
        temp[j++] = arr[n-1];
  
     
     for (i=0; i<j; i++)
         arr[i] = temp[i];
   
     return j;
 }
int main()
{
	char arr[]={"abc","abcd","abe","abdr"};
	int n= (arr) / (arr[0]);
	
	n=remove(arr,n);
	for(int i=0;i<n;i++){
		printf("%d",arr[i]);
	}
         
