#include <iostream>
#include <stdio.h>

#pragma pack (push, 1)
 
using namespace std;
 
struct BITMAPFILEHEADER
{
	char bfType[2];
	int bfSize;
	char bfReserved1[2];
	char bfReserved2[2];
	int bfOffBits;
};

struct BITMAPINFO
{
	int biSize;
	int biWidth;
	int biHeight;
	char biPlanes[2];
	char biBitCount[2];
	int biCompression;
	int biSizeImage;
	int biXPelsPerMeter;
	int biYPelsPerMeter;
	int biClrUsed;
	int biClrImportant;
};

#pragma pack ( pop)

int main()
{
	struct BITMAPFILEHEADER red;
	struct BITMAPINFO inf;
	
	FILE *input = fopen("input.bmp", "rb");
	fread(&red, sizeof(red), 1, input);
	fread(&inf, sizeof(inf), 1, input);
	
	fclose(input);
	cout << inf.biWidth << " " << inf.biHeight << " " << red.bfSize << endl;
	
}
