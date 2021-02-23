#include "colorcode_encode_decode.h"
#include "constants.h"
namespace TelCoColorCoder
{
 //enum MajorColor {WHITE, RED, BLACK, YELLOW, VIOLET};
 //enum MinorColor {BLUE, ORANGE, GREEN, BROWN, SLATE};
 //int numberOfMajorColors = sizeof(MajorColorNames) / sizeof(MajorColorNames[0]);
 //int numberOfMinorColors = sizeof(MinorColorNames) / sizeof(MinorColorNames[0]);
    const char* MajorColorNames[] = {"White", "Red", "Black", "Yellow", "Violet"};
    const char* MinorColorNames[] = {"Blue", "Orange", "Green", "Brown", "Slate"};
      int numberOfMajorColors = sizeof(MajorColorNames) / sizeof(MajorColorNames[0]);
 int numberOfMinorColors = sizeof(MinorColorNames) / sizeof(MinorColorNames[0]);
    
    ColorPair GetColorFromPairNumber(int pairNumber) 
    {
        int zeroBasedPairNumber = pairNumber - 1;
        MajorColor majorColor = (MajorColor)(zeroBasedPairNumber / numberOfMinorColors);
        MinorColor minorColor = (MinorColor)(zeroBasedPairNumber % numberOfMinorColors);
        return ColorPair(majorColor, minorColor);
    }
    
    int GetPairNumberFromColor(MajorColor major, MinorColor minor) 
    {
        return major * numberOfMinorColors + minor + 1;
    }
}
