#include <cstdlib>
#include <iostream>

float grade[3][3] = { {9.5, 9.1},{8.8, 8.4},{10.0, 9.8} };
//                      0,0  0,1   1,0  1,1   2,0  2,1
int main(){
	std::cout<<grade[2][1];
}
