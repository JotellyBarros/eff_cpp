#ifndef EFF_CPP_INCLUDE_APPLICATION_H
#define EFF_CPP_INCLUDE_APPLICATION_H

#include <iostream>
#include <bowlcamera.hpp>
#include <unistd.h>


class Application
{
  public:
    /**
     * @brief Application
     */
    explicit Application();
    /**
     * @brief ~Application
     */
    virtual ~Application();
    /**
     * @brief Application
     * @param obj
     */
    Application(const Application& obj);
    /**
     * @brief imageCallback
     * @param frame
     */
    static void imageCallback(cv::Mat& frame);

    eff_cpp::BowlCamera camera_;

};

#endif
