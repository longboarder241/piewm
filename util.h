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
 * $XConsortium: util.h,v 1.10 89/12/10 17:47:04 jim Exp $
 *
 * utility routines header file
 *
 * 28-Oct-87 Thomas E. LaStrange		File created
 *
 ***********************************************************************/

#ifndef _UTIL_
#define _UTIL_

extern void	Zoom(Window wf, Window wt);
extern void	MoveOutline(Window root, int x, int y, int width, int height, int bw, int th);
extern Pixmap	GetPixmap(char *name);
extern Pixmap	FindPixmap(char *name, unsigned int *widthp, unsigned int *heightp, Bool *isXpm, Pixel *bg_color, Pixmap *shape_mask);
extern void	GetUnknownIcon(char *name);
extern char 	*ExpandFilename(char *name);
extern int	GetColor(int kind, Pixel *what, char *name);
extern void SetFocus(TwmWindow *tmp_win);
void GetFont(MyFont *font);
void LocateStandardColormaps(void);
void RemoveRGBColormap(Atom a);
void InsertRGBColormap(Atom a,XStandardColormap *maps, int nmaps, Bool replace);



extern int HotX, HotY;

#endif /* _UTIL_ */
