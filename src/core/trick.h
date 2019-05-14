/* Author: Anish Sevekari
 * Last Modified: 5/4/2019 12:47:31 AM
 * Provides class trick to store bridge rounds */

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
			int get_winner();
			char* print_trick();
			char* print_trick(int start);
	}
}
