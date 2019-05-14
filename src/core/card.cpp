/* Author: Anish Sevekari
 * Last Modified: Tue 14 May 2019 01:39:29 PM EDT
 * input and output card functions */

#include "cstdio"
#include "cstdlib"
#include "iostream"
#include "exception"
#include "string"

namespace bridge {
	std::pair<char,int> parse_card(char* ip, char){
		char[3] ipf;
		for(int i = 0; i < 3; ++i){
			ipf[i] = std::toupper(ip[i]);
		}
		if(!isalpha(ipf[0])){
			throw std::invalid_argument("Unknown suite name");
			return std::make_pair(-1,-1);
		}
		if(ipf[0] == 'C' || ipf[0] == 'D' || ipf[0] == 'H' || ipf[0] == 'S'){
			if(ip[1] == 'A') return std::make_pair(ipf[0],1);
			value += isdigit(input[j+1]) ? input[++j]-'0' : throw std::range_error("Card Value not found");
			value = isdigit(input[j+1]) ? 10 * value + input[++j]-'0' : value;
			this->cards[i++] = std::make_pair(suite,value);
		}
		throw std::invalid_argument("Wrong Suite name" + ip[0]);
	}
}
