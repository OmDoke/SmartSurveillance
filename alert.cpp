#include "alert.h"
#include <iostream>

void AlertSystem::sendAlert(const std::string& message) {
    std::cout << "[ALERT] " << message << std::endl;
}
