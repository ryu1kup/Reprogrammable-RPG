#ifndef RRPG_ENEMY_HPP
#define RRPG_ENEMY_HPP

class RRPGEnemy {
    public:
        RRPGEnemy();
        virtual ~RRPGEnemy();
        inline bool is_player() const {
            return false;
        }

    private:
        unsigned int lv;
        int hp;
        int mp;
        unsigned int atk;
        unsigned int def;

    public:
        bool is_dead;
};

#endif
