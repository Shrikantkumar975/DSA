#include <iostream>

class Triangle {

//here to code

int main() {
  double s1, s2, s3;
  cout << "Input the lengths of the three sides of the triangle:\n";
  cout << "Side1: ";
  cin >> s1;
  cout << "Side2: ";
  cin >> s2;
  cout << "Side3: ";
  cin >> s3;

  Triangle t(s1, s2, s3);
  t.determineType();

  return 0;
}


// sample input and output:- 


//  Input the lengths of the three sides of the triangle:
// Side1: 3
// Side2: 3
// Side3: 3
// output -> Equilateral Triangle
// Input the lengths of the three sides of the triangle:
// Side1: 3
// Side2: 4
// Side3: 5
// output -> Scalene Triangle
// Input the lengths of the three sides of the triangle:
// Side1: 5
// Side2: 5
// Side3: 7
// output -> Isosceles Triangle