/*** Autogenerated by WIDL 0.1 from shldisp.idl - Do not edit ***/
#include <rpc.h>
#include <rpcndr.h>

#ifndef __WIDL_SHLDISP_H
#define __WIDL_SHLDISP_H
#ifdef __cplusplus
extern "C" {
#endif
#include <objidl.h>
#include <oleidl.h>
#include <oaidl.h>
#include <shtypes.h>
#include <servprov.h>
#include <comcat.h>
#ifndef __IAutoComplete_FWD_DEFINED__
#define __IAutoComplete_FWD_DEFINED__
typedef struct IAutoComplete IAutoComplete;
#endif

typedef IAutoComplete *LPAUTOCOMPLETE;

/*****************************************************************************
 * IAutoComplete interface
 */
#ifndef __IAutoComplete_INTERFACE_DEFINED__
#define __IAutoComplete_INTERFACE_DEFINED__

DEFINE_GUID(IID_IAutoComplete, 0x00bb2762, 0x6a77, 0x11d0, 0xa5,0x35, 0x00,0xc0,0x4f,0xd7,0xd0,0x62);
#if defined(__cplusplus) && !defined(CINTERFACE)
struct IAutoComplete : public IUnknown
{
    virtual HRESULT STDMETHODCALLTYPE Init(
        HWND hwndEdit,
        IUnknown* punkACL,
        LPCOLESTR pwszRegKeyPath,
        LPCOLESTR pwszQuickComplete) = 0;

    virtual HRESULT STDMETHODCALLTYPE Enable(
        BOOL fEnable) = 0;

};
#else
typedef struct IAutoCompleteVtbl IAutoCompleteVtbl;
struct IAutoComplete {
    const IAutoCompleteVtbl* lpVtbl;
};
struct IAutoCompleteVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IAutoComplete* This,
        REFIID riid,
        void** ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IAutoComplete* This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IAutoComplete* This);

    /*** IAutoComplete methods ***/
    HRESULT (STDMETHODCALLTYPE *Init)(
        IAutoComplete* This,
        HWND hwndEdit,
        IUnknown* punkACL,
        LPCOLESTR pwszRegKeyPath,
        LPCOLESTR pwszQuickComplete);

    HRESULT (STDMETHODCALLTYPE *Enable)(
        IAutoComplete* This,
        BOOL fEnable);

    END_INTERFACE
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IAutoComplete_QueryInterface(p,a,b) (p)->lpVtbl->QueryInterface(p,a,b)
#define IAutoComplete_AddRef(p) (p)->lpVtbl->AddRef(p)
#define IAutoComplete_Release(p) (p)->lpVtbl->Release(p)
/*** IAutoComplete methods ***/
#define IAutoComplete_Init(p,a,b,c,d) (p)->lpVtbl->Init(p,a,b,c,d)
#define IAutoComplete_Enable(p,a) (p)->lpVtbl->Enable(p,a)
#endif

#endif

#define IAutoComplete_METHODS \
    /*** IUnknown methods ***/ \
    STDMETHOD_(HRESULT,QueryInterface)(THIS_ REFIID riid, void** ppvObject) PURE; \
    STDMETHOD_(ULONG,AddRef)(THIS) PURE; \
    STDMETHOD_(ULONG,Release)(THIS) PURE; \
    /*** IAutoComplete methods ***/ \
    STDMETHOD_(HRESULT,Init)(THIS_ HWND hwndEdit, IUnknown* punkACL, LPCOLESTR pwszRegKeyPath, LPCOLESTR pwszQuickComplete) PURE; \
    STDMETHOD_(HRESULT,Enable)(THIS_ BOOL fEnable) PURE;

HRESULT CALLBACK IAutoComplete_Init_Proxy(
    IAutoComplete* This,
    HWND hwndEdit,
    IUnknown* punkACL,
    LPCOLESTR pwszRegKeyPath,
    LPCOLESTR pwszQuickComplete);
void __RPC_STUB IAutoComplete_Init_Stub(
    struct IRpcStubBuffer* This,
    struct IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT CALLBACK IAutoComplete_Enable_Proxy(
    IAutoComplete* This,
    BOOL fEnable);
void __RPC_STUB IAutoComplete_Enable_Stub(
    struct IRpcStubBuffer* This,
    struct IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);

#endif  /* __IAutoComplete_INTERFACE_DEFINED__ */

#ifndef __IAutoComplete2_FWD_DEFINED__
#define __IAutoComplete2_FWD_DEFINED__
typedef struct IAutoComplete2 IAutoComplete2;
#endif

typedef IAutoComplete2 *LPAUTOCOMPLETE2;

typedef enum _tagAUTOCOMPLETEOPTIONS {
    ACO_NONE = 0x0,
    ACO_AUTOSUGGEST = 0x1,
    ACO_AUTOAPPEND = 0x2,
    ACO_SEARCH = 0x4,
    ACO_FILTERPREFIXES = 0x8,
    ACO_USETAB = 0x10,
    ACO_UPDOWNKEYDROPSLIST = 0x20,
    ACO_RTLREADING = 0x40
} AUTOCOMPLETEOPTIONS;

/*****************************************************************************
 * IAutoComplete2 interface
 */
#ifndef __IAutoComplete2_INTERFACE_DEFINED__
#define __IAutoComplete2_INTERFACE_DEFINED__

DEFINE_GUID(IID_IAutoComplete2, 0xeac04bc0, 0x3791, 0x11d2, 0xbb,0x95, 0x00,0x60,0x97,0x7b,0x46,0x4c);
#if defined(__cplusplus) && !defined(CINTERFACE)
struct IAutoComplete2 : public IAutoComplete
{
    virtual HRESULT STDMETHODCALLTYPE SetOptions(
        DWORD dwFlag) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetOptions(
        DWORD* pdwFlag) = 0;

};
#else
typedef struct IAutoComplete2Vtbl IAutoComplete2Vtbl;
struct IAutoComplete2 {
    const IAutoComplete2Vtbl* lpVtbl;
};
struct IAutoComplete2Vtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IAutoComplete2* This,
        REFIID riid,
        void** ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IAutoComplete2* This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IAutoComplete2* This);

    /*** IAutoComplete methods ***/
    HRESULT (STDMETHODCALLTYPE *Init)(
        IAutoComplete2* This,
        HWND hwndEdit,
        IUnknown* punkACL,
        LPCOLESTR pwszRegKeyPath,
        LPCOLESTR pwszQuickComplete);

    HRESULT (STDMETHODCALLTYPE *Enable)(
        IAutoComplete2* This,
        BOOL fEnable);

    /*** IAutoComplete2 methods ***/
    HRESULT (STDMETHODCALLTYPE *SetOptions)(
        IAutoComplete2* This,
        DWORD dwFlag);

    HRESULT (STDMETHODCALLTYPE *GetOptions)(
        IAutoComplete2* This,
        DWORD* pdwFlag);

    END_INTERFACE
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IAutoComplete2_QueryInterface(p,a,b) (p)->lpVtbl->QueryInterface(p,a,b)
#define IAutoComplete2_AddRef(p) (p)->lpVtbl->AddRef(p)
#define IAutoComplete2_Release(p) (p)->lpVtbl->Release(p)
/*** IAutoComplete methods ***/
#define IAutoComplete2_Init(p,a,b,c,d) (p)->lpVtbl->Init(p,a,b,c,d)
#define IAutoComplete2_Enable(p,a) (p)->lpVtbl->Enable(p,a)
/*** IAutoComplete2 methods ***/
#define IAutoComplete2_SetOptions(p,a) (p)->lpVtbl->SetOptions(p,a)
#define IAutoComplete2_GetOptions(p,a) (p)->lpVtbl->GetOptions(p,a)
#endif

#endif

#define IAutoComplete2_METHODS \
    /*** IUnknown methods ***/ \
    STDMETHOD_(HRESULT,QueryInterface)(THIS_ REFIID riid, void** ppvObject) PURE; \
    STDMETHOD_(ULONG,AddRef)(THIS) PURE; \
    STDMETHOD_(ULONG,Release)(THIS) PURE; \
    /*** IAutoComplete methods ***/ \
    STDMETHOD_(HRESULT,Init)(THIS_ HWND hwndEdit, IUnknown* punkACL, LPCOLESTR pwszRegKeyPath, LPCOLESTR pwszQuickComplete) PURE; \
    STDMETHOD_(HRESULT,Enable)(THIS_ BOOL fEnable) PURE; \
    /*** IAutoComplete2 methods ***/ \
    STDMETHOD_(HRESULT,SetOptions)(THIS_ DWORD dwFlag) PURE; \
    STDMETHOD_(HRESULT,GetOptions)(THIS_ DWORD* pdwFlag) PURE;

HRESULT CALLBACK IAutoComplete2_SetOptions_Proxy(
    IAutoComplete2* This,
    DWORD dwFlag);
void __RPC_STUB IAutoComplete2_SetOptions_Stub(
    struct IRpcStubBuffer* This,
    struct IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT CALLBACK IAutoComplete2_GetOptions_Proxy(
    IAutoComplete2* This,
    DWORD* pdwFlag);
void __RPC_STUB IAutoComplete2_GetOptions_Stub(
    struct IRpcStubBuffer* This,
    struct IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);

#endif  /* __IAutoComplete2_INTERFACE_DEFINED__ */

#ifndef __IFolderViewOC_FWD_DEFINED__
#define __IFolderViewOC_FWD_DEFINED__
typedef struct IFolderViewOC IFolderViewOC;
#endif

/*****************************************************************************
 * IFolderViewOC interface
 */
#ifndef __IFolderViewOC_INTERFACE_DEFINED__
#define __IFolderViewOC_INTERFACE_DEFINED__

DEFINE_GUID(IID_IFolderViewOC, 0x9ba05970, 0xf6a8, 0x11cf, 0xa4,0x42, 0x00,0xa0,0xc9,0x0a,0x8f,0x39);
#if defined(__cplusplus) && !defined(CINTERFACE)
struct IFolderViewOC : public IDispatch
{
    virtual HRESULT STDMETHODCALLTYPE SetFolderView(
        IDispatch* pdisp) = 0;

};
#else
typedef struct IFolderViewOCVtbl IFolderViewOCVtbl;
struct IFolderViewOC {
    const IFolderViewOCVtbl* lpVtbl;
};
struct IFolderViewOCVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IFolderViewOC* This,
        REFIID riid,
        void** ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IFolderViewOC* This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IFolderViewOC* This);

    /*** IDispatch methods ***/
    HRESULT (STDMETHODCALLTYPE *GetTypeInfoCount)(
        IFolderViewOC* This,
        UINT* pctinfo);

    HRESULT (STDMETHODCALLTYPE *GetTypeInfo)(
        IFolderViewOC* This,
        UINT iTInfo,
        LCID lcid,
        ITypeInfo** ppTInfo);

    HRESULT (STDMETHODCALLTYPE *GetIDsOfNames)(
        IFolderViewOC* This,
        REFIID riid,
        LPOLESTR* rgszNames,
        UINT cNames,
        LCID lcid,
        DISPID* rgDispId);

    HRESULT (STDMETHODCALLTYPE *Invoke)(
        IFolderViewOC* This,
        DISPID dispIdMember,
        REFIID riid,
        LCID lcid,
        WORD wFlags,
        DISPPARAMS* pDispParams,
        VARIANT* pVarResult,
        EXCEPINFO* pExcepInfo,
        UINT* puArgErr);

    /*** IFolderViewOC methods ***/
    HRESULT (STDMETHODCALLTYPE *SetFolderView)(
        IFolderViewOC* This,
        IDispatch* pdisp);

    END_INTERFACE
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IFolderViewOC_QueryInterface(p,a,b) (p)->lpVtbl->QueryInterface(p,a,b)
#define IFolderViewOC_AddRef(p) (p)->lpVtbl->AddRef(p)
#define IFolderViewOC_Release(p) (p)->lpVtbl->Release(p)
/*** IDispatch methods ***/
#define IFolderViewOC_GetTypeInfoCount(p,a) (p)->lpVtbl->GetTypeInfoCount(p,a)
#define IFolderViewOC_GetTypeInfo(p,a,b,c) (p)->lpVtbl->GetTypeInfo(p,a,b,c)
#define IFolderViewOC_GetIDsOfNames(p,a,b,c,d,e) (p)->lpVtbl->GetIDsOfNames(p,a,b,c,d,e)
#define IFolderViewOC_Invoke(p,a,b,c,d,e,f,g,h) (p)->lpVtbl->Invoke(p,a,b,c,d,e,f,g,h)
/*** IFolderViewOC methods ***/
#define IFolderViewOC_SetFolderView(p,a) (p)->lpVtbl->SetFolderView(p,a)
#endif

#endif

#define IFolderViewOC_METHODS \
    /*** IUnknown methods ***/ \
    STDMETHOD_(HRESULT,QueryInterface)(THIS_ REFIID riid, void** ppvObject) PURE; \
    STDMETHOD_(ULONG,AddRef)(THIS) PURE; \
    STDMETHOD_(ULONG,Release)(THIS) PURE; \
    /*** IDispatch methods ***/ \
    STDMETHOD_(HRESULT,GetTypeInfoCount)(THIS_ UINT* pctinfo) PURE; \
    STDMETHOD_(HRESULT,GetTypeInfo)(THIS_ UINT iTInfo, LCID lcid, ITypeInfo** ppTInfo) PURE; \
    STDMETHOD_(HRESULT,GetIDsOfNames)(THIS_ REFIID riid, LPOLESTR* rgszNames, UINT cNames, LCID lcid, DISPID* rgDispId) PURE; \
    STDMETHOD_(HRESULT,Invoke)(THIS_ DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS* pDispParams, VARIANT* pVarResult, EXCEPINFO* pExcepInfo, UINT* puArgErr) PURE; \
    /*** IFolderViewOC methods ***/ \
    STDMETHOD_(HRESULT,SetFolderView)(THIS_ IDispatch* pdisp) PURE;

HRESULT CALLBACK IFolderViewOC_SetFolderView_Proxy(
    IFolderViewOC* This,
    IDispatch* pdisp);
void __RPC_STUB IFolderViewOC_SetFolderView_Stub(
    struct IRpcStubBuffer* This,
    struct IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);

#endif  /* __IFolderViewOC_INTERFACE_DEFINED__ */

#ifdef __cplusplus
}
#endif
#endif /* __WIDL_SHLDISP_H */
