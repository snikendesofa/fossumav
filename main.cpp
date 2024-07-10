// Main file used for starting the AV.

#include <iostream>
#include <C:\Users\haako\OneDrive\Documents\GitHub\fossumav\signatures.h>
using namespace std;

int main() {
  Signature sign1("W)GHJWEOG=WIJG=)¤J)=", "Trojan Horse - Chinese", 5);
  cout << "Signature name: " << sign1.name << "\nHash: " << sign1.hash << "\nDanger level: " << sign1.dangerlevel;
  return 0;
}