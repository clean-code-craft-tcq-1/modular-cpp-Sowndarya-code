#ifndef C_COLOR_PAIR_H__
#define C_COLOR_PAIR_H__

namespace TelCoColorCoder
{
 class ColorPair 
 {
 public:
   ColorPair(MajorColor major, MinorColor minor): majorColor(major), minorColor(minor) {}
   MajorColor getMajor();
   MinorColor getMinor();
   std::string ToString();
   ColorPair GetColorFromPairNumber(int pairNumber);
   int GetPairNumberFromColor(MajorColor major, MinorColor minor)
   
 private:
   MajorColor majorColor;
   MinorColor minorColor;
  };  
} // end of namespace
#endif
