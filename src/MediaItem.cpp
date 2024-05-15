// MediaItem.cpp
#include "MediaItem.h"
#include <iostream>

MediaItem::MediaItem(const std::string& title, const std::string& artist, int duration)
    : title(title), artist(artist), duration(duration) {}

MediaItem::~MediaItem() {}

std::string MediaItem::getTitle() const {
    return title;
}

std::string MediaItem::getArtist() const {
    return artist;
}

int MediaItem::getDuration() const {
    return duration;
}

void MediaItem::play() {
   //
}

void MediaItem::pause() {
    //
}

void MediaItem::stop() {
    //
}

std::ostream& operator<<(std::ostream& os, const MediaItem& item) {
    os << "Title: " << item.title << ", Artist: " << item.artist << ", Duration: " << item.duration << " seconds";
    return os;
}