// PodcastLibrary.cpp
#include "PodcastLibrary.h"
#include <algorithm>

PodcastLibrary::PodcastLibrary() {}

PodcastLibrary::~PodcastLibrary() {
    for (auto podcast : podcasts) {
        delete podcast;
    }
}

void PodcastLibrary::addPodcast(Podcast* podcast) {
    podcasts.push_back(podcast);
}

void PodcastLibrary::removePodcast(Podcast* podcast) {
    podcasts.erase(std::remove(podcasts.begin(), podcasts.end(), podcast), podcasts.end());
}

std::vector<Podcast*> PodcastLibrary::searchPodcasts(const std::string& query) {
    std::vector<Podcast*> results;
    // Implementation for searching podcasts based on the query
    return results;
}