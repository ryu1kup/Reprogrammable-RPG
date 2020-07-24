#ifndef Character_hh
#define Character_hh

#include <iostream>

#include "Algorithm.hh"
#include "UserAlgorithm.hh"

class Algorithm;
class UserAlgorithm;

class Character
{
	private:
		int hit_point;
		int magic_point;
		int attack_power;
		int agility;
		UserAlgorithm* ualgo;

	public:
		Character();
		~Character();
		void Initialization();
		void SetLevel(int lv);
		void Damege(int damege_point);
		int GetHitPoint();
		int GetMagicPoint();
		int GetAttackPower();
		int GetAgility();
		//void SetAlgorithm();
		void SetAlgorithm(UserAlgorithm* ualgo);
		void StartAlgorithm(Character* enemy);
		
		Character& operator = (const Character& obj) {
			return *this;
		}

};


#endif
