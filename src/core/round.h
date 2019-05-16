/* Author: Anish Sevekari
 * Last Modified: Wed 15 May 2019 10:03:59 PM EDT
 * Provides class round to store bridge rounds */

#ifndef BRIDGE_CORE_ROUND_H
#define BRIDGE_CORE_ROUND_H

#include "iostream"
#include "string"
#include "vector"

#include "trick.h"

namespace bridge {
	class round {
		/*
		 * Some Details:
		 * Player 0 is always the dealer.
		 * Scores are determined in terms of the dealer.
		 */

		public:
			round();
			~round();
			int declarer, dummy;
			std::vector<std::pair<char,int>> bidding;
			std::pair<char,int> contract;
			char trump;
			bridge::trick tricks[13];
			int start[13], winner[13];
			int dealer_hands;
			bool vulnarable;
			int score_above_the_line;
			int score_below_the_line;

			std::pair<int,char> get_contract();

			void print_score();
			void print_contract();
	}
}

#endif
