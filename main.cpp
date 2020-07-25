#include "RRPGPlayer.hpp"
#include "RRPGEnemy.hpp"
#include "RRPGUserPlayables.hpp"
#include "RRPGEnemySlime.hpp"
#include "RRPGBattle.hpp"

#include <type_traits>

int main(){
    auto player1 = new RRPGUserPlayables::Soldier();
    auto enemy = new RRPGEnemySlime();

    auto battle = new RRPGBattle<std::remove_pointer<decltype(player1)>::type, std::remove_pointer<decltype(enemy)>::type>(player1, enemy);
    battle->start();
}
