
#ifndef NUMBERCONVERSIONS_H
#define NUMBERCONVERSIONS_H

int GetNumberFrompairColor(const ColorPair* colorPair) {
    return colorPair->majorColor * numberOfMinorColors +
            colorPair->minorColor + 1;
}
#endif
