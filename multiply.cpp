#include <iostream>
extern "C" {
	extern int multiply_in_js(float,float);
	int multiply(float x,float y){
		return multiply_in_js(x,y);
	}
}

int main(){
	std::cout << "initialized\n";
	return 0;
}
