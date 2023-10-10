#include <iostream>
#include <vector>
#include <fstream>
#include <bits/stdc++.h>
#include "player.h"

using namespace std;


vector<Player> readData () {

    vector<Player> players;
    string filename("test");
    string line, subs;

    ifstream data(filename);

    while (getline(data, line))
    {
        vector<string> playerData;
        stringstream rowData(line);
        while (getline(rowData, subs, ';'))
        {
            playerData.push_back(subs);
        }

        int seeding = stoi(playerData.at(0));
        int ELO = stoi(playerData.at(1));
        
        Player player(seeding, playerData.at(1), ELO);
        
    }
    
}