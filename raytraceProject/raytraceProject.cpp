﻿// raytraceProject.cpp : Defines the entry point for the application.
//

#include "raytraceProject.h"
#include "vec3.h"
#include "color.h"

#include <iostream>

using namespace std;

const int image_width = 256;
const int image_height = 256;

int main(){
	const int image_width = 256;
	const int image_height = 256;
	cout << "P3\n" << image_width << ' ' << image_height << "\n255\n";
	for (int j = image_height - 1; j >= 0; --j) {
		cerr << "\rScanlines remaining: " << j << ' ' << std::flush;
		for (int i = 0; i < image_width; ++i) {
			color pixel_color(double(i) / (image_width - 1), double(i) / (image_height - 1), 0.25);
			write_color(cout, pixel_color);
		}
	}
	cerr << "\nDone. \n";
}
