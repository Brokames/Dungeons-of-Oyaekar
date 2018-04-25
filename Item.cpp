#include "Item.h"
using namespace std;

Item::Item(const string& s){
  Name = s;
}

//Initializes all member data
Consumable::Consumable(int H, int M, const string& N):Item(N){
  HP = H;
  MP = M;
  Strength = 0;
  Defense = 0;
  Speed = 0;
  Intel = 0;
  Accuracy = 0;
}

//Initializes all member data
Wearable::Wearable(int H, int M, int Str, int Def, int Sp, int In, int Acc, const string& N):Item(N){
  HP = H;
  MP = M;
  Strength = Str;
  Defense = Def;
  Speed = Sp;
  Intel = In;
  Accuracy = Acc;
}

//Initializes all member data
OnHand::OnHand(int H, int M, int Str, int Def, int Sp, int In, int Acc, const string& N):Item(s){
  HP = H;
  MP = M;
  Strength = Str;
  Defense = Def;
  Speed = Sp;
  Intel = In;
  Accuracy = Acc;
}

//Initializes all member data
OffHand::OffHand(int H, int M, int Str, int Def, int Sp, int In, int Acc, const string& N):Item(s){
  HP = H;
  MP = M;
  Strength = Str;
  Defense = Def;
  Speed = Sp;
  Intel = In;
  Accuracy = Acc;
}
