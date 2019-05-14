/* Author:Anish Sevekari
 * Last Modified: 5/3/2019 11:38:09 PM
 * Provides class game */
#include <cstdio>
#include <cstdlib>
#include <cstring>

#include "player.h"
#include "round.h"

namespace bridge {
   class game {
	   public:
		   bridge::player players[4];
		   std::pair<bridge::player, bridge::player> teams[2];
		   bridge::round *rounds;

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

