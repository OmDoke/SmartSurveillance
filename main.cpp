#include "streamer.h"
#include "detector.h"
#include "alert.h"

int main() {
    Streamer streamer("videotestsrc ! videoconvert ! appsink"); // Example GStreamer pipeline
    Detector detector;
    AlertSystem alert;

    while (true) {
        cv::Mat frame = streamer.getFrame();
        if (frame.empty()) break;

        if (detector.detectMotion(frame)) {
            std::string object = detector.detectObject(frame);
            if (!object.empty()) {
                alert.sendAlert(object);
            }
        }

        cv::imshow("Surveillance Feed", frame);
        if (cv::waitKey(1) == 27) break; // ESC to exit
    }

    return 0;
}
