#include <ctime>

std::tm GetLocalTime() {
    std::time_t t = std::time(nullptr);
    std::tm tm;
    
    #ifdef _WIN32
        localtime_s(&tm, &t);
    #else
        localtime_r(&t, &tm);
    #endif
    
    return tm;
}