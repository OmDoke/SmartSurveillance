#include "streamer.h"

Streamer::Streamer(const std::string& pipeline) {
    cap.open(pipeline, cv::CAP_GSTREAMER);
    if (!cap.isOpened()) {
        throw std::runtime_error("Failed to open GStreamer pipeline");
    }
}

cv::Mat Streamer::getFrame() {
    cv::Mat frame;
    cap.read(frame);
    return frame;
}
