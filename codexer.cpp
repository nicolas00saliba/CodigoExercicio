#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main() {
  // Conjunto A
  vector<int> A;
  for(int k = 2; k < 10; k++) {
    int x = 2*k;
    A.push_back(x);
  }
  cout << "Conjunto A: { ";
  for(int i = 0; i < A.size(); i++) {
    cout << A[i] << " ";
  }
  cout << "}" << endl;

  // Conjunto B
  vector<int> B;
  for(int t = 3; t < 20; t += 2) {
    int x = 2*t + 1;
    B.push_back(x);
  }
  cout << "Conjunto B: { ";
  for(int i = 0; i < B.size(); i++) {
    cout << B[i] << " ";
  }
  cout << "}" << endl;

  // Conjunto C
  vector<int> C;
  for(int x = 5; x <= 100; x++) {
    C.push_back(x);
  }
  cout << "Conjunto C: { ";
  for(int i = 0; i < C.size(); i++) {
    cout << C[i] << " ";
  }
  cout << "}" << endl;

  // Conjunto D
  vector<int> D;
  int primes[] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31};
  for(int i = 0; i < 11; i++) {
    D.push_back(primes[i]);
  }
  cout << "Conjunto D: { ";
  for(int i = 0; i < D.size(); i++) {
    cout << D[i] << " ";
  }
  cout << "}" << endl;

  // Conjunto E
  vector<int> E;
  for(int k = 2; k < 50; k++) {
    int x = k*k;
    E.push_back(x);
  }
  cout << "Conjunto E: { ";
  for(int i = 0; i < E.size(); i++) {
    cout << E[i] << " ";
  }
  cout << "}" << endl;

  // Conjunto F
  vector<int> F;
  for(int x = -100; x < 0; x++) {
    F.push_back(x);
  }
  cout << "Conjunto F: { ";
  for(int i = 0; i < F.size(); i++) {
    cout << F[i] << " ";
  }
  cout << "}" << endl;

  return 0;
}
