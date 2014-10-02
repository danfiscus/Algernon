#include <iostream>
#include "parser.h"
#include <string>

using namespace std;

int main() {
	lexer lex1("hello");
	lex1.make_array();
	cout << lex1.return_expression() << endl;
	return 0;
}
