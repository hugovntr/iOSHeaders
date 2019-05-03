/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBIconIndexNodeObserver.h"
#import "SBIconAnimator.h"

@class NSString, SBIconListView, SBIconZoomSettings, SBIconListModel, NSMapTable, NSSet;

__attribute__((visibility("hidden")))
@interface SBIconZoomAnimator : SBIconAnimator <SBIconIndexNodeObserver> {
	NSMapTable* _listIconToViewMap;
	NSMapTable* _dockIconToViewMap;
	NSSet* _criticalIconNodeIdentifiers;
	SBIconListModel* _iconListModel;
	SBIconListView* _iconListView;
	SBIconListView* _dockListView;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) NSSet* criticalIconNodeIdentifiers;
@property(readonly, retain, nonatomic) SBIconListView* dockListView;
@property(readonly, retain, nonatomic) SBIconListView* iconListView;
@property(retain, nonatomic) SBIconZoomSettings* settings;
-(void)_invalidateAnimationForSignificantIconModelChangesForReason:(id)reason;
-(void)_iconModelDidReload;
-(void)_iconModelDidRelayout;
-(void)_clearObservers;
-(void)_setDockListView:(id)view;
-(void)_setIconListView:(id)view;
-(void)node:(id)node didRemoveContainedNodeIdentifiers:(id)identifiers;
-(void)node:(id)node didAddContainedNodeIdentifiers:(id)identifiers;
-(void)_animateToFraction:(float)fraction afterDelay:(double)delay withSharedCompletion:(id)sharedCompletion;
-(void)_applyLabelAlphaFraction:(float)fraction;
-(unsigned)_numberOfSignificantAnimations;
-(void)_cleanupAnimation;
-(void)_setAnimationFraction:(float)fraction;
-(void)_prepareAnimation;
-(unsigned)dockIconCount;
-(unsigned)listIconCount;
-(void)enumerateIconsAndIconViewsWithHandler:(id)handler;
-(id)iconViewForIcon:(id)icon;
-(void)dealloc;
-(id)initWithFolderController:(id)folderController;
@end
