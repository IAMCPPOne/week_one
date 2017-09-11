#include<iostream>
int main(){
	//char array is a collection of Characters much like a string
	char hello[] = "Hello World";
	
	//std:: is invoking the cout member of the standard library
	//cout is the c wrapper around STDOUT that is how we send messages to the calling process
	//in this case we are sending the char array to the terminal over the standard out "channel"
	std::cout << hello << "\n";
	//in the main message, this is implied and not manditory
	return 0;
}
