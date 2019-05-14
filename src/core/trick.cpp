/* Author: Anish Sevekari
 * Last Modified: Tue 14 May 2019 12:23:15 PM EDT
 * Function for trick class */

#include "cstdio"
#include "cstdlib"
#include "iostream"

#include "trick.h"

namespace bridge {
	void trick::set_cards(std::string input){
		for(uint i=0,j=0; i<4 && j < input.size();j++){
			if(isalpha(input[j])){
				char suite; int value=0;
				if(input[j] == 'c' || input[j] == 'd' || input[j] == 'h' || input[j] == 's'){
					suite = input[j];
					value = 
					value += isdigit(input[j+1]) ? input[++j]-'0' : throw std::range_error("Card Value not found");
					value = isdigit(input[j+1]) ? 10 * value + input[++j]-'0' : value;
					this->cards[i++] = std::make_pair(suite,value);
				}
				else
					throw std::range_error("Suite value not correct");
			}
		}
	}
}

