#pragma once

using namespace std;

struct Sector {
	int vSectorIndex, hSectorIndex, topLeftPixCoord, bottomRightPixCoord;
};

class BumpMap {
	private:
		int vGran, hGran;
		vector<Sector>sectors;
		void* image;

		void initSectorArr();
		void initPixelCoords();
	public:
		BumpMap();
		BumpMap(char* bumpMapResource, int vGran = 10, int hGran = 10);
		~BumpMap();
};
