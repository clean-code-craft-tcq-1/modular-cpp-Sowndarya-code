#ifndef COLORCODE_ENCODE_DECODE_H__
#define COLORCODE_ENCODE_DECODE_H__

namespace TelCoColorCoder
{

 enum MajorColor {WHITE, RED, BLACK, YELLOW, VIOLET};
 enum MinorColor {BLUE, ORANGE, GREEN, BROWN, SLATE};
 const char* MajorColorNames[] = {"White", "Red", "Black", "Yellow", "Violet" };
 int numberOfMajorColors = sizeof(MajorColorNames) / sizeof(MajorColorNames[0]);
 const char* MinorColorNames[] = {"Blue", "Orange", "Green", "Brown", "Slate"};
 int numberOfMinorColors = sizeof(MinorColorNames) / sizeof(MinorColorNames[0]);
 
 ColorPair GetColorFromPairNumber(int pairNumber);
 int GetPairNumberFromColor(MajorColor major, MinorColor minor);
 
}// end of namespace TelCoColorCoder

#endif
