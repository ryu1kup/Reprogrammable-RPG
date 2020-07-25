#ifndef RRPG_USER_PLAYABLES_HPP
#define RRPG_USER_PLAYABLES_HPP

#include "RRPGPlayer.hpp"
#include "RRPGPlayerJobs.hpp"

namespace RRPGUserPlayables {
    class Soldier : public RRPGPlayer {
        public:
            Soldier();
            ~Soldier();

        private:
            RRPGPlayerJobs job;
    };

    class Wizard : public RRPGPlayer {
        public:
            Wizard();
            ~Wizard();

        private:
            RRPGPlayerJobs job;
    };

    class Monk : public RRPGPlayer {
        public:
            Monk();
            ~Monk();

        private:
            RRPGPlayerJobs job;
    };
}

#endif
