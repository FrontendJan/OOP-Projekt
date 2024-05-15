// User.h
#ifndef USER_H
#define USER_H

#include <string>
#include <vector>
#include "Playlist.h"

class User {
private:
    std::string username;
    std::vector<Playlist> playlists;

public:
    User(const std::string& username);
    ~User();

    std::string getUsername() const;
    void addPlaylist(const Playlist& playlist);
    std::vector<Playlist> getPlaylists() const;
};

#endif // USER_H