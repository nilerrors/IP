//
// Created by nilerrors on 20/12/2023.
//

#include "Mediaplayer.h"

Mediaplayer::Mediaplayer() {
}

void Mediaplayer::add_audiobestand(Audiobestand *a) {
    bestanden[a->getTitel()] = a;
}

void Mediaplayer::make_playlist(const std::string& naam) {
    playlists[naam] = {};
}

void Mediaplayer::add_to_playlist(const string &playlistnaam, const string &bestand) {
    if (playlists.find(playlistnaam) == playlists.end()) {
        std::cout << "Error: Playlist '" + playlistnaam + "' niet gevonden" << std::endl;
        return;
    }
    playlists[playlistnaam].push_back(bestand);
}

void Mediaplayer::laad_playlist(const string &playlist_naam) {
    if (playlists.find(playlist_naam) == playlists.end()) {
        std::cout << "Error: Playlist '" + playlist_naam + "' niet gevonden" << std::endl;
        return;
    }

    long totalTime = 0;

    auto playlist = playlists.find(playlist_naam)->second;

    for (const auto &bestand : playlist) {
        totalTime = bestanden.find(bestand)->second->getDuur();
    }

    huidigePlaylist = playlist_naam;

    std::cout << "Playlist geladen: " + playlist_naam + " - " << Time(totalTime).toString() << std::endl;
}

void Mediaplayer::toon_huidige_playlist() const {
    long totalTime = 0;

    auto playlist = playlists.find(huidigePlaylist)->second;

    for (const auto &bestand : playlist) {
        totalTime = bestanden.find(bestand)->second->getDuur();
    }

    std::cout << "Playlist geladen: " + huidigePlaylist + " - " << Time(totalTime).toString() << std::endl;
    for (const auto &bestand : playlist) {
        if (playlist[huidigeBestand] == bestand) std::cout << "> ";
        else std::cout << "- ";
        std::cout << bestand << std::endl;
    }
}

void Mediaplayer::speel_volgende() {
    if (huidigeBestand + 1 >= playlists[huidigePlaylist].size()) return;
    huidigeBestand++;
    std::cout << "Afspelen van " << playlists[huidigePlaylist][huidigeBestand] << std::endl;
}

void Mediaplayer::toon_huidig_audiobestand() {
    std::cout << bestanden[playlists[huidigePlaylist][huidigeBestand]]->toString() << std::endl;
}


