// -*- C++ -*-
//    foo.cpp -- trivial test library
//    Copyright (C) 1998-2000 Free Software Foundation, Inc.
//    Originally by Thomas Tanner <tanner@ffii.org>
//    This file is part of GNU Libtool.

// This program is free software; you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation; either version 2 of the License, or
// (at your option) any later version.

// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// You should have received a copy of the GNU General Public License
// along with this program; if not, write to the Free Software
// Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307
// USA.

#include "foo.h"
#include <stdio.h>

#ifdef HAVE_MATH_H
#include <math.h>
#endif

// Our C functions.
int
foo(void)
{
  printf ("cos (0.0) = %g\n", (double) cos ((double) 0.0));
  return FOO_RET;
}

int
hello(void)
{
  printf ("** This is libfoo (tagdemo) **\n");
  return HELLO_RET;
}


// --------------------------------------------------------------------
// Our C++ derived class methods.


int
foobar_derived::foo(void)
{
  return ::foo();
}

int
foobar_derived::hello(void)
{
  return ::hello();
}