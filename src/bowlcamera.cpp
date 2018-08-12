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

    }

}
