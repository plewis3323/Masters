#AC_INIT(calib_emc_pi0,[1.00])
#AC_CONFIG_SRCDIR([configure.ac])

#AM_INIT_AUTOMAKE
#AC_PROG_CXX(CC g++)

#LT_INIT([disable-static])

#dnl   no point in suppressing warnings people should 
#dnl   at least see them, so here we go for g++: -Wall
#if test $ac_cv_prog_gxx = yes; then
#   CXXFLAGS="$CXXFLAGS -Wextra -Wshadow -Wall -Werror"
#fi

#AC_CONFIG_FILES([Makefile])
#AC_OUTPUT

AC_INIT(calib_emc_pi0,[1.00])
AC_CONFIG_SRCDIR([configure.ac])

AM_INIT_AUTOMAKE
AC_PROG_CXX(g++)

LT_INIT([disable-static])

dnl Set the C++ standard to C++20 and add extra warnings.
if test $ac_cv_prog_gxx = yes; then
   CXXFLAGS="$CXXFLAGS -std=c++20 -Wextra -Wshadow -Wall -Werror"
fi

dnl Optionally, add additional LDFLAGS to force the use of the GCC 12.1.0 libraries.
LDFLAGS="$LDFLAGS -L/cvmfs/sphenix.sdcc.bnl.gov/gcc-12.1.0/opt/sphenix/core/gcc/12.1.0-57c96/x86_64-centos7/lib64"

AC_CONFIG_FILES([Makefile])
AC_OUTPUT

