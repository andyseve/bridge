/* Author: Anish Sevekari
 * Last Modified: Tue 14 May 2019 10:38:11 AM EDT
 * Provides class trick to store bridge rounds */

#ifndef BRIDGE_CORE_TRICK_H
#define BRIDGE_CORE_TRICK_H

#include "iostream"
#include "string"

namespace bridge {
	class trick{
		private:
			std::pair<int,char> cards[4];
			char trump;
			int winner=-1;
		public:
			trick();
			~trick();
			void set_cards(std::string input);
			void set_trump(char itrump);
			int get_winner();
			std::string print_trick();
			std::string print_trick(int start);
	};
}

#endif
