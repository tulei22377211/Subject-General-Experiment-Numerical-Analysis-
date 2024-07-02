#include <stdio.h>

#include "convert.hpp"
#include "error.hpp"

int main(void) {

    double pi30 = 3.141592653589793;
    double pi31 = 0.000123456789123;

    double ppi30 = con_d_8(pi30);
    double ppi31 = con_d_8(pi31);

    printf("The difference between eight significant figures and the original number is:\n");
    printf("real\tobservation\tabsolute_error\trelative_error\n");

    printf("%lf\t%lf\t%.16lf\t%.16f%%\n", pi30, ppi30, absolute_error(ppi30,pi30), relative_error(ppi30,pi30));
    printf("%lf\t%lf\t%.16lf\t%.16f%%\n", pi31, ppi31, absolute_error(ppi31,pi31), relative_error(ppi31,pi31));
    //printf("%lf �İ�λ��Ч���ֽ��Ƶľ������Ϊ%.16lf,������Ϊ%.16f%%\n", pi30, absolute_error(ppi30,pi30), relative_error(ppi30,pi30));
    //printf("%lf �İ�λ��Ч���ֽ��Ƶľ������Ϊ%.16lf,������Ϊ%.16f%%\n", pi31, absolute_error(ppi31,pi31), relative_error(ppi31,pi31));

    double mp30 = con_d_8(ppi30)/con_d_8(ppi31);
    double mpp30 = con_d_8(mp30);
    double real = pi30/pi31;

    printf("\n\n");
    printf("The difference between the eight significant figures of the ratio and the original ratio is:\n" );
    printf("real\tobservation\tabsolute_error\trelative_error\n");
    printf("%lf\t%lf\t%.16lf\t%.16f\n", real, mpp30, absolute_error(mpp30,real), relative_error(mpp30,real));
    //printf("%lf��%lf��ֵ %lf �� ��λ��Ч���ֽ��Ƶ� �������Ϊ%.16lf,������Ϊ%.16lf%%\n", ppi30, ppi31, mp30,absolute_error(mpp30,real), relative_error(mpp30,real));

    return 0;
}