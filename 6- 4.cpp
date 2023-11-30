#include <stdio.h>

double calculate_distance(double speed, double time) {
	double distance = speed * time;
	return distance;
}
	
int main(){
	double speed = 2; // in meter per second 
	double time = 100; // in seconds
	
	double distance = calculate_distance (speed, time);
	printf("sepeda motoris telah tempuh %2.f meter.\n", distance);
	
	return 0;
}
