#include <stdio.h>

int main()
{
    float latitude;
    float longitude;
    char info[80];
    while (scanf("%f, %f, %79[^\n]", &latitude, &longitude, info) == 3) {
        if ((latitude > 24) && (latitude < 36)) {
            if ((longitude < -64) && (longitude > -74)) {
                printf("latitude: %f, longitude: %f, info: %s", latitude, longitude, info);
            }
        }
    }
}
