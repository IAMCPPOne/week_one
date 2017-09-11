#include<iostream>
void drawfull(int input){
	int i = 0;
	while(i < input){
		std::cout <<"*";
		++i;
	}
	std::cout << "\n";
}
void drawhollow(int input){
	int i = 0;	
	do{
		if(i == 0 || i == input -1){
			std::cout << "*";
		}
		else{
			std::cout << " ";
		}
		++i;
	} while (i < input);
	std::cout << "\n";
}
int main(){
	int square_height;
	std::cout << "Please Input a Height for The Square to Be Drawn" << "\n";
	std::cin >> square_height;

	int i = 0;
	do{
		if(i == 0 || i == square_height){
			drawfull(square_height);
		}
		else{
			drawhollow(square_height);
		}
		++i;
	} while(i < (square_height + 1));
}
