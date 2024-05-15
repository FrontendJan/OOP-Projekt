// MusicLibrary.h
#ifndef MUSICLIBRARY_H
#define MUSICLIBRARY_H

#include <vector>
#include "MusicItem.h"

class MusicLibrary {
private:
    std::vector<MusicItem*> musicItems;

public:
    MusicLibrary();
    ~MusicLibrary();

    void addMusicItem(MusicItem* item);
    void removeMusicItem(MusicItem* item);
    std::vector<MusicItem*> searchMusicItems(const std::string& query);
};

#endif // MUSICLIBRARY_H