#include"libOne.h"
void roundFace(float px, float py) {
	fill(255, 255, 255);
	circle(px, py, 300);
	fill(255);
	circle(px, py - 250, 240);
	fill(0);
	circle(px - 40, py - 270, 40);
	fill(0);
	circle(px + 40, py - 270, 40);
}
void squareFace(float Px, float Py,float angle, float Angle) {
	rectMode(CENTER);
	fill(0);
	rect(Px-41, Py-290, 80,10,angle);
	rect(Px + 41, Py - 290, 80, 10,Angle);
	fill(50);
	rect(Px-200, Py-100, 180, 20,angle);
	fill(50);
	rect(Px + 200, Py - 100, 180, 20, Angle);
	rect(Px, Py-180, 80, 10);
}
void gmain() {
	window(1980, 1080, full);
	float px = width / 2;
	float py = height / 1.6;
	float Px = width / 2;
	float Py = height / 2;
	float angle = 10;
	float Angle = -10;
	while (notQuit) {
		clear(255, 255, 60);
		roundFace(800, 600);
		roundFace(1200, 600);
		squareFace(1200, 600, angle, Angle);
		squareFace(1200, 600,angle,Angle);
		squareFace(1200, 600, angle, Angle);
	}
}
