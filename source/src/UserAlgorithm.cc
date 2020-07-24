#include "UserAlgorithm.hh"


UserAlgorithm::UserAlgorithm()
{
}
UserAlgorithm::~UserAlgorithm()
{
}

void UserAlgorithm::Main(Character* enemy)
{
	//std::cout << "HP : " << character->GetHitPoint() <<std::endl;
	enemy->Damege(character->GetAttackPower());
}

void UserAlgorithm::SetCharacter(Character* character_in)
{
	character = character_in;
}

void UserAlgorithm::SetAlgorithm(Algorithm* algorithm_in)
{
	algorithm = algorithm_in;
}


