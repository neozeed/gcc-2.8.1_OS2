#!/bin/bash

for name in  _muldi3 _divdi3 _moddi3 _udivdi3 _umoddi3 _negdi2 \
     _lshrdi3 _ashldi3 _ashrdi3 _ffsdi2 \
    _udiv_w_sdiv _udivmoddi4 _cmpdi2 _ucmpdi2 _floatdidf _floatdisf \
    _fixunsdfsi _fixunssfsi _fixunsdfdi _fixdfdi _fixunssfdi _fixsfdi \
    _fixxfdi _fixunsxfdi _floatdixf _fixunsxfsi \
    _fixtfdi _fixunstfdi _floatditf \
    __gcc_bcmp _varargs __dummy _eprintf _op_new _op_vnew _new_handler \
    _op_delete _op_vdel _bb _shtab _clear_cache _trampoline __main _exit \
    _ctors _eh _eh_compat _pure; \
do \
  echo ${name}; \
  rm -f ${name}.o; \
  ./xgcc -nostdinc -B/os2/bin/ -I/os2/h -DIN_LIBGCC2 -O -I. -I. -I./config -c -DL${name} ./libgcc2.c; \
  if [ $? -eq 0 ] ; then true; else exit 1; fi; \
  mv libgcc2.o ${name}.o; \
  /os2/i386-pc-linux-gnuaout/bin/ar rc tmplibgcc2.a ${name}.o; \
  rm -f ${name}.o; \
done
mv tmplibgcc2.a libgcc2.a
