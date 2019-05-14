 /* Author:Anish Sevekari
  * Last Modified: 5/3/2019 11:44:01 PM
  * Provides class player */
#include <cstdio>
#include <cstdlib>
#include <cstring>

#include "game.h"

namespace bridge {
	class player {
		public:
			std::string name,nick;
			int games;

			player();
			player(std::string iname);
			~player();
			bridge::game *get_history();
		private: 
			int uuid;
			std::string history_file;
	}
}

