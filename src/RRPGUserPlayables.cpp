#include "RRPGUserPlayables.hpp"
#include "RRPGPlayerJobs.hpp"

RRPGUserPlayables::Soldier::Soldier() :
    job(RRPGPlayerJobs::soldier)
{}

RRPGUserPlayables::Soldier::~Soldier(){}

RRPGUserPlayables::Wizard::Wizard() :
    job(RRPGPlayerJobs::wizard)
{}

RRPGUserPlayables::Wizard::~Wizard(){}

RRPGUserPlayables::Monk::Monk() :
    job(RRPGPlayerJobs::monk)
{}

RRPGUserPlayables::Monk::~Monk(){}
