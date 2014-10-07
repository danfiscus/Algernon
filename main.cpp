#include <iostream>
#include "parser.h"
#include <string>

using namespace std;

int main() {
	lexer lex1("*-3a");
	lex1.make_array();
	lex1.make_tokens();
	parser parse1;
	parse1.print_string();
	return 0;
}
