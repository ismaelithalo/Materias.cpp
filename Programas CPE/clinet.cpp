#include <iostream>
#include <windows.h>


LRESULT CALLBACK BsolPopWndProc (HWND hWnd_p, UINT msg_p, WPARAM wParam_p, LPARAM lParam_p) {
RECT * rc_v;
HWND hvWnd_v, lvWnd_v;
WINDOWPOS wp_v;
HDLAYOUT hdl_v; 

switch(msg_p) {
case WM_SIZING: 
	rc_v = (RECT*)lParam_p;

	hvhWnd_v = GetDlgItem (hWnd_p, 2601);
	lvhWnd_v = GetDlgItem (hWnd_p, 2602);

	hdl_v.prc = rc_v;
	hdl_v.pwpos = &wp_v;

	if (!SendMessage (hvWnd_v, HDM_LAYOUT, 0, (LPARAM) &hdl_v))
		return NULL;

	SetWindowPos (hvWnd_v, wp_v.hwndInsertAfter, rc_v->left, rc_v->top, 
		      rc_v->right - rc_v->left, wp_v.cy, wp_v.flags | SWP_SHOWWINDOW);
	RedrawWindow(hvWnd_v, NULL, NULL, RDW_ALLCHILDREN | RDW_UPDATENOW | RDW_VALIDATE);

	SetWindowPos (lvWnd_v, NULL, rc_v->left, rc_v->top + wp_v.cy, 
		      rc_v->right - rc_v->left, rc_v->bottom - rc_v->top - wp_v.cy, 
		      SWP_NOZORDER | SWP_SHOWWINDOW);
	RedrawWindow(lvWnd_v, NULL, NULL, RDW_ALLCHILDREN | RDW_UPDATENOW | RDW_VALIDATE);
	break;
}
return DefWindowProc(hWnd_p, msg_p, wParam_p, lParam_p);

}
