#pragma once

#include <atomic>
#include <thread>
#include <chrono>
#include "ofMain.h"

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void mouseEntered(int x, int y);
		void mouseExited(int x, int y);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
		
		void exit();

		void threadLoop(std::atomic<bool>& program_is_running, unsigned int update_interval_millisecs);

		std::thread t;

		std::atomic<bool> running{ true };
		int updateMilli = 16; // 60FPS 1/60

};
