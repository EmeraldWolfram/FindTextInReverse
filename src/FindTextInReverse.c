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
	
	int noOfText, noOfWord, i=0, j;

	for(noOfText = 0; text[noOfText] != 0;noOfText++){
	}	// to obtain the no of character entered by user
	
	for(noOfWord = 0; word[noOfWord] != 0;noOfWord++){
	}	// to obtain the no of character to be find 
	printf("No of Text = %d, No of Word = %d \n", noOfText, noOfWord);

	while(noOfText > -1 && text[noOfText-1] != 0){
		printf("Text = %d, Word = %d \n", text[noOfText-1], word[i]);
		
		if(text[noOfText-1] == word[i]){	//check 1st letter of word to find in the text from right to left
			j=1;
			
			while(word[i+j] == 0 || text[noOfText+j-1] == word[i+j]){
				printf("Next Text = %d, Next Word = %d \n", text[noOfText+j-1], word[i+j]);
				
				if(word[i+j] == 0){
					printf("Position = %d \n\n", (noOfText-1));
					return (noOfText-1);
				}
				j++;
			}		
		}
		noOfText--;
	}
	
	printf("*No of Text = %d, No of Word = %d", noOfText, noOfWord);
	return -1;
}









