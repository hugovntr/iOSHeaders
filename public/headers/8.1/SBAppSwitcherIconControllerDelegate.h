/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NSObject.h"


@protocol SBAppSwitcherIconControllerDelegate <NSObject>
-(void)switcherIconScrollerDidEndScrolling:(id)switcherIconScroller;
-(unsigned)switcherIconScroller:(id)scroller settledIndexForNormalizedOffset:(inout float*)normalizedOffset andXVelocity:(float)velocity;
-(void)switcherIconScrollerBeganPanning:(id)panning;
-(BOOL)switcherIconScroller:(id)scroller shouldHideIconForDisplayLayout:(id)displayLayout;
-(void)switcherIconScroller:(id)scroller activate:(id)activate;
-(void)switcherIconScroller:(id)scroller contentOffsetChanged:(float)changed;
@end
