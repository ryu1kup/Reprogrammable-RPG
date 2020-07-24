#include "Character.hh"


Character::Character()
{
	hit_point    = 0;
	magic_point  = 0;
	attack_power = 0;
	agility      = 0;
}

Character::~Character()
{
}

void Character::Initialization()
{
}

void Character::SetLevel(int lv)
{
	hit_point    = lv * 10 + 10;
	magic_point  = lv * 10 + 10;
	attack_power = lv * 1  + 1;
	agility      = lv * 1  + 10;
}

void Character::Damege(int damege_point)
{
	hit_point += -damege_point;
}

int Character::GetHitPoint()
{
	return hit_point;
}

int Character::GetMagicPoint()
{
	return magic_point;
}

int Character::GetAttackPower()
{
	return attack_power;
}

int Character::GetAgility()
{
	return agility;
}

//void Character::SetAlgorithm(Algorithm* algorithm){
void Character::SetAlgorithm(UserAlgorithm* ualgo_in){
	ualgo = ualgo_in;
	std::cout << "setting Algorithm..." <<std::endl;
}

void Character::StartAlgorithm(Character* enemy)
{
	ualgo->Main(enemy);
}


