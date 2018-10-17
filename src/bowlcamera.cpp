#include <bowlcamera.hpp>

namespace eff_cpp
{
BowlCamera::BowlCamera()
    : buffer_ptr_(nullptr)
    , grab_param_(nullptr)
    , callback_thread_(nullptr)
{
}

BowlCamera::~BowlCamera()
{

}

BowlCamera::BowlCamera(const BowlCamera &obj)
    : buffer_ptr_ (obj.buffer_ptr_)
    , callback_thread_ (obj.callback_thread_)
{
}

bool BowlCamera::cameraSetup(int width, int height, BowlEncoding encoding,
                             CallBackPtr fcnt_ptr, void* obj_ptr)
{
    switch(encoding)
    {
        case BowlEncoding::mono8:
            std::cout << "We get the Mono8\n";
            break;
        case BowlEncoding::rgb8:
            std::cout << "We get the RGB8\n";
            break;
    }

    grab_param_ = fcnt_ptr;

    callback_thread_ = new std::thread(frameThread, this);
}

void BowlCamera::frameThread(void* params) throw()
{
    std::cout << "Teste" << std::endl;

    BowlCamera *pThis = (BowlCamera *) params;

    cv::VideoCapture video(0);

    if ( !video.isOpened() )
    {
        throw eff_cpp::Exception(std::string("OpenCV problem, camera may be not opened."));
    }

    while(true)
    {
        cv::Mat frame;

        video >> frame;

        pThis->grab_param_(frame);
    }
}

void BowlCamera::waitingStopStreaming()
{   
    if (callback_thread_ != nullptr)
    {
        callback_thread_->join();
    }
}

}
