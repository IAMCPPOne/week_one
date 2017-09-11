#include<iostream>
void render(int input){
	if(input == 100){
		return;
	}
	if(input % 15 == 0){
		std::cout << "FizzBuzz" << "\n";
	}
	else if(input % 5 == 0){
		std::cout << "Buzz" << "\n";
	}
	else if(input % 3 == 0){
		std::cout << "Fizz" << "\n";
	}
	else{
		std::cout << input << "\n";
	}
	int next = input += 1;
	render(next);
}
int main(){
	render(0);	
	return 0;
}
