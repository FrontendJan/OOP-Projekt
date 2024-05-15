// Playlist.h
#ifndef PLAYLIST_H
#define PLAYLIST_H

#include <string>
#include <vector>
#include "MediaItem.h"

class Playlist {
private:
    std::string name;
    std::vector<MediaItem*> items;

public:
    Playlist(const std::string& name);

    std::string getName() const;
    void addItem(MediaItem* item);
    void removeItem(MediaItem* item);
    std::vector<MediaItem*> getItems() const;

    // Overloaded + and - operators
    Playlist& operator+=(MediaItem* item);
    Playlist& operator-=(MediaItem* item);
};

#endif // PLAYLIST_H