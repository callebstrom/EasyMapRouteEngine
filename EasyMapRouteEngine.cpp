// EasyMapRouteEngine.cpp : Defines the entry point for the engine.
//
#pragma once

#include "stdafx.h"
#include "headers/EasyMapRouteEngine.h"

using namespace std;


EasyMapRouteEngine::EasyMapRouteEngine() {

}

EasyMapRouteEngine::EasyMapRouteEngine(char* bumpMapResource) {
	this->bMap = new BumpMap(bumpMapResource);
}

EasyMapRouteEngine::~EasyMapRouteEngine() {

}	

