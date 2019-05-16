/* Author: Anish Sevekari
<<<<<<< HEAD
 * Last Modified: Wed 15 May 2019 05:36:21 PM EDT
=======
 * Last Modified: Tue 14 May 2019 05:33:09 PM EDT
>>>>>>> 5883e0a4cda044017ef5f1d95a5cbe2edcf7d055
 * Function for trick class */

#include "cstdio"
#include "cstdlib"
#include "iostream"

#include "trick.h"
#include "card.cpp"

namespace bridge {
	trick::trick() {
		this->winner = -1;
		this->trump = 'N';
		for(int i = 0; i < 4; ++i){
			this->cards[i] = std::make_pair('\0', 0);
		}
	}
	trick::trick(char itrump) {
		this->winner = -1;
		this->trump = itrump;
		for(int i = 0; i < 4; ++i){
			this->cards[i] = std::make_pair('\0', 0);
		}
	}
	trick::~trick() {}

	void trick::set_suite() {this->suite = this->cards[0].first;}
	void trick::set_trump(char itrump) {this->trump = parse_suite(itrump); this->winner = -1;}
	void trick::set_suite(char isuite) {this->suite = parse_suite(isuite,0); this->winner = -1;}
	void trick::set_cards(std::string input){
<<<<<<< HEAD
		int i = 0, j=0;
		char card[3];
		for(char c :input){
			if( i == 4 ) break;
			if(isalnum(c)) card[j++] = c;
			if( j == 2 ) this->cards[i++] = parse_card(card), j=0;
		}
		if( i == 4 ){
			this->set_suite();
			this->get_winner();
			return;
		}
=======
		for(uint i=0,j=0; i<4 && j < input.size();j++){
>>>>>>> 5883e0a4cda044017ef5f1d95a5cbe2edcf7d055
	}
	
	char trick::get_suite() {return this->suite;}
	char trick::get_trump() {return this->trump;}

	std::string trick::print_suite() {return bridge::print_suite(this->trump);}
	std::string trick::print_trump() {return bridge::print_suite(this->suite);}
	std::string trick::print_trick(int start = 0, int col_width = 3){
		std::string ret="";
		for(int i = 0; i < 4; ++i){
			ret += print_card(this->cards[i+start < 4 ? i + start  : i + start - 4]);
			ret.append(col_width - 2, ' ');
		}
		return ret;
	}

	// Winner is always relative to the first player.
	int trick::get_winner() {
		if(this->winner > -1) return this->winner;
		int ret = 0;
		if(this->cards[0].first != this->suite) this->set_suite();
		for(int i = 1; i < 4; ++i){
			if(this->cards[i].first == this->trump && this->cards[ret].first != this->trump) ret = i;
			else if(this->cards[i].first == this->trump && this->cards[ret].first == this->trump && this->cards[i].second > this->cards[ret].second) ret = i;
			else if(this->cards[i].first == this->suite && this->cards[i].second > this->cards[ret].second ) ret = i;
			else continue;
		}
		return this->winner = ret;
	}
}

//#define testing
#ifdef testing //Passed
int main(){
	try{
		std::string parse="s3 sa cj h5";
		bridge::trick t;
		t.set_cards(parse);
		t.set_trump('n');
		std::cout << t.print_trick(0,6) << std::endl;
		std::cout << "trump set to " << t.print_suite() << std::endl;
		std::cout << "starting suite is " << bridge::print_suite(t.suite) << std::endl;
		std::cout << "And the winner is player " << t.get_winner() << std::endl;
	} catch (std::exception& e){
		std::cerr << e.what() << std::endl;
	}
}
#endif

