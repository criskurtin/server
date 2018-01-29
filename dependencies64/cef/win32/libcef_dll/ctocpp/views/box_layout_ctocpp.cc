// Copyright (c) 2017 The Chromium Embedded Framework Authors. All rights
// reserved. Use of this source code is governed by a BSD-style license that
// can be found in the LICENSE file.
//
// ---------------------------------------------------------------------------
//
// This file was generated by the CEF translator tool. If making changes by
// hand only do so within the body of existing method and function
// implementations. See the translator.README.txt file in the tools directory
// for more information.
//
// $hash=12c969efc3a366f77f484907a7bc856ce0508862$
//

#include "libcef_dll/ctocpp/views/box_layout_ctocpp.h"
#include "libcef_dll/ctocpp/views/fill_layout_ctocpp.h"
#include "libcef_dll/ctocpp/views/view_ctocpp.h"

// VIRTUAL METHODS - Body may be edited by hand.

void CefBoxLayoutCToCpp::SetFlexForView(CefRefPtr<CefView> view, int flex) {
  cef_box_layout_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, set_flex_for_view))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: view; type: refptr_same
  DCHECK(view.get());
  if (!view.get())
    return;

  // Execute
  _struct->set_flex_for_view(_struct, CefViewCToCpp::Unwrap(view), flex);
}

void CefBoxLayoutCToCpp::ClearFlexForView(CefRefPtr<CefView> view) {
  cef_box_layout_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, clear_flex_for_view))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: view; type: refptr_same
  DCHECK(view.get());
  if (!view.get())
    return;

  // Execute
  _struct->clear_flex_for_view(_struct, CefViewCToCpp::Unwrap(view));
}

CefRefPtr<CefBoxLayout> CefBoxLayoutCToCpp::AsBoxLayout() {
  cef_layout_t* _struct = reinterpret_cast<cef_layout_t*>(GetStruct());
  if (CEF_MEMBER_MISSING(_struct, as_box_layout))
    return NULL;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_box_layout_t* _retval = _struct->as_box_layout(_struct);

  // Return type: refptr_same
  return CefBoxLayoutCToCpp::Wrap(_retval);
}

CefRefPtr<CefFillLayout> CefBoxLayoutCToCpp::AsFillLayout() {
  cef_layout_t* _struct = reinterpret_cast<cef_layout_t*>(GetStruct());
  if (CEF_MEMBER_MISSING(_struct, as_fill_layout))
    return NULL;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_fill_layout_t* _retval = _struct->as_fill_layout(_struct);

  // Return type: refptr_same
  return CefFillLayoutCToCpp::Wrap(_retval);
}

bool CefBoxLayoutCToCpp::IsValid() {
  cef_layout_t* _struct = reinterpret_cast<cef_layout_t*>(GetStruct());
  if (CEF_MEMBER_MISSING(_struct, is_valid))
    return false;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  int _retval = _struct->is_valid(_struct);

  // Return type: bool
  return _retval ? true : false;
}

// CONSTRUCTOR - Do not edit by hand.

CefBoxLayoutCToCpp::CefBoxLayoutCToCpp() {}

template <>
cef_box_layout_t*
CefCToCppRefCounted<CefBoxLayoutCToCpp, CefBoxLayout, cef_box_layout_t>::
    UnwrapDerived(CefWrapperType type, CefBoxLayout* c) {
  NOTREACHED() << "Unexpected class type: " << type;
  return NULL;
}

#if DCHECK_IS_ON()
template <>
base::AtomicRefCount
    CefCToCppRefCounted<CefBoxLayoutCToCpp, CefBoxLayout, cef_box_layout_t>::
        DebugObjCt ATOMIC_DECLARATION;
#endif

template <>
CefWrapperType CefCToCppRefCounted<CefBoxLayoutCToCpp,
                                   CefBoxLayout,
                                   cef_box_layout_t>::kWrapperType =
    WT_BOX_LAYOUT;
