#include "Entity.h"

Entity::Entity(int mh, const string& n): MaxHealth(mh), Name(n){
}
string Entity::GetName() const{
    return Name;
}
