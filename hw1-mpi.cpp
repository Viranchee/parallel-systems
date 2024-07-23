#include <experimental/simd>
#include <iostream>
#include <mpi.h>
#include <omp.h>
#include <stdio.h>
#include <vector>
//

using namespace std;

int main(int argc, char *argv[]) {
  printf("Hello, World!\n");
  vector<int> numbers;
  for (int i = 0; i < 100; i++) {
    numbers.push_back(i);
  }
  cout << "numbers.size() = " << numbers.size() << endl;

  return 0;
}