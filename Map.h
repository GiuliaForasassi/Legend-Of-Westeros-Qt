//
// Created by acasali on 27/11/16.
//

#ifndef LEGENDS_OF_WESTEROS_MAP_H
#define LEGENDS_OF_WESTEROS_MAP_H

#include <vector>
#include <QMediaPlayer>

#include "Territory.h"
#define numRows 10
#define numCols 6

typedef double typeElem;

using namespace std;

class Map {

public:
    Map();

    //Map(int r, int c);

    void show();

    Territory readTerritory(int r, int c);

    void writeTerritory(int r, int c, Territory val);

    int getNumRows() const {
        return rows;
    }

    int getNumColumns() const {
        return columns;
    }

    bool conquer(int invaderRow, int invaderColumn, int defenderRow, int defenderColumn, bool &esito);
    float calculateStrength(int initialRow, int initialColumn, bool isInvader);
    void countTroops(string nomeCasata, int &numMagic, int &numSimple);
    bool hasEnemies(int row, int column);

private:
    int rows;
    int columns;
    Territory matrix[numRows][numCols];

    float calculateStrengthRecursive(int initialRow, int initialColumn, bool isInvader, vector<vector<bool>> &calculatedMat);
    float controlledCall(int row, int col, bool isInvader, string armyName, vector<vector<bool>> &calculatedMat);
    QMediaPlayer *music;
};

#endif //LEGENDS_OF_WESTEROS_MAP_H
