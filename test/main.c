#define CTEST_MAIN
#define CTEST_COLOR_OK
#include <ctest.h>
#include <foo.h>

int main(int argc, const char** argv)
{
    return ctest_main(argc, argv);
}

CTEST(area_test, result_test)
{
    // Given
    char figure[10]="circle";
    const float x1=0;
    const float y1=0;
    const float r= 4.5;

    // When
    const float result = plo(figure,x1,y1,r,0,0,0,0,0);

    // Then
    const float expected = 63.615375;
    ASSERT_EQUAL(expected, result);
}
CTEST(area_testt, resultt_test)
{
    // Given
    char figure[10]="triangle";
    const float x1=12;
    const float y1=13;
    const float x2=4;
    const float y2=1;
    const float x3=7;
    const float y3=8;
    // When
    const float result = plo(figure,x1,y1,x2,y2,x3,y3,x1,y1);

    // Then
    const float expected = 10;
    ASSERT_EQUAL(expected, result);
}


