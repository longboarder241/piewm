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


/***********************************************************************
 *
 * $XConsortium: events.h,v 1.13 90/03/13 15:47:17 jim Exp $
 *
 * twm event handler include file
 *
 * 17-Nov-87 Thomas E. LaStrange		File created
 *
 ***********************************************************************/

#ifndef _EVENTS_
#define _EVENTS_

typedef void (*event_proc)();

extern void InitEvents();
extern Bool StashEventTime(XEvent *ev);
extern Time lastTimestamp;
extern void SimulateMapRequest (Window w);
extern void AutoRaiseWindow (TwmWindow *tmp);
#define LastTimestamp() lastTimestamp
extern Bool DispatchEvent(void);
extern void HandleEvents(void);
extern void HandleExpose(void);
extern void HandleDestroyNotify(void);
extern void HandleMapRequest(void);
extern void HandleMapNotify(void);
extern void HandleUnmapNotify(void);
extern void HandleMotionNotify(void);
extern void HandleButtonRelease(void);
extern void HandleButtonPress(void);
extern void HandleEnterNotify(void);
extern void HandleLeaveNotify(void);
extern void HandleConfigureRequest(void);
extern void HandleClientMessage(void);
extern void HandlePropertyNotify(void);
extern void HandleKeyPress(void);
extern void HandleColormapNotify(void);
extern void HandleVisibilityNotify(void);
extern void HandleUnknown(void);
extern void InstallWindowColormaps (int type, TwmWindow *tmp);
extern void UninstallRootColormap(void);
extern void InstallRootColormap(void);
extern void RedoIconName(void);


extern event_proc EventHandler[];
extern Window DragWindow;
extern Window DragVirtual;
extern int origDragX;
extern int origDragY;
extern int DragX;
extern int DragY;
extern int DragWidth;
extern int DragHeight;
extern int CurrentDragX;
extern int CurrentDragY;

extern int ButtonPressed;
extern int Cancel;

extern XEvent Event;

#endif /* _EVENTS_ */
