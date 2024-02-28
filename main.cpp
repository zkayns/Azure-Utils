#include <Geode/Bindings.hpp>
#include <Geode/binding/PlayerObject.hpp>
#include <Geode/modify/UILayer.hpp>
#include <Geode/binding/FLAlertLayer.hpp>
#include <geode.custom-keybinds/include/Keybinds.hpp>
#include <Geode/modify/GJBaseGameLayer.hpp>
#include <Geode/binding/PlayLayer.hpp>
using namespace geode::prelude;
$execute {
    using namespace keybinds;
//gamemodes
    BindManager::get()->registerBindable({
        "azutils_cube"_spr,
        "Cube",
        "Changes the player's gamemode to Cube.",
        { Keybind::create(KEY_Zero, Modifier::Control) },
        "Play"
    });
    BindManager::get()->registerBindable({
        "azutils_ship"_spr,
        "Ship",
        "Changes the player's gamemode to Ship.",
        { Keybind::create(KEY_One, Modifier::Control) },
        "Play"
    });
    BindManager::get()->registerBindable({
        "azutils_ball"_spr,
        "Ball",
        "Changes the player's gamemode to Ball.",
        { Keybind::create(KEY_Two, Modifier::Control) },
        "Play"
    });
    BindManager::get()->registerBindable({
        "azutils_ufo"_spr,
        "UFO",
        "Changes the player's gamemode to UFO.",
        { Keybind::create(KEY_Three, Modifier::Control) },
        "Play"
    });
    BindManager::get()->registerBindable({
        "azutils_wave"_spr,
        "Wave",
        "Changes the player's gamemode to Wave.",
        { Keybind::create(KEY_Four, Modifier::Control) },
        "Play"
    });
    BindManager::get()->registerBindable({
        "azutils_robot"_spr,
        "Robot",
        "Changes the player's gamemode to Robot.",
        { Keybind::create(KEY_Five, Modifier::Control) },
        "Play"
    });
    BindManager::get()->registerBindable({
        "azutils_spider"_spr,
        "Spider",
        "Changes the player's gamemode to Spider.",
        { Keybind::create(KEY_Six, Modifier::Control) },
        "Play"
    });
    BindManager::get()->registerBindable({
        "azutils_swing"_spr,
        "Swing",
        "Changes the player's gamemode to Swing.",
        { Keybind::create(KEY_Seven, Modifier::Control) },
        "Play"
    });
//gravity change
    BindManager::get()->registerBindable({
        "azutils_gravity"_spr,
        "Change Gravity",
        "Swaps the player's current gravity.",
        { Keybind::create(KEY_G, Modifier::Control) },
        "Play"
    });
//suicide
    BindManager::get()->registerBindable({
        "azutils_kill"_spr,
        "New Attempt",
        "Starts a new attempt.",
        { Keybind::create(KEY_K) },
        "Play"
    });
//instant complete
    BindManager::get()->registerBindable({
        "azutils_ic"_spr,
        "Instant Complete",
        "Instantly completes the current level.",
        { Keybind::create(KEY_I) },
        "Play"
    });
}
struct $modify(UILayer) {
    bool init(GJBaseGameLayer* gameLayer) {
        if(!UILayer::init(gameLayer))
            return false;
        Loader::get()->queueInMainThread([this] {
            if(!PlayLayer::get()) return;
            this->defineKeybind("azutils_cube"_spr, [this] {
                auto playLayer = PlayLayer::get();
                auto player1 = playLayer->m_player1;
                player1->toggleFlyMode(false, false);
                player1->toggleRollMode(false, false);
                player1->toggleBirdMode(false, false);
                player1->toggleDartMode(false, false);
                player1->toggleRobotMode(false, false);
                player1->toggleSpiderMode(false, false);
                player1->toggleSwingMode(false, false);
                auto obj = TeleportPortalObject::create("edit_eGameRotBtn_001.png", true);
                obj->m_cameraIsFreeMode = true;
                playLayer->updateCameraMode(obj, false);
            });
            this->defineKeybind("azutils_ship"_spr, [this] {
                auto playLayer = PlayLayer::get();
                auto player1 = playLayer->m_player1;
                player1->toggleFlyMode(true, true);
                player1->toggleRollMode(false, false);
                player1->toggleBirdMode(false, false);
                player1->toggleDartMode(false, false);
                player1->toggleRobotMode(false, false);
                player1->toggleSpiderMode(false, false);
                player1->toggleSwingMode(false, false);
                auto obj = TeleportPortalObject::create("edit_eGameRotBtn_001.png", true);
                obj->m_cameraIsFreeMode = true;
                playLayer->updateCameraMode(obj, false);
            });
            this->defineKeybind("azutils_ball"_spr, [this] {
                auto playLayer = PlayLayer::get();
                auto player1 = playLayer->m_player1;
                player1->toggleFlyMode(false, false);
                player1->toggleRollMode(true, true);
                player1->toggleBirdMode(false, false);
                player1->toggleDartMode(false, false);
                player1->toggleRobotMode(false, false);
                player1->toggleSpiderMode(false, false);
                player1->toggleSwingMode(false, false);
                auto obj = TeleportPortalObject::create("edit_eGameRotBtn_001.png", true);
                obj->m_cameraIsFreeMode = true;
                playLayer->updateCameraMode(obj, false);
            });
            this->defineKeybind("azutils_ufo"_spr, [this] {
                auto playLayer = PlayLayer::get();
                auto player1 = playLayer->m_player1;
                player1->toggleFlyMode(false, false);
                player1->toggleRollMode(false, false);
                player1->toggleBirdMode(true, true);
                player1->toggleDartMode(false, false);
                player1->toggleRobotMode(false, false);
                player1->toggleSpiderMode(false, false);
                player1->toggleSwingMode(false, false);
                auto obj = TeleportPortalObject::create("edit_eGameRotBtn_001.png", true);
                obj->m_cameraIsFreeMode = true;
                playLayer->updateCameraMode(obj, false);
            });
            this->defineKeybind("azutils_wave"_spr, [this] {
                auto playLayer = PlayLayer::get();
                auto player1 = playLayer->m_player1;
                player1->toggleFlyMode(false, false);
                player1->toggleRollMode(false, false);
                player1->toggleBirdMode(false, false);
                player1->toggleDartMode(true, true);
                player1->toggleRobotMode(false, false);
                player1->toggleSpiderMode(false, false);
                player1->toggleSwingMode(false, false);
                auto obj = TeleportPortalObject::create("edit_eGameRotBtn_001.png", true);
                obj->m_cameraIsFreeMode = true;
                playLayer->updateCameraMode(obj, false);
            });
            this->defineKeybind("azutils_robot"_spr, [this] {
                auto playLayer = PlayLayer::get();
                auto player1 = playLayer->m_player1;
                player1->toggleFlyMode(false, false);
                player1->toggleRollMode(false, false);
                player1->toggleBirdMode(false, false);
                player1->toggleDartMode(false, false);
                player1->toggleRobotMode(true, true);
                player1->toggleSpiderMode(false, false);
                player1->toggleSwingMode(false, false);
                auto obj = TeleportPortalObject::create("edit_eGameRotBtn_001.png", true);
                obj->m_cameraIsFreeMode = true;
                playLayer->updateCameraMode(obj, false);
            });
            this->defineKeybind("azutils_spider"_spr, [this] {
                auto playLayer = PlayLayer::get();
                auto player1 = playLayer->m_player1;
                player1->toggleFlyMode(false, false);
                player1->toggleRollMode(false, false);
                player1->toggleBirdMode(false, false);
                player1->toggleDartMode(false, false);
                player1->toggleRobotMode(false, false);
                player1->toggleSpiderMode(true, true);
                player1->toggleSwingMode(false, false);
                auto obj = TeleportPortalObject::create("edit_eGameRotBtn_001.png", true);
                obj->m_cameraIsFreeMode = true;
                playLayer->updateCameraMode(obj, false);
            });
            this->defineKeybind("azutils_swing"_spr, [this] {
                auto playLayer = PlayLayer::get();
                auto player1 = playLayer->m_player1;
                player1->toggleFlyMode(false, false);
                player1->toggleRollMode(false, false);
                player1->toggleBirdMode(false, false);
                player1->toggleDartMode(false, false);
                player1->toggleRobotMode(false, false);
                player1->toggleSpiderMode(false, false);
                player1->toggleSwingMode(true, true);
                auto obj = TeleportPortalObject::create("edit_eGameRotBtn_001.png", true);
                obj->m_cameraIsFreeMode = true;
                playLayer->updateCameraMode(obj, false);
            });
            this->defineKeybind("azutils_gravity"_spr, [this] {
                auto playLayer = PlayLayer::get();
                auto player1 = static_cast<PlayerObject*>(playLayer->m_player1);
                player1->flipGravity(!player1->m_isUpsideDown, true);
            });
            this->defineKeybind("azutils_kill"_spr, [this] {
                auto playLayer = PlayLayer::get();
                playLayer->resetLevelFromStart();
            });
            this->defineKeybind("azutils_ic"_spr, [this] {
                auto playLayer = PlayLayer::get();
                auto player1 = static_cast<PlayerObject*>(playLayer->m_player1);
                playLayer->playPlatformerEndAnimationToPos(player1->m_position, false);
            });
        });
        return true;
    }
    void defineKeybind(const char* id, std::function<void()> callback) {
        this->template addEventListener<keybinds::InvokeBindFilter>([=](keybinds::InvokeBindEvent* event) {
            if (event->isDown()) {
               callback();
            }
            return ListenerResult::Propagate;
        }, id);
    }
};
