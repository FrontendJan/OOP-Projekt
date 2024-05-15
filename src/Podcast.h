// Podcast.h
#ifndef PODCAST_H
#define PODCAST_H

#include "MediaItem.h"
#include <string>

class Podcast : public MediaItem {
private:
    std::string description;
    std::string hostName;
    int episodeNumber;

public:
    Podcast(const std::string& title, const std::string& artist, int duration, const std::string& description, const std::string& hostName, int episodeNumber);
    virtual ~Podcast();

    std::string getDescription() const;
    std::string getHostName() const;
    int getEpisodeNumber() const;

    virtual void play() override;
    virtual void pause() override;
    virtual void stop() override;
};

#endif // PODCAST_H