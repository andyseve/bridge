/* Author: Anish Sevekari
 * Last Modified: 5/4/2019 12:39:29 AM
 * Provides class round to store bridge rounds */

#include <cstdio>
#include <cstdlib>

#include "player.h"
#include "trick.h"

namespace bridge {
	class round {
		private:
			bridge::player players[4], dealer, winner, dummy;
			std::pair<int,char> *bidding;
			bridge::trick tricks[13];
			int start[13], winner[13];
			int dealer_hands;
			bool vulnarable;
			pair<int,bool> score;
			char trump;
		public:
			int get_score();
			void print_score();
			std::pair<int,char> get_contract();
			void print_contract();

	}
}
