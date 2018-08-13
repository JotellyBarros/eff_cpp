#include <bowlcamera.hpp>

namespace eff_cpp
{
    BowlCamera::BowlCamera()
        : buffer_ptr_(nullptr)
    {

    }

    BowlCamera::~BowlCamera()
    {

    }

    BowlCamera::BowlCamera(const BowlCamera &obj)
        : buffer_ptr_(nullptr)
    {
        buffer_ptr_ = new int();
        buffer_ptr_ =obj.buffer_ptr_;
    }

    bool BowlCamera::cameraSetup(int width, int height, BowlEncoding encoding, CallBackPtr fcnt_ptr)
    {
        switch(encoding)
        {
            case mono8:
                std::cout << "We get the Mono8\n";
                break;
            case rgb8:
                std::cout << "We get the RGB8\n";
                break;
        }

        cv::VideoCapture video(0);

        if ( !video.isOpened() )
        {
            return false;
        }

        while(true)
        {
            cv::Mat frame;

            video >> frame;

            fcnt_ptr(frame);
        }

    }

}
