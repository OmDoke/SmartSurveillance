#include "detector.h"

Detector::Detector() {}

bool Detector::detectMotion(const cv::Mat& frame) {
    cv::Mat gray, diff, blur;
    cv::cvtColor(frame, gray, cv::COLOR_BGR2GRAY);
    cv::GaussianBlur(gray, blur, cv::Size(21, 21), 0);

    if (prevFrameGray.empty()) {
        prevFrameGray = blur;
        return false;
    }

    cv::absdiff(prevFrameGray, blur, diff);
    cv::threshold(diff, diff, 25, 255, cv::THRESH_BINARY);

    prevFrameGray = blur;
    return cv::countNonZero(diff) > 5000; // basic threshold
}

std::string Detector::detectObject(const cv::Mat& frame) {
    // Placeholder for real object detection logic
    // Use a model like YOLO or Haar cascades for advanced detection
    return "Object Detected";
}
