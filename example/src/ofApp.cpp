#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    polygon1.clear();
    for (int i=0; i<4; i++) {
        polygon1.addVertex(ofRandom(ofGetWidth()), ofRandom(ofGetHeight()));
    }
    polygon1.addVertex(polygon1.getVertices()[0]);  // loop back to first point
}

//--------------------------------------------------------------
void ofApp::update(){
    p.set(ofGetMouseX(), ofGetMouseY());
}

//--------------------------------------------------------------
void ofApp::draw(){
    ofBackground(255);
    ofSetLineWidth(8);
    
    if (pipg.isInside(polygon1, p)) {
        ofSetColor(0, 255, 0);
    }
    else {
        ofSetColor(255, 0, 0);
    }
    polygon1.draw();
    
    ofSetColor(0);
    ofDrawBitmapString("move your mouse into the polygon. press 'r' to make new polygon.", 10, 20);
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    if (key=='r') setup();
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
void ofApp::windowResized(int w, int h){
    
}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){
    
}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){
    
}
