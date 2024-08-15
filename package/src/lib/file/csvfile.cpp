#include "csvfile.h"

csvfile::csvfile(const std::string filename, const std::string separator = ";")
    : fs_() , separator_(separator)
{
    fs_.exceptions(std::ios::failbit | std::ios::badbit);
    fs_.open(filename);
}

csvfile::~csvfile()
{
    flush();
    fs_.close();
}

void csvfile::flush()
{
    fs_.flush();
}

void csvfile::endrow()
{
    fs_ << std::endl;
}

csvfile& csvfile::operator<<(csvfile& (* val)(csvfile&))
{
    return val(*this);
}

csvfile& csvfile::operator << (const char * val)
{
    fs_ << '"' << val << '"' << separator_;
    return *this;
}

csvfile& csvfile::operator<<(const std::string & val)
{
    fs_ << '"' << val << '"' << separator_;
    return *this;
}