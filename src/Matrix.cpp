#include "../include/Matrix.hpp"
#include <iostream>
#include <random>

using namespace std;

Matrix *Matrix::transpose() {
  Matrix *m = new Matrix(this->numCols, this->numRows, false);
  for (int rows = 0; rows < numRows; rows++) {
    for(int cols = 0; cols < numCols; cols++) {
      m->setValue(cols, rows, this->getValue(rows, cols));
    }
  }
  return m;
}

void Matrix::printToConsole() {
  for(int i = 0; i < numRows; i++) {
    for(int j = 0; j < numCols; j++) {
      cout << this->values.at(i).at(j) << "\t\t";
    }
    cout << endl;
  }
}

Matrix::Matrix(int numRows, int numCols, bool isRandom) {
  this->numRows = numRows;
  this->numCols = numCols;

  for (int rows = 0; rows < numRows; rows++) {
    vector<double> colValues;
    for(int cols = 0; cols < numCols; cols++) {
      double r = 0.00;
      if(isRandom) {
        r = this->generateRandomNumber();
      }
      colValues.push_back(r);
    }
    this->values.push_back(colValues);
  }
}

double Matrix::generateRandomNumber() {
  random_device rd;
  mt19937 gen(rd());
  uniform_real_distribution<> dis(0, 1);
  return dis(gen);
}
