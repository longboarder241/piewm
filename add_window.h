/*****************************************************************************/
/**       Copyright 1988 by Evans & Sutherland Computer Corporation,        **/
/**                          Salt Lake City, Utah                           **/
/**  Portions Copyright 1989 by the Massachusetts Institute of Technology   **/
/**                        Cambridge, Massachusetts                         **/
/**                                                                         **/
/**                           All Rights Reserved                           **/
/**                                                                         **/
/**    Permission to use, copy, modify, and distribute this software and    **/
/**    its documentation  for  any  purpose  and  without  fee is hereby    **/
/**    granted, provided that the above copyright notice appear  in  all    **/
/**    copies and that both  that  copyright  notice  and  this  permis-    **/
/**    sion  notice appear in supporting  documentation,  and  that  the    **/
/**    names of Evans & Sutherland and M.I.T. not be used in advertising    **/
/**    in publicity pertaining to distribution of the  software  without    **/
/**    specific, written prior permission.                                  **/
/**                                                                         **/
/**    EVANS & SUTHERLAND AND M.I.T. DISCLAIM ALL WARRANTIES WITH REGARD    **/
/**    TO THIS SOFTWARE, INCLUDING ALL IMPLIED WARRANTIES  OF  MERCHANT-    **/
/**    ABILITY  AND  FITNESS,  IN  NO  EVENT SHALL EVANS & SUTHERLAND OR    **/
/**    M.I.T. BE LIABLE FOR ANY SPECIAL, INDIRECT OR CONSEQUENTIAL  DAM-    **/
/**    AGES OR  ANY DAMAGES WHATSOEVER  RESULTING FROM LOSS OF USE, DATA    **/
/**    OR PROFITS, WHETHER IN AN ACTION OF CONTRACT, NEGLIGENCE OR OTHER    **/
/**    TORTIOUS ACTION, ARISING OUT OF OR IN  CONNECTION  WITH  THE  USE    **/
/**    OR PERFORMANCE OF THIS SOFTWARE.                                     **/
/*****************************************************************************/


/**********************************************************************
 *
 * $XConsortium: add_window.h,v 1.6 89/12/10 17:46:32 jim Exp $
 *
 * AddWindow include file
 *
 * 31-Mar-88 Tom LaStrange        Initial Version.
 *
 **********************************************************************/

#ifndef _ADD_WINDOW_
#define _ADD_WINDOW_

extern char NoName[];

extern TwmWindow *AddWindow(Window w, int iconmgr, void *iconp);
extern int MappedNotOverride(Window w);
extern void GrabButtons(TwmWindow *tmp_win);
extern void GrabKeys(TwmWindow *tmp_win);
extern void SetTWM_FLAGS(TwmWindow *tmp_win);
extern void GetGravityOffsets (TwmWindow *tmp, int *xp, int *yp);
extern void AddDefaultBindings (void);
extern void FetchWmProtocols (TwmWindow *tmp);
extern void FetchWmColormapWindows (TwmWindow *tmp);
extern void SimulateWinGravity (TwmWindow *tmp);
extern void GetUserMenu (TwmWindow *tmp_win);

extern int AddingX;	
extern int AddingY;
extern int AddingW;
extern int AddingH;

#endif /* _ADD_WINDOW_ */

