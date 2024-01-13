#include <iostream>

using namespace std;
#include "DenTweede.h"
#include "DenDerde.h"
#include "EnDeVierde.h"

class DenEerste: public DenTweede {
public:
    DenEerste(){
        DenDerde d;
        cout << "4, ";
    }

    virtual ~DenEerste(){
        cout << "6, ";
    }

private:
    EnDeVierde v;
};

int main() {
    DenEerste d;
    return 0;
}