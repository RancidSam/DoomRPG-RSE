//-----------------------------------------------------------------------------
//
// Copyright(C) 2012 David Hill
//
// This program is free software; you can redistribute it and/or modify
// it under the terms of the GNU Lesser General Public License as published by
// the Free Software Foundation; either version 3 of the License, or
// (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU Lesser General Public License for more details.
//
// You should have received a copy of the GNU Lesser General Public License
// along with this program; if not, see <http://www.gnu.org/licenses/>.
//
//-----------------------------------------------------------------------------
//
// Boolean type and values.
//
//-----------------------------------------------------------------------------

#ifndef __HEADER__STDBOOL_H__
#define __HEADER__STDBOOL_H__


//----------------------------------------------------------------------------|
// Macros                                                                     |
//

//
// bool
//
#if !defined(__cplusplus) && !defined(__LANG_DS__)
#define bool _Bool
#endif

//
// true
//
#if !defined(__cplusplus) && !defined(__LANG_DS__)
#define true 1
#endif

//
// false
//
#if !defined(__cplusplus) && !defined(__LANG_DS__)
#define false 0
#endif

//
// __bool_true_false_are_defined
//
#define __bool_true_false_are_defined 1

#endif//__HEADER__STDBOOL_H__

