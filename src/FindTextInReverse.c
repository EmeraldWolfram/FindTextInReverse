#include "FindTextInReverse.h"
#include <stdio.h>

/**
 * Find the last (partial) word occurred in the text and return the position of
 * the first letter.
 *
 * Eg.,
 *	text 	= Hello, my name is Emerald
 *	word 	= ral
 * The return value is 21
 *
 *Input:
 *	text	contains a bunch of words
 *	word	is the (partial) word to find in the text
 *
 *Return:
 *	The position of the first letter found in text counting from right to left.
 *	If the word cannot be find in the text, -1 is returned.
 *
 *
 */
int findTextInReverse(char *text, char *word){
	
	int sizeOfText=0, sizeOfFinding=0, i;                               // Initialize counters
    
	for(sizeOfText = 0; text[sizeOfText] != 0;sizeOfText++){}           // to obtain the no of character entered by user
	
	for(sizeOfFinding = 0; word[sizeOfFinding] != 0;sizeOfFinding++){}	// to obtain the no of character to be find 
	printf("Size: Text = %d, Word = %d \n", sizeOfText, sizeOfFinding);

	while(sizeOfText > -1){                                             // Loop through index 0 of Text and avoid null text		
		if(text[sizeOfText-1] == word[0]){	                            // First character in Finding Word Match
			i=1;
			while(word[i] == 0 || text[sizeOfText+i-1] == word[i]){		// Loop through the Finding Word with Text
				if(word[i] == 0){                                       // Reached the last character of Finding Word
					printf("Position = %d \n\n", (sizeOfText-1));
					return (sizeOfText-1);
				}
				i++;
			}		
		}
		sizeOfText--;
	}
	
	printf("*No of Text = %d, No of Word = %d", sizeOfText, sizeOfFinding);
	return -1;
}









