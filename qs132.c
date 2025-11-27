#include <stdio.h>

enum TrafficLight {
    RED,    // 0
    YELLOW, // 1
    GREEN   // 2
};

void print_traffic_message(enum TrafficLight light) {
    switch (light) {
        case RED:
            printf("Traffic Light is RED: Stop\n");
            break;
        case YELLOW:
            printf("Traffic Light is YELLOW: Wait\n");
            break;
        case GREEN:
            printf("Traffic Light is GREEN: Go\n");
            break;
        default:
            printf("Unknown Traffic Light State\n");
    }
}

int main() {
    print_traffic_message(RED);
    print_traffic_message(YELLOW);
    print_traffic_message(GREEN);
    
    return 0;
}