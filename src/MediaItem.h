// MediaItem.h
#ifndef MEDIAITEM_H
#define MEDIAITEM_H

#include <string>
#include <ostream>

class MediaItem {
protected:
    std::string title;
    std::string artist;
    int duration;

public:
    MediaItem(const std::string& title, const std::string& artist, int duration);
    virtual ~MediaItem();

    std::string getTitle() const;
    std::string getArtist() const;
    int getDuration() const;

    virtual void play() = 0;
    virtual void pause() = 0;
    virtual void stop() = 0;

    // Overloaded << operator
    friend std::ostream& operator<<(std::ostream& os, const MediaItem& item);
};

#endif // MEDIAITEM_H