#ifndef PROJECT_HUNTER_H
#define PROJECT_HUNTER_H
#include "Ship.h"

class Hunter : public Ship {
public:
    Hunter() : type_(hunter),  stealth_(75), size_ (4), damage_(30), specialName_("Kritische Treffer");;
private:
    void special() const override;
};

#endif //PROJECT_HUNTER_H
