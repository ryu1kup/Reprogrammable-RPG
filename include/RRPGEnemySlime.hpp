#ifndef RRPG_ENEMY_SLIME_HPP 
#define RRPG_ENEMY_SLIME_HPP

#include "RRPGEnemy.hpp"
#include "RRPGEnemyFamily.hpp"

class RRPGEnemySlime : public RRPGEnemy {
    public:
        RRPGEnemySlime();
        ~RRPGEnemySlime();

    private:
        RRPGEnemyFamily family;
};

#endif
