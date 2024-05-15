// Playlist.cpp
#include "Playlist.h"
#include <algorithm>

Playlist::Playlist(const std::string& name) : name(name) {}

std::string Playlist::getName() const {
    return name;
}

void Playlist::addItem(MediaItem* item) {
    items.push_back(item);
}

void Playlist::removeItem(MediaItem* item) {
    items.erase(std::remove(items.begin(), items.end(), item), items.end());
}

std::vector<MediaItem*> Playlist::getItems() const {
    return items;
}

Playlist& Playlist::operator+=(MediaItem* item) {
    addItem(item);
    return *this;
}

Playlist& Playlist::operator-=(MediaItem* item) {
    removeItem(item);
    return *this;
}