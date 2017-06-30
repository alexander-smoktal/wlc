#ifndef _WLC_XATOMS_H_
#define _WLC_XATOMS_H_

#include <stdint.h>
#include <xcb/xcb.h>

enum atom_name {
   WL_SURFACE_ID,
   WM_DELETE_WINDOW,
   WM_TAKE_FOCUS,
   WM_PROTOCOLS,
   WM_NORMAL_HINTS,
   MOTIF_WM_HINTS,
   TEXT,
   UTF8_STRING,
   CLIPBOARD,
   CLIPBOARD_MANAGER,
   TARGETS,
   PRIMARY,
   WM_S0,
   STRING,
   WLC_SELECTION,
   NET_WM_S0,
   NET_WM_PID,
   NET_WM_NAME,
   NET_WM_STATE,
   NET_WM_STATE_FULLSCREEN,
   NET_WM_STATE_MODAL,
   NET_WM_STATE_ABOVE,
   NET_SUPPORTED,
   NET_SUPPORTING_WM_CHECK,
   NET_WM_WINDOW_TYPE,
   NET_WM_WINDOW_TYPE_DESKTOP,
   NET_WM_WINDOW_TYPE_DOCK,
   NET_WM_WINDOW_TYPE_TOOLBAR,
   NET_WM_WINDOW_TYPE_MENU,
   NET_WM_WINDOW_TYPE_UTILITY,
   NET_WM_WINDOW_TYPE_SPLASH,
   NET_WM_WINDOW_TYPE_DIALOG,
   NET_WM_WINDOW_TYPE_DROPDOWN_MENU,
   NET_WM_WINDOW_TYPE_POPUP_MENU,
   NET_WM_WINDOW_TYPE_TOOLTIP,
   NET_WM_WINDOW_TYPE_NOTIFICATION,
   NET_WM_WINDOW_TYPE_COMBO,
   NET_WM_WINDOW_TYPE_DND,
   NET_WM_WINDOW_TYPE_NORMAL,
   ATOM_LAST
};

#define XCB_CALL(xwm, x) xcb_call(xwm, __PRETTY_FUNCTION__, __LINE__, x)
bool xcb_call(struct wlc_xwm *xwm, const char *func, uint32_t line, xcb_void_cookie_t cookie);

#endif
