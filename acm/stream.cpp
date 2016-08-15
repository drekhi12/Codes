#include <sstream>
#include <string>
#include <iostream>

int main() {
 std::stringstream str_stream[5];
 unsigned long long int number = 12345678901234567890;

unsigned long long int number1 = 12121212121212121212;
 //str_stream << " String with number " << number << std::endl;;
	str_stream[0] << number;
 	str_stream[1] << number1;
 std::string str[5];
 str[0] = str_stream[0].str();
 str[1] = str_stream[1].str();
 
 std::cout << "1st "<<str[0]; 
 std::cout << "2nd "<<str[1];
}
