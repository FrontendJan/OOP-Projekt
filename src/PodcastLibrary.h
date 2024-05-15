// PodcastLibrary.h
#ifndef PODCASTLIBRARY_H
#define PODCASTLIBRARY_H

#include <vector>
#include "Podcast.h"

class PodcastLibrary {
private:
    std::vector<Podcast*> podcasts;

public:
    PodcastLibrary();
    ~PodcastLibrary();

    void addPodcast(Podcast* podcast);
    void removePodcast(Podcast* podcast);
    std::vector<Podcast*> searchPodcasts(const std::string& query);
};

#endif // PODCASTLIBRARY_H