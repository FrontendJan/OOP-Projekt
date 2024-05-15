// Song.cpp
#include "Song.h"

Song::Song(const std::string& title, const std::string& artist, int duration, const std::string& genre, const std::string& album, int trackNumber, const std::string& lyrics)
    : MusicItem(title, artist, duration, genre, album, trackNumber), lyrics(lyrics) {}

Song::~Song() {}

std::string Song::getLyrics() const {
    return lyrics;
}