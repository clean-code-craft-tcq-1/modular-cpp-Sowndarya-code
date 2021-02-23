#ifndef COLORCODE_ENCODE_DECODE_H__
#define COLORCODE_ENCODE_DECODE_H__

namespace TelCoColorCoder
{
    enum class MajorColor {WHITE, RED, BLACK, YELLOW, VIOLET};
    enum class MinorColor {BLUE, ORANGE, GREEN, BROWN, SLATE};
 //extern enum MajorColor, MinorColor;
 const char* MajorColorNames[] = {"White", "Red", "Black", "Yellow", "Violet" };
 //extern int numberOfMajorColors, numberOfMinorColors;
 const char* MinorColorNames[] = {"Blue", "Orange", "Green", "Brown", "Slate"};
 
 ColorPair GetColorFromPairNumber(int pairNumber);
 int GetPairNumberFromColor(MajorColor major, MinorColor minor);
 
}// end of namespace TelCoColorCoder

#endif
