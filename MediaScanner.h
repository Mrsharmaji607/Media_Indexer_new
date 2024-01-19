#ifndef MEDIASCANNER_H
#define MEDIASCANNER_H

#include "MediaDatabse.h"
#include "MediaExtractor.h"
#include <vector>
#include <string>
#include "Songs.h"

class MediaScanner {
    
private:
    
    MediaExtractor mediaExtractor;
    std::string folderPath;
    std::vector<Song>& songs;
    std::vector<std::string> songs;

public:
    // Constructor that takes the folder path as an argument
    MediaScanner(std::vector<Song>& songsRef, const std::string& Path);
    MediaScanner(std::string st);
    void scanMedia();

    void scanMedia(const std::string& folderPath);
    void displayScanProgress(int percentage) const;
    void displaySongInfo() const;
    void displayHelp() const;
};

#endif // MEDIASCANNER_H


