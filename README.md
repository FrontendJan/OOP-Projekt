# Music App

This is a simple music app implemented in C++ that allows users to manage their music library, create playlists, and listen to songs and podcasts.

## Features

- Manage a library of songs and albums
- Manage a library of podcast episodes
- Create and manage user accounts
- Create playlists with a mix of songs and podcast episodes
- Play, pause, and stop songs and podcast episodes

## Class Structure

The project follows an object-oriented design and consists of the following classes:

### MediaItem (Abstract Base Class)

- Represents a base class for all media items (songs, albums, and podcasts)
- Defines common properties and behaviors for media items

### MusicItem (Derived from MediaItem)

- Represents a music item, which can be either a song or an album
- Stores additional properties specific to music items, such as genre and album information

### Song (Derived from MusicItem)

- Represents a single song
- Stores song-specific properties, such as lyrics

### Album (Derived from MusicItem)

- Represents an album, which is a collection of songs
- Stores a list of songs belonging to the album

### Podcast (Derived from MediaItem)

- Represents a podcast episode
- Stores podcast-specific properties, such as description, host name, and episode number

### User

- Represents a user of the music app
- Stores the user's username and playlists

### Playlist

- Represents a collection of media items (songs, albums, or podcast episodes)
- Allows adding, removing, and managing media items in the playlist

### MediaPlayer

- Handles the playback of media items
- Provides functions to play, pause, and stop media items

### MusicLibrary

- Manages the collection of available music items (songs and albums)
- Allows adding, removing, and searching for music items

### PodcastLibrary

- Manages the collection of available podcast episodes
- Allows adding, removing, and searching for podcast episodes

## Usage

1. Compile the project using the following command: g++ -o main.exe src/Album.cpp src/MediaItem.cpp src/MediaPlayer.cpp src/MusicItem.cpp src/MusicLibrary.cpp src/Playlist.cpp src/Podcast.cpp src/PodcastLibrary.cpp src/Song.cpp src/User.cpp src/main.cpp
2. Run the compiled executable with the following command: ./main.exe
3. The `main.cpp` file demonstrates the usage of the classes by creating sample users, music items, podcasts, and playlists.
4. Modify the `main.cpp` file to experiment with different scenarios and test the functionality of the project.

## Dependencies

This project uses standard C++ libraries and does not have any external dependencies.

## Contributing

Contributions are welcome! If you find any issues or have suggestions for improvements, please open an issue or submit a pull request.
