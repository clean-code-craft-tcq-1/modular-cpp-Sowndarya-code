#ifndef C_COLOR_PAIR_H__
#define C_COLOR_PAIR_H__

namespace TelCoColorCoder
 class ColorPair {
        public:
            ColorPair(MajorColor major, MinorColor minor): majorColor(major), minorColor(minor) {}
            MajorColor MajorColor getMajor();
            MinorColor MinorColor getMinor();
            std::string std::string ToString();
        private:
            MajorColor majorColor;
            MinorColor minorColor;
         };      
#endif
