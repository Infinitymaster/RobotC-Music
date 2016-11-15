/* This program contains methods for playing whole songs, rather than individual phrases
 * as they're written in Songbook.h
 */

#include "Music.h"
#include "Songbook.h"

void PlayTune(char* title){
	if(! strcmp(title, book[0])){
		PlayPhrase(badinerie1);
		PlayPhrase(badinerie2);
		PlayPhrase(badinerie1);
		PlayPhrase(badinerie2);
		PlayPhrase(badinerie3);
		PlayPhrase(badinerie4);
		PlayPhrase(badinerie3);
		PlayPhrase(badinerie4);
	} else if(! strcmp(title, book[1])){
		PlayPhrase(solfeggietto1);
		PlayPhrase(solfeggietto2);
		PlayPhrase(solfeggietto3);
		PlayPhrase(solfeggietto4);
		PlayPhrase(solfeggietto5);
		PlayPhrase(solfeggietto6);
		PlayPhrase(solfeggietto7);
		PlayPhrase(solfeggietto8);
		PlayPhrase(solfeggietto9);
	} else if(! strcmp(title, book[2])){
		PlayPhrase(czardas1);
		PlayPhrase(czardas1);
		PlayPhrase(czardas2);
		PlayPhrase(czardas3);
		PlayPhrase(czardas2);
		PlayPhrase(czardas3);
		PlayPhrase(czardas4);
		PlayPhrase(czardas5);
	}
}
