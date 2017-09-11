#include<iostream>
int main(){
	int i = 0;
	while(i < 100){
		if(i % 15 == 0){
			std::cout << "FizzBuzz" << "\n";
		}
		else if(i % 5 == 0){
			std::cout << "Buzz" << "\n";
		}
		else if(i % 3 == 3){
			std::cout << "Fizz" << "\n";
		}
		else{
			std::cout << i << "\n";
		}
		++i;
	}
	return 0;
}
