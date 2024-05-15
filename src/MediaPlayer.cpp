// MediaPlayer.cpp
#include "MediaPlayer.h"

MediaPlayer::MediaPlayer() : currentItem(nullptr) {}

MediaPlayer::~MediaPlayer() {
    delete currentItem;
}

void MediaPlayer::setCurrentItem(MediaItem* item) {
    currentItem = item;
}

void MediaPlayer::play() {
    if (currentItem) {
        currentItem->play();
    }
}

void MediaPlayer::pause() {
    if (currentItem) {
        currentItem->pause();
    }
}

void MediaPlayer::stop() {
    if (currentItem) {
        currentItem->stop();
    }
}