 /* Author:Anish Sevekari
  * Last Modified: Wed 15 May 2019 07:24:33 PM EDT
  * Provides class player */

#ifndef BRIDGE_CORE_PLAYER_H
#define BRIDGE_CORE_PLAYER_H

#include "iostream"
#include "string"
#include "vector"

#include "game.h"

namespace bridge {
	class player {
		public:
			std::string name,nick;
			std::vector<int> game_uuid;
			int games;

			player();
			player(std::string iname);
			~player();
			std::vector<game> get_games();
		private: 
			int uuid;
			std::string history_file;
	}
}

#endif
