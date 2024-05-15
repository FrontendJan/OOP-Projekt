// main.cpp
#include <iostream>
#include <vector>
#include "User.h"
#include "MusicLibrary.h"
#include "PodcastLibrary.h"
#include "Playlist.h"
#include "Song.h"
#include "Album.h"
#include "Podcast.h"
#include "MediaPlayer.h"

int main() {
    std::cout << "\n" << std::endl;

    // Create users
    User user1("JohnDoe");
    User user2("JaneSmith");
    User user3("BobJohnson");
    User user4("SarahWilson");
    User user5("MichaelBrown");
    User user6("EmmaThompson");
    User user7("DavidDavis");
    User user8("JessicaWilliams");
    User user9("ChrisRobertson");
    User user10("AmandaTaylor");

    // Create a music library
    MusicLibrary musicLibrary;

    // Create songs
    Song song1("Song1", "Artist1", 180, "Rock", "Album1", 1, "Lyrics1");
    Song song2("Song2", "Artist2", 240, "Pop", "Album2", 2, "Lyrics2");
    Song song3("Song3", "Artist3", 300, "Jazz", "Album3", 1, "Lyrics3");
    Song song4("Song4", "Artist4", 210, "Blues", "Album4", 2, "Lyrics4");
    Song song5("Song5", "Artist5", 270, "Country", "Album5", 1, "Lyrics5");
    Song song6("Song6", "Artist6", 195, "Metal", "Album6", 1, "Lyrics6");
    Song song7("Song7", "Artist7", 225, "Indie", "Album7", 2, "Lyrics7");
    Song song8("Song8", "Artist8", 285, "R&B", "Album8", 1, "Lyrics8");
    Song song9("Song9", "Artist9", 260, "Hip-Hop", "Album9", 3, "Lyrics9");
    Song song10("Song10", "Artist10", 315, "Classical", "Album10", 1, "Lyrics10");

    musicLibrary.addMusicItem(&song1);
    musicLibrary.addMusicItem(&song2);
    musicLibrary.addMusicItem(&song3);
    musicLibrary.addMusicItem(&song4);
    musicLibrary.addMusicItem(&song5);
    musicLibrary.addMusicItem(&song6);
    musicLibrary.addMusicItem(&song7);
    musicLibrary.addMusicItem(&song8);
    musicLibrary.addMusicItem(&song9);
    musicLibrary.addMusicItem(&song10);

    // Create albums
    Album album1("Album1", "Artist1", 600, "Rock", "Album1", 1);
    Album album2("Album2", "Artist2", 540, "Pop", "Album2", 1);
    Album album3("Album3", "Artist3", 720, "Jazz", "Album3", 1);
    Album album4("Album4", "Artist4", 480, "Blues", "Album4", 1);
    Album album5("Album5", "Artist5", 630, "Country", "Album5", 1);

    album1.addSong(song1);
    album2.addSong(song2);
    album3.addSong(song3);
    album4.addSong(song4);
    album5.addSong(song5);

    musicLibrary.addMusicItem(&album1);
    musicLibrary.addMusicItem(&album2);
    musicLibrary.addMusicItem(&album3);
    musicLibrary.addMusicItem(&album4);
    musicLibrary.addMusicItem(&album5);

    // Create a podcast library
    PodcastLibrary podcastLibrary;

    // Create podcasts
    Podcast podcast1("Podcast1", "Host1", 1800, "Description1", "Host1", 1);
    Podcast podcast2("Podcast2", "Host2", 2400, "Description2", "Host2", 2);
    Podcast podcast3("Podcast3", "Host3", 3000, "Description3", "Host3", 3);
    Podcast podcast4("Podcast4", "Host4", 1200, "Description4", "Host4", 4);
    Podcast podcast5("Podcast5", "Host5", 2700, "Description5", "Host5", 5);
    Podcast podcast6("Podcast6", "Host6", 1500, "Description6", "Host6", 6);
    Podcast podcast7("Podcast7", "Host7", 2100, "Description7", "Host7", 7);
    Podcast podcast8("Podcast8", "Host8", 2800, "Description8", "Host8", 8);
    Podcast podcast9("Podcast9", "Host9", 1900, "Description9", "Host9", 9);
    Podcast podcast10("Podcast10", "Host10", 2500, "Description10", "Host10", 10);

    podcastLibrary.addPodcast(&podcast1);
    podcastLibrary.addPodcast(&podcast2);
    podcastLibrary.addPodcast(&podcast3);
    podcastLibrary.addPodcast(&podcast4);
    podcastLibrary.addPodcast(&podcast5);
    podcastLibrary.addPodcast(&podcast6);
    podcastLibrary.addPodcast(&podcast7);
    podcastLibrary.addPodcast(&podcast8);
    podcastLibrary.addPodcast(&podcast9);
    podcastLibrary.addPodcast(&podcast10);

    // Create playlists
    Playlist playlist1("My Playlist 1");
    Playlist playlist2("My Playlist 2");
    Playlist playlist3("My Playlist 3");
    Playlist playlist4("My Playlist 4");
    Playlist playlist5("My Playlist 5");
    Playlist playlist6("My Playlist 6");
    Playlist playlist7("My Playlist 7");
    Playlist playlist8("My Playlist 8");
    Playlist playlist9("My Playlist 9");
    Playlist playlist10("My Playlist 10");

    playlist1 += &song1;
    playlist1 += &podcast1;
    playlist2 += &song2;
    playlist2 += &podcast2;
    playlist3 += &song3;
    playlist3 += &podcast3;
    playlist4 += &song4;
    playlist4 += &podcast4;
    playlist5 += &song5;
    playlist5 += &podcast5;
    playlist6 += &song6;
    playlist6 += &podcast6;
    playlist7 += &song7;
    playlist7 += &podcast7;
    playlist8 += &song8;
    playlist8 += &podcast8;
    playlist9 += &song9;
    playlist9 += &podcast9;
    playlist10 += &song10;
    playlist10 += &podcast10;

    user1.addPlaylist(playlist1);
    user2.addPlaylist(playlist2);
    user3.addPlaylist(playlist3);
    user4.addPlaylist(playlist4);
    user5.addPlaylist(playlist5);
    user6.addPlaylist(playlist6);
    user7.addPlaylist(playlist7);
    user8.addPlaylist(playlist8);
    user9.addPlaylist(playlist9);
    user10.addPlaylist(playlist10);


    // Create media players for each user
MediaPlayer player1;
MediaPlayer player2;
MediaPlayer player3;
MediaPlayer player4;
MediaPlayer player5;
MediaPlayer player6;
MediaPlayer player7;
MediaPlayer player8;
MediaPlayer player9;
MediaPlayer player10;

    // Create media players for each user
    std::vector<MediaPlayer> players;
    for (size_t i = 0; i < 10; ++i) {
        players.emplace_back();
    }


    // Print user playlists and demonstrate playback
    std::vector<User*> users = {&user1, &user2, &user3, &user4, &user5, &user6, &user7, &user8, &user9, &user10};

    for (size_t i = 0; i < users.size(); ++i) {
        const auto& user = users[i];
        auto& player = players[i];

        std::cout << "User: " << user->getUsername() << std::endl;
        std::cout << "Playlists:" << std::endl;

        const auto& playlists = user->getPlaylists();
        for (const auto& playlist : playlists) {
            std::cout << "- " << playlist.getName() << std::endl;
            for (const auto& item : playlist.getItems()) {
                std::cout << *item << std::endl;
            }
        }

        std::cout << std::endl;

        // Set current item and demonstrate playback
        if (!playlists.empty() && !playlists.front().getItems().empty()) {
            player.setCurrentItem(playlists.front().getItems().front());
            player.play();
            player.pause();
            player.stop();
            std::cout << std::endl;
        }

        std::cout << std::endl;
    }

    return 0;
}