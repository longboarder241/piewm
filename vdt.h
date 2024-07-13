/*****************************************************************************/
/**               Copyright 1990 by Solbourne Computer Inc.                 **/
/**                          Longmont, Colorado                             **/
/**                                                                         **/
/**                           All Rights Reserved                           **/
/**                                                                         **/
/**    Permission to use, copy, modify, and distribute this software and    **/
/**    its documentation  for  any  purpose  and  without  fee is hereby    **/
/**    granted, provided that the above copyright notice appear  in  all    **/
/**    copies and that both  that  copyright  notice  and  this  permis-    **/
/**    sion  notice appear in supporting  documentation,  and  that  the    **/
/**    name of Solbourne not be used in advertising                         **/
/**    in publicity pertaining to distribution of the  software  without    **/
/**    specific, written prior permission.                                  **/
/**                                                                         **/
/**    SOLBOURNE COMPUTER INC. DISCLAIMS ALL WARRANTIES WITH REGARD         **/
/**    TO THIS SOFTWARE, INCLUDING ALL IMPLIED WARRANTIES  OF  MERCHANT-    **/
/**    ABILITY  AND  FITNESS,  IN  NO  EVENT SHALL SOLBOURNE                **/
/**    BE LIABLE FOR ANY SPECIAL, INDIRECT OR CONSEQUENTIAL  DAM-           **/
/**    AGES OR  ANY DAMAGES WHATSOEVER  RESULTING FROM LOSS OF USE, DATA    **/
/**    OR PROFITS, WHETHER IN AN ACTION OF CONTRACT, NEGLIGENCE OR OTHER    **/
/**    TORTIOUS ACTION, ARISING OUT OF OR IN  CONNECTION  WITH  THE  USE    **/
/**    OR PERFORMANCE OF THIS SOFTWARE.                                     **/
/*****************************************************************************/

/**********************************************************************
 *
 * $XConsortium: vdt.c,v 1.140 90/03/23 11:42:33 jim Exp $
 *
 * Virtual Desktop includes
 *
 * 22-Aug-90 Tom LaStrange        Initial Version.
 *
 **********************************************************************/

#ifndef _VDT_
#define _VDT_

#define DEFAULT_PANNER_SCALE 20
#define DEFAULT_PANNER_GEOMETRY "-0-0"

extern void InitVirtualDesktop(void);
extern void SetSWM_ROOT(TwmWindow *tmp_win);
extern void SetSWM_VERSION(void);
extern void RemoveSWM_VERSION(void);
extern void MakePanner(void);
extern void MakeVirtualDesktop(int width, int height);
extern void MapFrame(TwmWindow *tmp_win);
extern void UnmapFrame(TwmWindow *tmp_win);
extern void RaiseFrame(TwmWindow *tmp_win);
extern void LowerFrame(TwmWindow *tmp_win);
extern void MapIcon(TwmWindow *tmp_win);
extern void UnmapIcon(TwmWindow *tmp_win);
extern void RaiseIcon(TwmWindow *tmp_win);
extern void LowerIcon(TwmWindow *tmp_win);
extern void MoveIcon(TwmWindow *tmp_win, int x, int y);
extern void ResizeVirtual(Window window, int width, int height);
extern Window MakeVirtual(TwmWindow *tmp_win, int x, int y, int width, int height,
	    long background, long border);
extern void HandlePannerExpose(XEvent *ev);
extern void HandlePannerButtonPress(XEvent *ev);
extern void HandlePannerButtonRelease(XEvent *ev);
extern void HandlePannerMotionNotify(XEvent *ev);
extern void HandlePannerMove(XButtonEvent *ev, TwmWindow *tmp_win);
extern void MoveDesktop(int x, int y);
extern void ScrollDesktop(int func, char *pos);
extern void ResizeDesktop(int width, int height);
extern void ScrollTo(TwmWindow *tmp_win);
extern void ScrollToQuadrant(TwmWindow *tmp_win);
extern void PaintVirtualWindow(TwmWindow *tmp_win);

#endif /* _VDT_ */

