#ifndef C_COLOR_PAIR_H__
#define C_COLOR_PAIR_H__


 class ColorPair {

        public:
            ColorPair(MajorColor major, MinorColor minor):
                majorColor(major), minorColor(minor)
            {}
            MajorColor getMajor() {
                return majorColor;
            }
            MinorColor getMinor() {
                return minorColor;
            }
            std::string ToString() {
                std::string colorPairStr = MajorColorNames[majorColor];
                colorPairStr += " ";
                colorPairStr += MinorColorNames[minorColor];
                return colorPairStr;
            }
        private:
            MajorColor majorColor;
            MinorColor minorColor;
         }
      
#endif
