#include <Geode/Geode.hpp>
#include <Geode/modify/CreatorLayer.hpp>

using namespace geode::prelude;

class $modify(CreatorLayer) {
	//map
	void onAdventureMap(CCObject*) {
		FLAlertLayer::create("The Map", "<cp>The Map</c> has been delayed to <cg>2.21</c>!", "OK")->show(); 
	} 
	//versus
	void onMultiplayer(CCObject*) {
		FLAlertLayer::create("Versus Mode", "<cp>Versus Mode</c> has been delayed to <cg>2.21</c>!", "OK")->show(); 
	} 
	//event
	void onEventLevel(CCObject*) {
		FLAlertLayer::create("Event Levels", "<cp>Event levels</c> have been delayed to <cg>2.21</c>!", "OK")->show(); 
	} 
};
