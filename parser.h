/*A parser for algernon-base*/

#include<iostream>
#include<string>

using namespace std;

const int array_len = 100;
string tokens[array_len]; /*max size is 100*/

class lexer {
	int length;
	string to_parse;
	public:
		lexer(string expression){to_parse=expression;}
		void make_array();
};

void lexer::make_array() {
	length=to_parse.length();
	for (int i=0; i<length;i++){
		tokens[i]=to_parse[i];
	}
};

class parser {
	public:
		void print_string();
};

void parser::print_string(){
	for (int i=0;i<array_len;i++){
		cout << tokens[i] << endl;
	}
};
