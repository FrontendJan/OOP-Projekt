// Album.h
#ifndef ALBUM_H
#define ALBUM_H

#include "MusicItem.h"
#include "Song.h"
#include <vector>

class Album : public MusicItem {
private:
    std::vector<Song> songs;

public:
    Album(const std::string& title, const std::string& artist, int duration, const std::string& genre, const std::string& album, int trackNumber);
    virtual ~Album();

    void addSong(const Song& song);
    std::vector<Song> getSongs() const;

    virtual void play() override;
    virtual void pause() override;
    virtual void stop() override;
};

#endif // ALBUM_H