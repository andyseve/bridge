/* Author: Anish Sevekari
 * Last Modified: Wed 15 May 2019 05:43:06 PM EDT
 * Provides class trick to store bridge rounds */

#ifndef BRIDGE_CORE_TRICK_H
#define BRIDGE_CORE_TRICK_H

#include "iostream"
#include "string"

namespace bridge {
	class trick{
		/* By definition, tricks start with the first player.
		 * Keeping track of who goes first is done in the round class
		 */
		public:
			std::pair<char, int> cards[4];
			char trump, suite;
			int winner=-1;
		
		public:
			trick();
			trick(char itrump);
			~trick();
			
			void set_cards(std::string input);
			void set_trump(char itrump);
			void set_suite(char isuite);
			void set_suite();
			int get_winner();
			char get_suite();
			char get_trump();
			std::string print_suite();
			std::string print_trump();
			std::string print_trick(int start, int col_width);
	};
}

#endif
