#include <stdio.h>

void printSean() {
	printf("Name: Sean McCallum\n"
		   "Year: Senior\n"
		   "Major: Comptuer Science\n"
		   "Hobbies: video games, piano, snowboarding\n"
		   "Where I grew up: Bellingham, Washington and Stevensville, MT\n"
		   "Anything else: I'm not very interesting\n\n");
}

void printCian() {
	printf("Name: Cian McGinn\n");
	printf("Year: Sophomore\n");
	printf("Major: Computer Science\n");
	printf("Hobbies: Ultimate Frisbee, SSBM, other video games, programming\n");
	printf("Hometown: Seattle\n");
}

void printAndrew(){
  printf("(William) Andrew Owen\n");
  printf("Year in School: Junior\n");
  printf("Major: Computer Science\n");
  printf("Hobbies: Biking, Movie Collecting, Soccer, Video Games, Visual Effects\n");
  printf("Grew Up: Vancouver, Washington\n");
  printf("Interesting stuff: I won a pizza by dancing in a stadium as a child\n");
}


void printHalle() {
	printf("Halle Nurse\n");  
	printf("Junior\n");
	printf("Computer Science\n");
	printf("Softball, golf, hiking, floating the river\n");
	printf("Missoula, MT\n");
	printf("I have been stung by a sting ray.\n");
}


int main(void) {
	printSean();
	printCian();
	printAndrew();
	printHalle();
}
