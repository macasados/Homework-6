#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;
double PowerGen (double H, double Q);

int main() {
  
//create variables
  double p, H, Q;

  //run the created function
  p = PowerGen (H, Q);

 // display the output
  cout << p << endl;
  
}

double PowerGen (double H, double Q)
{
  cout << "Enter value for flow rate volume (m3/s): " << endl;
  cin >> Q;
  cout << "Enter value for head distance (meters) " << endl; 
  cin >> H;
    double P = ((997)*(Q)*(H)*(9.81));
  return p;
  
}