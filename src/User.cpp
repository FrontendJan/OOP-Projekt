// User.cpp
#include "User.h"

User::User(const std::string& username) : username(username) {}

User::~User() {}

std::string User::getUsername() const {
    return username;
}

void User::addPlaylist(const Playlist& playlist) {
    playlists.push_back(playlist);
}

std::vector<Playlist> User::getPlaylists() const {
    return playlists;
}