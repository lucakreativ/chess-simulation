#include <iostream>

using namespace std;

class Player {
    public:
        string name;
        int ELO;
        int seeding;

        Player(int seedingCon, string nameCon, int ELOCon) {
            name = nameCon;
            seeding = seedingCon;
            ELO = ELOCon;
        }
};