# include <stdio.h>

int main (){

float c = 5.0/9.0;
 for (int farh=0; farh<=300; farh+=20)
    printf("%3d %6.1f\n", farh, c*(farh-32));

    return 0;
}