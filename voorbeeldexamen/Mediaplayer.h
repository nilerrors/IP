//
// Created by nilerrors on 20/12/2023.
//

#ifndef VOORBEELDEXAMEN_MEDIAPLAYER_H
#define VOORBEELDEXAMEN_MEDIAPLAYER_H

#include <map>
#include <vector>
#include <string>
#include <iostream>
#include "Audiobestand.h"

class Mediaplayer {
public:
    Mediaplayer();

    void add_audiobestand(Audiobestand *a);

    void make_playlist(const std::string& naam);

    void add_to_playlist(const string& playlistnaam, const string& bestand);

    void laad_playlist(const string& playlist_naam);

    void toon_huidige_playlist() const;

    void speel_volgende();

    void toon_huidig_audiobestand();

private:
    std::string huidigePlaylist = "";
    int huidigeBestand = -1;
    std::map<std::string, Audiobestand *> bestanden;
    std::map<std::string, std::vector<std::string>> playlists;
};


#endif //VOORBEELDEXAMEN_MEDIAPLAYER_H
