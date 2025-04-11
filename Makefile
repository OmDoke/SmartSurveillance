CXX = g++
CXXFLAGS = `pkg-config --cflags opencv4 gstreamer-1.0` -std=c++17 -I.
LDFLAGS = `pkg-config --libs opencv4 gstreamer-1.0`

SRCS = main.cpp streamer.cpp detector.cpp alert.cpp
OBJS = $(SRCS:.cpp=.o)
EXEC = SmartSurveillance

all: $(EXEC)

$(EXEC): $(SRCS)
	$(CXX) $(CXXFLAGS) -o $@ $^ $(LDFLAGS)

clean:
	rm -f $(EXEC) *.o
