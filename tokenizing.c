#define _CRT_SECURE_NO_WARNINGS
#include "tokenizing.h" //include contents of the tokenizing.h
void tokenizing() { //tokenizing function definition begins
		printf("*** Start of Tokenizing Words Demo ***\n"); // print header to start tokenizing the phrases
		char words[200]; // character array(string) declared having size 200
		char* word = 0; // word is pointer to char which is	initialised with 0
		int w_counter; // varialble w_counter of int data-type is declared
		while (TRUE) // initiate the while iteration
		// while loop do looping till the user does not want to quit tokenizing
		{
		printf("Type a few words seperated by space(q - to quit):\n");
	//prompt user to enter the words where there are spaces between them
	gets(words); // read and store the user input in words
	//exit while loop if the input (words) is equal "q"
	if (strcmp(words, "q") == 0)
		break; 
	
	word = strtok(words, " "); 
	w_counter = 1; // w_counter is assigned to 1
	while (word) // initiate the while iteration annd loops run until there is no word string left to be tokenized
	{
	printf("Word #%d is \'%s\'\n", w_counter++,word); // print the index(w_counter) of token(word) and token(word) itself.
    	word = strtok(NULL, " "); // returns null pointer while no tokens left to be retreived
	}
		}
	printf("*** End of Tokenizing Words Demo ***\n\n"); // print header to end the tokenizing after concatenating process


}