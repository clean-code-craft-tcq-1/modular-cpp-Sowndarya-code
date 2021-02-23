#ifndef C_COLOR_PAIR
#define C_COLOR_PAIR

#include <string>
#include "constants.h"
//#include "colorcode_encode_decode.h"

namespace TelCoColorCoder
{
     enum MajorColor {WHITE, RED, BLACK, YELLOW, VIOLET};
    enum MinorColor {BLUE, ORANGE, GREEN, BROWN, SLATE};
 //extern enum MajorColor, MinorColor;
 //const char* MajorColorNames[] = {"White", "Red", "Black", "Yellow", "Violet" };
 extern int numberOfMajorColors, numberOfMinorColors;
 //const char* MinorColorNames[] = {"Blue", "Orange", "Green", "Brown", "Slate"};
      //int numberOfMajorColors = sizeof(MajorColorNames) / sizeof(MajorColorNames[0]);
 //int numberOfMinorColors = sizeof(MinorColorNames) / sizeof(MinorColorNames[0]);
 class ColorPair;
 ColorPair GetColorFromPairNumber(int pairNumber);
 int GetPairNumberFromColor(MajorColor major, MinorColor minor);
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
