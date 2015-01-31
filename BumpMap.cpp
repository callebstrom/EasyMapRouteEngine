#include "stdafx.h"
#include "headers/BumpMap.h"

#pragma once

using namespace std;

//Initializes an array of sectors. Size based on vGran and hGran
void BumpMap::initSectorArr() {
	
}

//Initialize the pixel coords of each sector
void BumpMap::initPixelCoords() {

}

BumpMap::BumpMap() {
	this->vGran = 0;	//Init the vertical granularity of the bumb map
	this->hGran = 0;	//Init the horizontal granularity of the bumb map
}

//Construct. Image path as arg
BumpMap::BumpMap(char* bumpMapResource, int vGran, int hGran) {
	this->vGran = vGran;	//Init the vertical granularity of the bumb map
	this->hGran = hGran;	//Init the horizontal granularity of the bumb map
}

BumpMap::~BumpMap() {

}

