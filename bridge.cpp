// Bridge Scoring
// Last Modified: Tue 30 Apr 2019 05:29:23 PM EDT
// Author: Anish Sevekari

#include <stdio.h>
#include <stdlib.h>
#include <curses.h>

void game_load_last(){
}

void game_new(){
	("Starting a new game\n");
}

void round_new(){
}

void round_bidding(){
}

void round_score(){
}

bool game_ongoing;

int main(void) {
	WINDOW *mainwin;
	int ch;
	
	/* Initializing ncurses */
	if((mainwin = initscr()) == NULL) {
		fprintf(stderr, "Error initializing ncurses.\n");
		exit(EXIT_FAILURE);
	}
	keypad(stdscr, TRUE);
	cbreak();
	noecho();

	game_load_last();
	while((ch = getch()) !=  (('q') & 0x1f)){
		switch (ch){
			case (('n') & 0x1f):
				game_new();
				break;
		}
	}
	while(game_ongoing){
		round_new();
		round_bidding();
		round_score();
	}
	exit(EXIT_SUCCESS);
}
