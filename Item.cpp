#include "Item.h"
using namespace std;

Item::Item(const string& s){
  Name = s;
}

Consumable::Consumable(int H, int M, const string& s):Item(s){
  HP = H;
  MP = M
}

Wearable::Wearable(int H, int M, int S, int D, int I, const string& s):Item(s){
  Defense = D;
  Intel = I;
  Strength = S;
  HP = H;
  MP = M;
}

OnHand::OnHand(int M, int Str, int Sp, int I, int A, const string& s):Item(s){
  MP = M;
  Strength = Str;
  Speed = Sp;
  Intel = I;
  Accuracy = A;
}

OffHand::OffHand(int M, int Str, int D, int Sp, int I):Item(s){
  MP = M;
  Strength = Str;
  Defense = D;
  Speed = Sp;
  Intel = I;
}
