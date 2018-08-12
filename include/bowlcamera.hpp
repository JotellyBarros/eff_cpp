/**
 * @file bowlcamera.cpp
 * @brief Mockup for cpp features testing.
 *
 * Mockup for cpp features testing. This project intend to improve some project skills.
 *
 * @author Matheus Nascimento.
 * @date August 2018.
 */

#ifndef EFF_CPP_INCLUDE_TEST_H
#define EFF_CPP_INCLUDE_TEST_H

namespace eff_cpp
{
class BowlCamera
{
  public:
    /**
     * @brief Default Constructor.
     *
     * BowlCamera default constructor.
     *
     * @return nothing.
     */
    explicit BowlCamera();
    /**
     * @brief BowlCamera destructor.
     *
     * BowlCamera destructor.
     *
     * @return nothing.
     */
    virtual ~BowlCamera();
    /**
     * @brief BowlCamera copy constructor.
     * @return nothing.
     */
    BowlCamera(const BowlCamera& obj);

  private:


     int *buffer_ptr_;


};

} //eff_cpp

#endif //EFF_CPP_INCLUDE_TEST_H
