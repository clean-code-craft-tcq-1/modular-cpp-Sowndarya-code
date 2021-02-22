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
   
 private:
   MajorColor majorColor;
   MinorColor minorColor;
  };  
 
 ColorPair GetColorFromPairNumber(int pairNumber);
 int GetPairNumberFromColor(MajorColor major, MinorColor minor)
    
} // end of namespace
#endif
