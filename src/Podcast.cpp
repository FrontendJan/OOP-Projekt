// Podcast.cpp
#include "Podcast.h"

Podcast::Podcast(const std::string& title, const std::string& artist, int duration, const std::string& description, const std::string& hostName, int episodeNumber)
    : MediaItem(title, artist, duration), description(description), hostName(hostName), episodeNumber(episodeNumber) {}

Podcast::~Podcast() {}

std::string Podcast::getDescription() const {
    return description;
}

std::string Podcast::getHostName() const {
    return hostName;
}

int Podcast::getEpisodeNumber() const {
    return episodeNumber;
}

void Podcast::play() {
    // Implementation for playing a podcast episode
}

void Podcast::pause() {
    // Implementation for pausing a podcast episode
}

void Podcast::stop() {
    // Implementation for stopping a podcast episode
}
