#ifndef EFF_CPP_INCLUDE_APPLICATION_H
#define EFF_CPP_INCLUDE_APPLICATION_H

#include <iostream>
#include <bowlcamera.hpp>
#include <unistd.h>


class Applicaiton
{
  public:
    /**
     * @brief Applicaiton
     */
    explicit Applicaiton();
    /**
     * @brief ~Applicaiton
     */
    virtual ~Applicaiton();
    /**
     * @brief Applicaiton
     * @param obj
     */
    Applicaiton(const Applicaiton& obj);
    /**
     * @brief imageCallback
     * @param frame
     */
    static void imageCallback(cv::Mat& frame);

    eff_cpp::BowlCamera camera_;

};

#endif
