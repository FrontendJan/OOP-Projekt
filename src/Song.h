// Song.h
#ifndef SONG_H
#define SONG_H

#include "MusicItem.h"
#include <string>

class Song : public MusicItem {
private:
    std::string lyrics;

public:
    Song(const std::string& title, const std::string& artist, int duration, const std::string& genre, const std::string& album, int trackNumber, const std::string& lyrics);
    virtual ~Song();

    std::string getLyrics() const;
};

#endif // SONG_H