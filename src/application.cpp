#include <application.hpp>


Applicaiton::Applicaiton()
{
    camera_.cameraSetup(460,360, eff_cpp::BowlEncoding::rgb8, Applicaiton::imageCallback, (void*) this);
    sleep(10);
}

Applicaiton::~Applicaiton()
{

}


Applicaiton::Applicaiton(const Applicaiton& obj)
{

}

void Applicaiton::imageCallback(cv::Mat& frame)
{
    cv::imshow("Test", frame);
    int key = cv::waitKey(1);
}
