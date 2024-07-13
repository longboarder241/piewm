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
 * $XConsortium: move.h,v 1.140 90/03/23 11:42:33 jim Exp $
 *
 * New window move code to allow interaction with the virtual desktop
 *
 * 23-Aug-90 Tom LaStrange        Initial Version.
 *
 **********************************************************************/

#ifndef _MOVE_
#define _MOVE_

#define IN_PANNER	0x80000
#define OUT_PANNER	0x40000

void DragFrame(TwmWindow *tmp_win, XButtonEvent *ev, int pulldown);
void DragIcon(TwmWindow *tmp_win, XButtonEvent *ev, int pulldown);
void StartMove(TwmWindow *tmp_win, Window window, int title_height, int *x_root, int *y_root, int *cancel, int panner, int move_scale, unsigned objWidth, unsigned objHeight, int adding, int pulldown);

#endif /* _MOVE_ */

