#ifndef RRPG_PLAYER_HPP
#define RRPG_PLAYER_HPP

class RRPGPlayer {
    public:
        RRPGPlayer();
        virtual ~RRPGPlayer();
        inline bool is_player() const {
            return true;
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
