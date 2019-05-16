/* Author: Anish Sevekari
 * Last Modified: Wed 15 May 2019 05:33:02 AM EDT
 * input and output card functions */

#include "cstdio"
#include "cstdlib"
#include "iostream"
#include "exception"
#include "string"

namespace bridge {
	char parse_suite(char isuite, int no_trump=1){
		char suite = std::toupper(isuite);
		if(suite == 'C' || suite == 'D' || suite == 'H' || suite == 'S') return suite;
		if(suite == 'N'){
			if(no_trump) return suite;
			else throw std::invalid_argument("No trump is not a valid suite");
		}
		else throw std::invalid_argument("Unknown suite");
	}

	std::string print_suite(char isuite){
		char suite = std::toupper(isuite);
		if(suite == 'C') return "Club";
		if(suite == 'D') return "Diamond";
		if(suite == 'H') return "Heart";
		if(suite == 'S') return "Spade";
		if(suite == 'N') return "No Trump";
		throw std::invalid_argument("Unknown Suite");
	}

	int parse_value(char* val){
		char f = std::toupper(val[0]);
		if(f == '1') return 14;
		if(f == 'A') return 14;
		if(f == 'K') return 13;
		if(f == 'Q') return 12;
		if(f == 'J') return 11;
		if(std::isdigit(val[0])){
			int ret = val[0] - '0';
			if(std::isalnum(val[1])) ret = std::isdigit(val[1]) ? 10 * ret + val[1] - '0' : throw std::invalid_argument("Unknown Card Value");
			if(ret < 2 || ret > 14) throw std::invalid_argument("Unknown Card Value");
			return ret;
		}
		throw std::invalid_argument("Unknown Card Value");
	}

	std::pair<char,int> parse_card(char* ip){
		char suite = parse_suite(ip[0],0);
		int value = parse_value(ip+1);
		return std::make_pair(suite,value);
	}

	std::pair<char,int> parse_card(char* ip, std::pair<char,int>* card){
		return *card = parse_card(ip);
	}
	
	std::string print_card(std::pair<char,int> card){
		std::string ret;
		ret = card.first;
		if(card.second == 11) return ret.append("J");
		if(card.second == 12) return ret.append("Q");
		if(card.second == 13) return ret.append("K");
		if(card.second == 14) return ret.append("A");
		return ret.append(std::to_string(card.second));
	}

}

/*
// Testing, Passed.
int main() {
	std::string parse;
	std::getline(std::cin, parse);
	try{
		std::pair<char,int> card;
		bridge::parse_card(&parse.at(0), &card);
		std::cout << bridge::print_card(card) << std::endl;
	} catch (std::exception& e){
		std::cout << e.what() << std::endl;
	}
}
*/ 
