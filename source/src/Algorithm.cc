#include "Algorithm.hh"


Algorithm::Algorithm()
{
}

Algorithm::~Algorithm()
{

}

int Algorithm::Attack(Character* enemy)
{
	int attack_power = character->GetAttackPower();
	enemy->Damege(attack_power);
	return 0;
}

/* future
void Algolithm::Magic(Magic* magic)
{
}
*/
