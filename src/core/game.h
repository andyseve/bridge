/* Author:Anish Sevekari
 * Last Modified: Wed 15 May 2019 07:23:29 PM EDT
 * Provides class game */

#ifndef BRIDGE_CORE_GAME_H
#define BRIDGE_CORE_GAME_H

#include "iostream"
#include "string"
#include "vector"

#include "player.h"
#include "round.h"

namespace bridge {
   class game {
	   public:
		   player players[4];
		   std::pair<player, player> teams[2];
		   std::vector<round> rounds;

		   game();
		   ~game();

		   void add_round(bridge::round cur);
		   void update_score(bridge::round cur);
		   void print_full_score();

		   void save_game();
		   void load_game();

	   private: 
		   int uuid;
		   std::pair<int,int> scores[3];
		   std::pair<bool,bool> vulnarable;
   }
}

#endif
