#include "Audiobestand.h"
#include "Mediaplayer.h"
#include <iostream>
#include <exception>


using namespace std;

int main() {
    try {
        Audiobestand dreams{"Dreams", 253, "Fleetwood Mac"};
        Audiobestand smile{"Smile", 200, "Lilly Allen"};

        Mediaplayer m;
        m.add_audiobestand(&smile);
        m.add_audiobestand(&dreams);

        m.make_playlist("Chill");
        m.add_to_playlist("Chill", "Smile");
        m.add_to_playlist("Chill", "Dreams");


        m.laad_playlist("Chill");
        m.toon_huidige_playlist();
        m.speel_volgende();
        m.toon_huidige_playlist();

        m.speel_volgende();
        m.speel_volgende();

        m.toon_huidig_audiobestand();

        m.laad_playlist("Soundtrack");

    } catch (exception* e){
        cout << "Error: " << e->what() << endl;
        delete e;
    }
}
