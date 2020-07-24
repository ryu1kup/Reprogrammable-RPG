#include "Adventure.hh"

Adventure::Adventure()
{
}

Adventure::~Adventure()
{
}

void Adventure::StartAdventure()
{
	std::cout << "start adventure" <<std::endl;
}

void Adventure::EndAdventure()
{
	std::cout << "end adventure" <<std::endl;
}

void Adventure::Battle(Character* chara, Character* enemy)
{
	if( chara->GetAgility() > enemy->GetAgility() )
	{
		chara->StartAlgorithm(enemy);
		std::cout << "[Attack user] User Charactar HP : " << chara->GetHitPoint() << "  Enemy HP : " << enemy->GetHitPoint() <<std::endl;
		if(chara->GetHitPoint()<=0 || enemy->GetHitPoint()<=0)return;
		enemy->StartAlgorithm(chara);
		std::cout << "[Attack enemy] User Charactar HP : " << chara->GetHitPoint() << "  Enemy HP : " << enemy->GetHitPoint() <<std::endl;
		if(chara->GetHitPoint()<=0 || enemy->GetHitPoint()<=0)return;
		std::cout << "[Turn End] User Charactar HP : " << chara->GetHitPoint() << "  Enemy HP : " << enemy->GetHitPoint() <<std::endl;
	}
	else if( chara->GetAgility() < enemy->GetAgility() )
	{
		enemy->StartAlgorithm(chara);
		std::cout << "[Attack enemy] User Charactar HP : " << chara->GetHitPoint() << "  Enemy HP : " << enemy->GetHitPoint() <<std::endl;
		if(chara->GetHitPoint()<=0 || enemy->GetHitPoint()<=0)return;
		chara->StartAlgorithm(enemy);
		std::cout << "[Attack user] User Charactar HP : " << chara->GetHitPoint() << "  Enemy HP : " << enemy->GetHitPoint() <<std::endl;
		if(chara->GetHitPoint()<=0 || enemy->GetHitPoint()<=0)return;
		std::cout << "[Turn End] User Charactar HP : " << chara->GetHitPoint() << "  Enemy HP : " << enemy->GetHitPoint() <<std::endl;
	}
	else{
		chara->StartAlgorithm(enemy);
		std::cout << "[Attack user] User Charactar HP : " << chara->GetHitPoint() << "  Enemy HP : " << enemy->GetHitPoint() <<std::endl;
		if(chara->GetHitPoint()<=0 || enemy->GetHitPoint()<=0)return;
		enemy->StartAlgorithm(chara);
		std::cout << "[Attack enemy] User Charactar HP : " << chara->GetHitPoint() << "  Enemy HP : " << enemy->GetHitPoint() <<std::endl;
		if(chara->GetHitPoint()<=0 || enemy->GetHitPoint()<=0)return;
		std::cout << "[Turn End] User Charactar HP : " << chara->GetHitPoint() << "  Enemy HP : " << enemy->GetHitPoint() <<std::endl;
	}

}




