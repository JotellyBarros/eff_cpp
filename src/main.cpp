#include <iostream>
#include <test.h>
#include <opencv2/highgui.hpp>

struct car
{
    int model;
    int color_master_should_stay;
    void getFipTableValue()
    {
        std::cout << "FIP VALUE\n";
    }
}gol;

int main()
{
    std::cout << "Hello Moto!" << std::endl;
    gol.getFipTableValue();
    return 0;
}
