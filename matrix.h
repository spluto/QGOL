#ifndef GOLMATRIX_H
#define GOLMATRIX_H

#include <vector>

class GOLMatrix {
public:
  GOLMatrix(int size);
  int &operator()(int x, int y);
  bool operator==(GOLMatrix matrix);
  int get(int x, int y);
  void set(int x, int y, int val);
  void clear();

private:
  std::vector<std::vector<int> > data;
  void calibrate(int *x, int *y);
  int size;
};

#endif // GOLMATRIX_H
