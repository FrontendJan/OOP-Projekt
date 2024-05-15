// MusicItem.cpp
#include "MusicItem.h"
#include <iostream>

MusicItem::MusicItem(const std::string& title, const std::string& artist, int duration, const std::string& genre, const std::string& album, int trackNumber)
    : MediaItem(title, artist, duration), genre(genre), album(album), trackNumber(trackNumber) {}

MusicItem::~MusicItem() {}

std::string MusicItem::getGenre() const {
    return genre;
}

std::string MusicItem::getAlbum() const {
    return album;
}

int MusicItem::getTrackNumber() const {
    return trackNumber;
}

void MusicItem::play() {
    std::cout << ">  Playing: " << title << " by " << artist << "\n" << std::endl;
}

void MusicItem::pause() {
    std::cout << "|| Paused: " << title << " by " << artist << "\n" << std::endl;
}

void MusicItem::stop() {
    std::cout << "X Stopped: " << title << " by " << artist << "\n" << std::endl;
}

std::ostream& operator<<(std::ostream& os, const MusicItem& item) {
    os << static_cast<const MediaItem&>(item) << ", Genre: " << item.genre << ", Album: " << item.album << ", Track Number: " << item.trackNumber;
    return os;
}