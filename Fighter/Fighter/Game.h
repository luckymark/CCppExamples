#ifndef __Fighters__Game__
#define __Fighters__Game__

#include <random>
#include <ctime>

class Game{
public:
    static Game* getInstance();
    static std::default_random_engine random_engine;
private:
//    Game();
    
    static Game* instance;
};

#endif /* defined(__Fighters__Game__) */
