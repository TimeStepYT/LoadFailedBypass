#include <Geode/Geode.hpp>
#include <Geode/modify/PlayLayer.hpp>
#include <Geode/modify/LevelTools.hpp>

using namespace geode::prelude;


// This is very stupid and it sometimes just lets you play corrupted levels and sometimes crashes
// Preserved here because I think this looks funny and it worked because I was lucky
// (This is reading a random memory address)

// class $modify(MyPlayLayer, PlayLayer) {
//     void onQuit() {
//         int* thing = reinterpret_cast<int*>(this + 0x36e0);
//         log::info("{}", *thing);
//         if (*thing == 0) {
//             *thing = 1;
//             PlayLayer::startGame();
//             return;
//         }
//         PlayLayer::onQuit();
//     }
// };

// This is actually what we need

class $modify(MyLevelTools, LevelTools) {
    static bool verifyLevelIntegrity(gd::string p0, int p1) {
        return true;
    }
};