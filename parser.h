/*A parser for algernon-base*/

#include<iostream>
#include<string>

using namespace std;

string tokens[100]; /*max size is 100*/

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
	for (int i=0;i<100;i++){
		cout << tokens[i] << endl;
	}
};
