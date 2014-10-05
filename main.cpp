#include <iostream>
#include "parser.h"
#include <string>

using namespace std;

int main() {
	lexer lex1("hello");
	lex1.make_array();
	parser parse1;
	parse1.print_string();
	return 0;
}
