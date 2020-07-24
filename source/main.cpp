#include "Adventure.hh"
#include "Character.hh"
#include "Algorithm.hh"
#include "UserAlgorithm.hh"
#include "unistd.h"

int main(int argc, char* argv[])
{

	Adventure* adventure;
	Character* character = new Character();

	//character info
	int Lv = 10;
	character->Character::Initialization();
	character->SetLevel(Lv);
	std::cout << "-- Character Information --"<<std::endl;
	//std::cout << "HitPoint : " << character->GetHitPoint() <<std::endl;
	std::cout << "User Lv. " << Lv <<std::endl;
	std::cout << "---------------------------"<<std::endl;

	std::cout << "-- start adventure --" <<std::endl;
	adventure->StartAdventure();
	std::cout << ""  <<std::endl;
	
	UserAlgorithm* ualgo = new UserAlgorithm();
	character->SetAlgorithm(ualgo);	
	ualgo->SetCharacter(character);

	for(int i=0;i<100;i++)
	{
		std::cout << ""  <<std::endl;
		std::cout << "Lodding..."  <<std::endl;
		//sleep(2);
		std::cout << ""  <<std::endl;
		std::cout << "battle start"  <<std::endl;
		//std::cout << ""  <<std::endl;
		//set enemy
		Character* enemy = new Character();
		enemy->SetLevel(i);
		UserAlgorithm* enemyAlgo = new UserAlgorithm();
		enemy->SetAlgorithm(enemyAlgo);
		enemyAlgo->SetCharacter(enemy);
		//start battle (algorithm)
		int turn =0;
		//while(turn==10)
		while(true)
		{
			adventure->Battle(character,enemy);
			if(enemy->GetHitPoint()<=0 || character->GetHitPoint()<=0)break;
			turn++;
		}
		std::cout << "battle end (HP=" << character->GetHitPoint() << ")" <<std::endl;
		if(character->GetHitPoint()>0)std::cout << "user win" << std::endl;
		if(character->GetHitPoint()<=0){
			std::cout << "user lost" << std::endl;
			std::cout << "GAME OVER ...  (ENEMY Lv." << i << ")" << std::endl;
			return -1;
		}
		std::cout << ""  <<std::endl;
		delete enemy;
		delete enemyAlgo;
		std::cout << "Recovery My character.."  <<std::endl;
		character->SetLevel(Lv);
	}
	
	std::cout << "GAME CLEAR !!" << std::endl;
	
	return 0;

}



