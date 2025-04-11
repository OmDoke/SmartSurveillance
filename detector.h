#ifndef DETECTOR_H
#define DETECTOR_H

#include <opencv2/opencv.hpp>
#include <string>

class Detector {
public:
    Detector();
    bool detectMotion(const cv::Mat& frame);
    std::string detectObject(const cv::Mat& frame);

private:
    cv::Mat prevFrameGray;
};

#endif
