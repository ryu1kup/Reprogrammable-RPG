#ifndef Adventure_hh
#define Adventure_hh

#include <iostream>
#include <Character.hh>
#include <Algorithm.hh>

class Adventure
{
	private:
	public:
		Adventure();
		~Adventure();
		void StartAdventure();
		void EndAdventure();
		void Battle(Character* chara, Character* enemy);
};

#endif
