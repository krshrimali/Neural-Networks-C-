#ifndef _MATRIX_HPP
#define _MATRIX_HPP

#include <iostream>
#include <vector>
using namespace std;

class Matrix {
public:
  // constructor
  Matrix(int numRows, int numCols, bool isRandom);
  Matrix* transpose();
  double generateRandomNumber();
  void setValue(int r, int c, double v){
    this->values.at(r).at(c) = v;
  }
  double getValue(int row, int col) {
    return this->values.at(row).at(col);
  }

  int getrows() { return this->numRows; }
  int getcols() { return this->numCols; }

  void printToConsole();
private:
  int numRows;
  int numCols;
  int size;
  vector<vector <double>> values;
};

#endif
