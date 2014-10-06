/*A parser for algernon-base*/

#include<iostream>
#include<string>

using namespace std;

const int array_len = 100;
string characters[array_len]; /*max size is 100*/
struct token_template {
	string type;
	string value;
};
token_template tokens[array_len];
class lexer {
	int length;
	string to_parse;
	public:
		lexer(string expression){to_parse=expression;}
		void make_array();
		void make_tokens();
};

void lexer::make_array() {
	length=to_parse.length();
	for (int i=0; i<length;i++){
		characters[i]=to_parse[i];
	}
};

void lexer::make_tokens() {
	for (int i=0;i<length;i++){
		tokens[i].type="string";
		tokens[i].value=characters[i];
	};
};


class parser {
	public:
		void print_string();
};

void parser::print_string(){
	for (int i=0;i<array_len;i++){
		if (tokens[i].value!=""){
			cout << tokens[i].value << endl;
		}
	}
};

