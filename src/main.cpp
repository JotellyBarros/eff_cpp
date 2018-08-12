#include <iostream>
#include <bowlcamera.hpp>
#include <opencv2/highgui.hpp>

struct car
{
    int model;
    int color_master_should_stay;
    void getFipTableValue()
    {
        std::cout << "FIP VALUE\n";
    }
};

bool getImage(cv::Mat frame)
{
    std::cout << "Frame got\n";
    return true;
}

int main()
{
    eff_cpp::BowlCamera camera;

    camera.cameraSetup(460,360,eff_cpp::BowlEncoding::rgb8);
}
