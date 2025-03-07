#pragma once
#include "INC/OUT/outside_header.h"

class csvfile;

inline static csvfile& endrow(csvfile& file);
inline static csvfile& flush(csvfile& file);

class csvfile
{
public:
    csvfile(const std::string filename, const std::string separator = ";");
    ~csvfile();

    void flush();
    void endrow();

    csvfile& operator << ( csvfile& (* val)(csvfile&));
    csvfile& operator << (const char * val);
    csvfile& operator << (const std::string & val);

    template<typename T>
    csvfile& operator << (const T& val);

    std::ofstream& getStream();

private:
    std::ofstream fs_;
    const std::string separator_;
};

template<typename T>
inline csvfile& csvfile::operator << (const T& val)
{
    fs_ << val << separator_;
    return *this;
}

std::ofstream& csvfile::getStream()
{
    return this->fs_;
}

inline static csvfile& endrow(csvfile& file)
{
    file.endrow();
    return file;
}

inline static csvfile& flush(csvfile& file)
{
    file.flush();
    return file;
}