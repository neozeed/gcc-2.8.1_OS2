#!/bin/bash
for name in _mulsi3 _udivsi3 _divsi3 _umodsi3 _modsi3 _lshrsi3 _ashrsi3 _ashlsi3 _divdf3 _muldf3 _negdf2 _adddf3 _subdf3 _fixdfsi _fixsfsi _floatsidf _floatsisf _truncdfsf2 _extendsfdf2 _addsf3 _negsf2 _subsf3 _mulsf3 _divsf3 _eqdf2 _nedf2 _gtdf2 _gedf2 _ltdf2 _ledf2 _eqsf2 _nesf2 _gtsf2 _gesf2 _ltsf2 _lesf2; \
do \
  echo ${name}; \
  rm -f ${name}.o; \
  ./xgcc -nostdinc -B/os2/bin/ -I/os2/h -DIN_LIBGCC1 -O -I. -I. -I./config -c -DL${name} ./libgcc1.c; \
  if [ $? -eq 0 ] ; then true; else exit 1; fi; \
  mv libgcc1.o ${name}.o; \
  /os2/i386-pc-linux-gnuaout/bin/ar rc tmplibgcc1.a ${name}.o; \
  rm -f ${name}.o; \
done
mv tmplibgcc1.a libgcc1.a
