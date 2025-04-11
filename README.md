# Smart Video Surveillance System 🎥🛡️
This project is a real-time video surveillance system designed to enhance security through intelligent video analysis. Developed in C++, the system utilizes GStreamer for efficient video streaming and OpenCV for advanced image processing and object detection.

A C++ based real-time smart surveillance system using **GStreamer** for efficient video streaming and **OpenCV** for basic motion/object detection.

## 🔧 Features

- Real-time video feed (test source, webcam, or video file)
- Frame difference-based motion detection
- Alert system for triggered events
- Modular code (streamer, detector, alert)
- Cross-platform (developed using MSYS2 + UCRT64 on Windows)

---

## 🛠️ Requirements

Make sure you have **MSYS2 with UCRT64** installed.

Install required packages by running in UCRT64 terminal:

```bash
pacman -Syu        # First update MSYS2
pacman -S \
    mingw-w64-ucrt-x86_64-gcc \
    mingw-w64-ucrt-x86_64-make \
    mingw-w64-ucrt-x86_64-pkg-config \
    mingw-w64-ucrt-x86_64-opencv \
    mingw-w64-ucrt-x86_64-gstreamer \
    mingw-w64-ucrt-x86_64-gst-plugins-base
🧩 Project Structure
css

SmartSurveillance/
├── main.cpp
├── streamer.cpp / streamer.h
├── detector.cpp / detector.h
├── alert.cpp / alert.h
├── Makefile
└── README.md

🔨 Build Instructions
Open the MSYS2 UCRT64 terminal, navigate to the project folder:

bash

cd /c/Users/Admin/Desktop/SmartSurveillance/SmartSurveillance
make
This will compile and generate the executable:

bash

SmartSurveillance.exe
▶️ Running the App
In the same terminal:

bash

./SmartSurveillance.exe
🎥 Customizing Video Input
In main.cpp, change the GStreamer pipeline:

Test pattern (default):

"videotestsrc ! videoconvert ! appsink"
Webcam (Windows):


"ksvideosrc ! videoconvert ! appsink"
From file:


"filesrc location=video.mp4 ! decodebin ! videoconvert ! appsink"
🧠 Next Steps
 Display video feed using cv::imshow

 Add real object detection using Haar or YOLO

 Alert via email or sound

 Screenshot capture on motion

 GUI (Qt / ImGui)
