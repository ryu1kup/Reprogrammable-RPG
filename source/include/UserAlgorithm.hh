#ifndef UserAlgorithm_hh
#define UserAlgorithm_hh

#include "Character.hh"
#include "Algorithm.hh"

class Algorithm;
class Character;

class UserAlgorithm
{
	private:
		Character* character;
		Algorithm* algorithm;
	public:
		UserAlgorithm();
		~UserAlgorithm();
		void Main(Character* enemy);
		void SetCharacter(Character* character_in);
		void SetAlgorithm(Algorithm* algorithm_in);
};

#endif
