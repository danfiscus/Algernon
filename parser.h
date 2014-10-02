/*A parser for algernon-base*/

#include<iostream>
#include<string>

using namespace std;

class lexer {
	int length;
	string to_parse;
	string tokens[100]; /*Max size is 100*/
	public:
		lexer(string expression){to_parse=expression;}
		string return_expression();
		void make_array();
};

string lexer::return_expression() {
	return tokens[0]; 
};

void lexer::make_array() {
	length=to_parse.length();
	for (int i=0; i<length;i++){
		cout << to_parse[i] << endl;
		tokens[i]=to_parse[i];

	}
};
