#ifndef RRPG_BATTLE_HPP
#define RRPG_BATTLE_HPP

#include "RRPGPlayerJobs.hpp"
#include "RRPGEnemyFamily.hpp"

enum class RRPGBattleStatus {
    win,
    lose,
};

template<class PlayerClass, class EnemyClass>
class RRPGBattle {
    public:
        explicit RRPGBattle(PlayerClass *player, EnemyClass *enemy);
        ~RRPGBattle();
        RRPGBattleStatus start();

    private:
        PlayerClass *player;
        EnemyClass *enemy;
};

template <class PlayerClass, class EnemyClass>
RRPGBattle<PlayerClass, EnemyClass>::RRPGBattle(PlayerClass *player, EnemyClass *enemy) :
    player(player),
    enemy(enemy)
{}

template <class PlayerClass, class EnemyClass>
RRPGBattle<PlayerClass, EnemyClass>::~RRPGBattle(){}

template <class PlayerClass, class EnemyClass>
RRPGBattleStatus RRPGBattle<PlayerClass, EnemyClass>::start(){
    RRPGBattleStatus status = RRPGBattleStatus::lose;
    while (true) {
        if (enemy->is_dead) {
            status = RRPGBattleStatus::win;
            break;
        }

        if (player->is_dead) {
            status = RRPGBattleStatus::lose;
                break;
        }
        break;
    } 
    return status;
}

#endif
