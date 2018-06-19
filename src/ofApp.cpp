#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	t = std::thread([this]{ threadLoop(std::ref(running), updateMilli); });
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){

}

void ofApp::threadLoop(std::atomic<bool>& isRunning, unsigned int milliseconds)
{
	const auto wait_duration = std::chrono::milliseconds(milliseconds);
	while (isRunning)
	{
		std::cout << "update heavy stuff\n" << endl;
		std::this_thread::sleep_for(wait_duration);
		std::cout << "main thread\n" << endl;
	}
}


void ofApp::exit() {
	running = false;
	t.join();
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
