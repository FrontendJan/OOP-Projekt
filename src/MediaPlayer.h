// MediaPlayer.h
#ifndef MEDIAPLAYER_H
#define MEDIAPLAYER_H

#include "MediaItem.h"

class MediaPlayer {
private:
    MediaItem* currentItem;

public:
    MediaPlayer();
    ~MediaPlayer();

    void setCurrentItem(MediaItem* item);
    void play();
    void pause();
    void stop();
};

#endif // MEDIAPLAYER_H