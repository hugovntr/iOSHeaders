/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class SBIconPageIndicatorImageSetResult, SBIconPageIndicatorImageSetCache;
@protocol SBIconListPageControlDelegate;

__attribute__((visibility("hidden")))
@interface SBIconListPageControl : XXUnknownSuperclass {
	id<SBIconListPageControlDelegate> _delegate;
	BOOL _hasSetLegibility;
	SBIconPageIndicatorImageSetResult* _pageIndicatorImageSets;
	BOOL _legibilityEnabled;
	SBIconPageIndicatorImageSetCache* _imageSetCache;
}
@property(retain, nonatomic) SBIconPageIndicatorImageSetCache* imageSetCache;
@property(assign, nonatomic) id<SBIconListPageControlDelegate> delegate;
@property(assign, nonatomic) BOOL legibilityEnabled;
-(void)_transitionIndicator:(id)indicator toEnabled:(BOOL)enabled index:(int)index;
-(id)_indicatorViewEnabled:(BOOL)enabled index:(int)index;
-(id)_iconListIndicatorImage:(BOOL)image;
-(void)_setIndicatorImage:(id)image toEnabled:(BOOL)enabled;
-(void)setLegibilitySettings:(id)settings;
-(void)setFrame:(CGRect)frame;
-(void)touchesEnded:(id)ended withEvent:(id)event;
-(void)touchesMoved:(id)moved withEvent:(id)event;
-(void)touchesBegan:(id)began withEvent:(id)event;
-(float)defaultHeight;
-(void)dealloc;
-(id)initWithFrame:(CGRect)frame;
@end
