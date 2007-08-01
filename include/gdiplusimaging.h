/*
 * Copyright (C) 2007 Google (Evan Stade)
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301, USA
 */

#ifndef _GDIPLUSIMAGING_H
#define _GDIPLUSIMAGING_H

#ifdef __cplusplus
class EncoderParameter
{
public:
    GUID    Guid;
    ULONG   NumberOfValues;
    ULONG   Type;
    VOID*   Value;
};

class EncoderParameters
{
public:
    UINT Count;
    EncoderParameter Parameter[1];
};
#else /* end of c++ typedefs */

typedef struct EncoderParameter
{
    GUID Guid;
    ULONG NumberOfValues;
    ULONG Type;
    VOID* Value;
} EncoderParameter;

typedef struct EncoderParameters
{
    UINT Count;
    EncoderParameter Parameter[1];
} EncoderParameters;

#endif /* end of c typedefs */

#endif /* _GDIPLUSIMAGING_H */
