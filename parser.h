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
		string cur_token = characters[i];
		if (cur_token == "("){
			tokens[i].type="par";
		}
		else if (cur_token == "+" || cur_token == "-" || cur_token == "*" || cur_token == "/"){
			tokens[i].type="op";
		}
		else if (cur_token == "0" || 
		cur_token == "1" || 
		cur_token == "2" || 
		cur_token == "3" || 
		cur_token == "4" || 
		cur_token == "5" || 
		cur_token == "6" || 
		cur_token == "7" || 
		cur_token == "8" || 
		cur_token == "9"){
			tokens[i].type="num";
		}
		else{
			tokens[i].type="var";
		}
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
			cout << tokens[i].type << endl;
			cout << tokens[i].value << endl;
		}
	}
};

