#include "matrix.h"
#include <algorithm>

GOLMatrix::GOLMatrix(int size) {
  this->size = size;
  data.resize(size);
  std::fill(data.begin(), data.begin() + size, *new std::vector<int>(size));
}

void GOLMatrix::calibrate(int *x, int *y) {
  if (*x >= size)
    *x -= size;
  if (*y >= size)
    *y -= size;
  if (*x < 0)
    *x = size + *x;
  if (*y < 0)
    *y = size + *y;
}

int GOLMatrix::get(int x, int y) {
  calibrate(&x, &y);
  return data[x][y];
}

int &GOLMatrix::operator()(int x, int y) {
  calibrate(&x, &y);
  return data[x][y];
}

void GOLMatrix::set(int x, int y, int val) {
  calibrate(&x, &y);
  data[x][y] = val;
}

void GOLMatrix::clear() {
  data.clear();
  data.resize(size);
  std::fill(data.begin(), data.begin() + size, *new std::vector<int>(size));
}
