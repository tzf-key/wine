/*
 *	includes for devenum.dll
 *
 * Copyright (C) 2002 John K. Hohm
 * Copyright (C) 2002 Robert Shearman
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
 *
 * NOTES ON FILE:
 * - Private file where devenum globals are declared
 */

#define COBJMACROS
#include "dshow.h"
#include "dmo.h"
#include "dmodshow.h"

/**********************************************************************
 * Dll lifetime tracking declaration for devenum.dll
 */
extern LONG dll_refs DECLSPEC_HIDDEN;
static inline void DEVENUM_LockModule(void) { InterlockedIncrement(&dll_refs); }
static inline void DEVENUM_UnlockModule(void) { InterlockedDecrement(&dll_refs); }

enum device_type
{
    DEVICE_FILTER,
    DEVICE_CODEC,
    DEVICE_DMO,
};

struct moniker
{
    IMoniker IMoniker_iface;
    LONG ref;
    CLSID class;
    BOOL has_class;
    enum device_type type;
    WCHAR *name;    /* for filters and codecs */
    CLSID clsid;    /* for DMOs */

    IPropertyBag IPropertyBag_iface;
};

struct moniker *dmo_moniker_create(const GUID class, const GUID clsid) DECLSPEC_HIDDEN;
struct moniker *codec_moniker_create(const GUID *class, const WCHAR *name) DECLSPEC_HIDDEN;
struct moniker *filter_moniker_create(const GUID *class, const WCHAR *name) DECLSPEC_HIDDEN;
HRESULT enum_moniker_create(REFCLSID class, IEnumMoniker **enum_mon) DECLSPEC_HIDDEN;

extern ICreateDevEnum devenum_factory DECLSPEC_HIDDEN;
extern IParseDisplayName devenum_parser DECLSPEC_HIDDEN;

/**********************************************************************
 * Global string constant declarations
 */

static const WCHAR backslashW[] = {'\\',0};
static const WCHAR clsidW[] = {'C','L','S','I','D',0};
static const WCHAR instanceW[] = {'\\','I','n','s','t','a','n','c','e',0};
static const WCHAR wszActiveMovieKey[] = {'S','o','f','t','w','a','r','e','\\',
                                          'M','i','c','r','o','s','o','f','t','\\',
                                          'A','c','t','i','v','e','M','o','v','i','e','\\',
                                          'd','e','v','e','n','u','m','\\',0};
static const WCHAR deviceW[] = {'@','d','e','v','i','c','e',':',0};
static const WCHAR dmoW[] = {'d','m','o',':',0};
static const WCHAR swW[] = {'s','w',':',0};
static const WCHAR cmW[] = {'c','m',':',0};
