#ifndef PROJECT_CRUISER_H
#define PROJECT_CRUISER_H
#include "Ship.h"

class Cruiser : public Ship {
public:
    Cruiser() : type_(cruiser),  stealth_(250), size_ (8), damage_(50), specialName_("Bombardement");
private:
    void special() const override;
};

#endif //PROJECT_CRUISER_H
