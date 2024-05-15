// MusicItem.h
#ifndef MUSICITEM_H
#define MUSICITEM_H

#include "MediaItem.h"
#include <string>
#include <ostream>

class MusicItem : public MediaItem {
protected:
    std::string genre;
    std::string album;
    int trackNumber;

public:
    MusicItem(const std::string& title, const std::string& artist, int duration, const std::string& genre, const std::string& album, int trackNumber);
    virtual ~MusicItem();

    std::string getGenre() const;
    std::string getAlbum() const;
    int getTrackNumber() const;

    virtual void play() override;
    virtual void pause() override;
    virtual void stop() override;

    // Overloaded << operator for MusicItem
    friend std::ostream& operator<<(std::ostream& os, const MusicItem& item);
};

#endif // MUSICITEM_H