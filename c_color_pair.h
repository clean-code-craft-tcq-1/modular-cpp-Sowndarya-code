#ifndef C_COLOR_PAIR_H__
#define C_COLOR_PAIR_H__

#include <string>
#include "colorcode_encode_decode.h"

namespace TelCoColorCoder
{
 class ColorPair 
 {
 public:
   ColorPair(MajorColor major, MinorColor minor): majorColor(major), minorColor(minor) {}
   MajorColor getMajor();
   MinorColor getMinor();
   std::string ToString();
   
 private:
   MajorColor majorColor;
   MinorColor minorColor;
  };  
 

    
} // end of namespace
#endif
