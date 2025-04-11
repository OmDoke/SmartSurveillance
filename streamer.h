#ifndef STREAMER_H
#define STREAMER_H

#include <opencv2/opencv.hpp>
#include <string>

class Streamer {
public:
    Streamer(const std::string& pipeline);
    cv::Mat getFrame();

private:
    cv::VideoCapture cap;
};

#endif
