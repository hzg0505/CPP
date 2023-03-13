#include "clock.h"
// using namespace std;

int main(void){
    Clock my_clock;
    my_clock.Init(2, 10, 12);
    my_clock.Display();
    return 0;
}