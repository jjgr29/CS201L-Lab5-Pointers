#include "functions.h"

bool isDigits(string str) {
	return (str.find_first_not_of("0123456789") == string::npos);
}
 
bool isValidAnswer(string str) {
	return str.find_first_not_of("ABCDE ") == str.npos;
}
