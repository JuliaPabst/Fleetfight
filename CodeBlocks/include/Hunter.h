#ifndef HUNTER_H
#define HUNTER_H

#include "Ship.h"

class Hunter : public Ship {
public:
    Hunter() : Ship(hunter, 75, 4, 30, "Kritische Treffer"){}
    virtual ~Hunter();
private:
    void special() const override;
};

#endif // HUNTER_H
