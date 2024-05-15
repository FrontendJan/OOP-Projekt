// Album.cpp
#include "Album.h"

Album::Album(const std::string& title, const std::string& artist, int duration, const std::string& genre, const std::string& album, int trackNumber)
    : MusicItem(title, artist, duration, genre, album, trackNumber) {}

Album::~Album() {}

void Album::addSong(const Song& song) {
    songs.push_back(song);
}

std::vector<Song> Album::getSongs() const {
    return songs;
}

void Album::play() {
    // Implementation for playing an album
}

void Album::pause() {
    // Implementation for pausing an album
}

void Album::stop() {
    // Implementation for stopping an album
}