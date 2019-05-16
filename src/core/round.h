/* Author: Anish Sevekari
 * Last Modified: Wed 15 May 2019 07:35:26 PM EDT
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

		private:
			int declarer, dummy;
			std::vector<std::pair<char,int>> bidding;
			std::pair<char,int> contract;
			char trump;
			bridge::trick tricks[13];
			int start[13], winner[13];
			int dealer_hands;
			bool vulnarable;
			std::pair<int,bool> score; // Stores the winners score.
		public:
			round();
			~round();
			int get_score();
			void print_score();
			std::pair<int,char> get_contract();
			void print_contract();
	}
}

#endif
