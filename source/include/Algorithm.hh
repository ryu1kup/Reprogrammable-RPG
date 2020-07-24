#ifndef Algorithm_hh
#define Algorithm_hh

#include "Character.hh"

class Character;

class Algorithm
{
	private:
		Character* character;

	public:
		Algorithm();
		~Algorithm();
		int Attack(Character* enemy);
	
		Algorithm& operator = (const Algorithm& obj) {
			return *this;
		}

};


#endif
