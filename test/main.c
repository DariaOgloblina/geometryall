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

