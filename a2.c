#include <stdio.h>
#include <stdlib.h>

int main(){
	printf("Welcome to the super multiprocessing file editor 3000, please selelct an option:\n");
	printf("1) Create a new directorry file\n");
	printf("2) Create a new regular file\n");
	printf("3) Create child process to write sorted output\n");
	printf("4) Create child process to shadow write/read regular files\n");
	printf("5) Read from a file (print out to stdout)\n");
	printf("6) Write to a file in either insert, append, or overwrite mode\n");
	printf("7) Print file status (print out to stdout)\n");
	printf("8) Print directory listing (contents of dir file) (print out to stdout)\n");

	char command[256];
	// get input from the user and contine only if its valid
	printf("%s\n", );
	while (!isValidString()){
		///please enter a valid string 
	}

	// process the user command

	/// switch statement:
		/// if option 1:
			///call function that handles oprtion 1:
	/// same for all the other options


	return 0;
}

int isValidString(){

	return 0;
}

void writeToFile(char * fileName, char * mode){
}

void createDirectory(char * dirName){

}

void crreateFile(char * fileName)