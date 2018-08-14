#include <bowlcamera.hpp>

namespace eff_cpp
{
    BowlCamera::BowlCamera()
        : buffer_ptr_(nullptr)
        , grab_param_(nullptr)
        , callback_thread(nullptr)
    {
    }

    BowlCamera::~BowlCamera()
    {

    }

    BowlCamera::BowlCamera(const BowlCamera &obj)
        : buffer_ptr_ (obj.buffer_ptr_)
        , callback_thread (obj.callback_thread)
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

        callback_thread = new std::thread(frameThread, this);
    }

   void BowlCamera::frameThread(void* params)
   {
        std::cout << "Teste" << std::endl;

        BowlCamera *pThis = (BowlCamera *) params;

        cv::VideoCapture video(0);

        if ( !video.isOpened() )
        {
            return;
        }

        while(true)
        {
            cv::Mat frame;

            video >> frame;

            pThis->grab_param_(frame);

        }
   }

}
