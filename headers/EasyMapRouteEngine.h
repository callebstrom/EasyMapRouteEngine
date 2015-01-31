#include "BumpMap.h"

#pragma once

class EasyMapRouteEngine {
	private:
		BumpMap	*bMap;
		EasyMapRouteEngine();
	public:
		EasyMapRouteEngine(char* BumpMapResource);
		~EasyMapRouteEngine();
};
