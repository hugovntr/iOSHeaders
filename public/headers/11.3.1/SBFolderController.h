//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBNestingViewController.h"

#import "BSDescriptionProviding.h"
#import "SBFolderControllerDelegate.h"
#import "SBFolderObserver.h"
#import "SBFolderViewDelegate.h"
#import "SBIconListViewDragObserver.h"
#import "SBScaleIconZoomAnimationContaining.h"

@class NSArray, NSMapTable, NSMutableSet, NSString, NSTimer, SBAppStatusBarSettingsAssertion, SBFolder, SBFolderContainerView, SBFolderContext, SBFolderControllerAnimationContext, SBFolderControllerBackgroundView, SBFolderView, SBIconAnimator, SBIconViewMap, UIStatusBar, UIView, UIWindow, _UILegibilitySettings;

@interface SBFolderController : SBNestingViewController <SBFolderControllerDelegate, SBFolderObserver, SBIconListViewDragObserver, SBFolderViewDelegate, SBScaleIconZoomAnimationContaining, BSDescriptionProviding>
{
    SBIconViewMap *_viewMap;
    SBFolderContainerView *_containerView;
    SBFolderView *_contentView;
    SBFolderControllerBackgroundView *_backgroundView;
    NSTimer *_closeFolderTimer;
    _Bool _grabbedIconHasEverEnteredFolderView;
    NSMapTable *_editingContextsByFolder;
    SBIconAnimator *_iconAnimator;
    NSMutableSet *_draggingEnteredIconListViews;
    NSMutableSet *_fakeStatusBarHidingReasons;
    _Bool _isOpen;
    _Bool _isEditing;
    _Bool _isAnimating;
    _Bool _active;
    _Bool _rotating;
    id <SBFolderControllerDelegate> _folderDelegate;
    SBFolder *_folder;
    long long _orientation;
    _UILegibilitySettings *_legibilitySettings;
    _UILegibilitySettings *_accessibilityLegibilitySettings;
    SBFolderContext *_lastContext;
    SBAppStatusBarSettingsAssertion *_statusBarAssertion;
    UIStatusBar *_fakeStatusBar;
    SBFolderControllerAnimationContext *_animationContext;
}

+ (Class)listViewClass;
- (void).cxx_destruct;
- (id)_addEmptyListForce:(_Bool)arg1;
- (void)_addFakeStatusBarView;
- (_Bool)_allowUserInteraction;
- (_Bool)_canHandleIconDropSession:(id)arg1 inListView:(id)arg2;
- (void)_cancelAllInteractionTimers;
- (void)_cancelCloseFolderTimer;
- (void)_clearIconAnimator;
- (void)_closeFolderTimerFired;
- (void)_compactFolder;
- (void)_configureForInnerFolderController:(id)arg1;
- (Class)_contentViewClass;
- (id)_createContext;
- (unsigned long long)_depth;
- (void)_fadeHomescreenAndDockIfNecessaryForFolderOpen:(_Bool)arg1;
- (void)_hideFakeStatusBarForReason:(id)arg1;
- (_Bool)_homescreenAndDockShouldFade;
- (_Bool)_iconAppearsOnCurrentPage:(id)arg1;
- (id)_iconPageIndicatorImageSetCache;
- (void)_invalidate;
- (_Bool)_listIndexIsVisible:(unsigned long long)arg1;
- (id)_newAnimatorForZoomUp:(_Bool)arg1;
- (void)_noteFolderListsDidChange;
- (void)_removeFakeStatusBar;
- (void)_removeFakeStatusBarAndAssertionIfExists;
- (void)_resetFakeStatusBarFrameOnly;
- (void)_resetFakeStatusBarSettingsIfNecessary;
- (void)_resetIconLists;
- (_Bool)_restoreFromContext:(id)arg1;
- (void)_setCloseFolderTimerIfNecessary;
- (void)_setHomescreenAndDockAlpha:(double)arg1;
- (void)_unhideFakeStatusBarForReason:(id)arg1;
- (void)_updateAssociatedControllerStateAnimated:(_Bool)arg1;
- (void)_updateHomescreenAndDockFade;
- (void)_updateStateOfAssociatedController:(id)arg1 animated:(_Bool)arg2;
@property(retain, nonatomic) _UILegibilitySettings *accessibilityLegibilitySettings; // @synthesize accessibilityLegibilitySettings=_accessibilityLegibilitySettings;
- (void)accessibilityReduceTransparencyDidChange;
- (id)addEmptyListView;
- (void)addViewToHierarchyForNestedViewController:(id)arg1;
- (void)animateScrollToPageZeroWithCompletionHandler:(CDUnknownBlockType)arg1;
@property(retain, nonatomic) SBFolderControllerAnimationContext *animationContext; // @synthesize animationContext=_animationContext;
@property(readonly, nonatomic) UIWindow *animationWindow;
- (id)beginModifyingDockOffscreenFractionForReason:(id)arg1;
- (id)borrowScalingView;
@property(readonly, nonatomic) _Bool canAcceptFolderIconDrags;
- (void)cancelScrolling;
@property(readonly, nonatomic) _Bool closesAfterDragExits;
@property(readonly, nonatomic) UIView *containerView;
- (struct UIEdgeInsets)contentOverlayInsetsFromParentIfAvailableForFolderController:(id)arg1;
- (struct UIEdgeInsets)contentOverlayInsetsFromParentIfAvailableForFolderView:(id)arg1;
@property(readonly, nonatomic) SBFolderView *contentView; // @synthesize contentView=_contentView;
- (Class)controllerClassForFolder:(id)arg1;
- (id)currentIconListView;
- (id)currentIndexPath;
@property(readonly, nonatomic) long long currentPageIndex;
- (void)dealloc;
- (id)deepestFolderController;
@property(readonly, copy) NSString *description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
@property(readonly, nonatomic) _Bool disablesScrollingWhileIconDragIsDropping;
- (id)dockIconListView;
- (id)dockListView;
- (_Bool)doesPageContainIconListView:(long long)arg1;
- (void)fadeContentForMagnificationFraction:(double)arg1;
- (void)fadeContentForMinificationFraction:(double)arg1;
@property(retain, nonatomic) UIStatusBar *fakeStatusBar; // @synthesize fakeStatusBar=_fakeStatusBar;
@property(readonly, nonatomic) UIView *fallbackIconContainerView;
@property(retain, nonatomic) SBFolder *folder; // @synthesize folder=_folder;
- (void)folder:(id)arg1 didAddList:(id)arg2;
- (void)folder:(id)arg1 didRemoveLists:(id)arg2 atIndexes:(id)arg3;
- (void)folderController:(id)arg1 draggedIconShouldDropFromListView:(id)arg2;
- (_Bool)folderController:(id)arg1 iconListView:(id)arg2 canHandleIconDropSession:(id)arg3;
- (void)folderController:(id)arg1 iconListView:(id)arg2 iconDragItem:(id)arg3 willAnimateDropWithAnimator:(id)arg4;
- (void)folderController:(id)arg1 iconListView:(id)arg2 iconDropSession:(id)arg3 didPauseAtLocation:(struct CGPoint)arg4;
- (void)folderController:(id)arg1 iconListView:(id)arg2 iconDropSessionDidEnter:(id)arg3;
- (void)folderController:(id)arg1 iconListView:(id)arg2 iconDropSessionDidExit:(id)arg3;
- (id)folderController:(id)arg1 iconListView:(id)arg2 iconDropSessionDidUpdate:(id)arg3;
- (void)folderController:(id)arg1 iconListView:(id)arg2 performIconDrop:(id)arg3;
- (id)folderController:(id)arg1 iconListView:(id)arg2 previewForDroppingIconDragItem:(id)arg3 proposedPreview:(id)arg4;
- (_Bool)folderController:(id)arg1 iconListView:(id)arg2 shouldAllowSpringLoadedInteractionForIconDragOnIconView:(id)arg3;
- (void)folderController:(id)arg1 iconListView:(id)arg2 springLoadedInteractionForIconDragDidCompleteOnIconView:(id)arg3;
- (void)folderControllerDidClose:(id)arg1;
- (void)folderControllerDidEndScrolling:(id)arg1;
- (void)folderControllerDidOpen:(id)arg1;
- (void)folderControllerDidReceiveCancelReachabilityAction:(id)arg1;
- (id)folderControllerForFolder:(id)arg1;
- (void)folderControllerShouldBeginEditing:(id)arg1;
- (void)folderControllerShouldClose:(id)arg1 withPinchGesture:(id)arg2;
- (void)folderControllerShouldEndEditing:(id)arg1;
- (void)folderControllerWillBeginScrolling:(id)arg1;
- (void)folderControllerWillClose:(id)arg1;
- (void)folderControllerWillOpen:(id)arg1;
@property(nonatomic) __weak id <SBFolderControllerDelegate> folderDelegate; // @synthesize folderDelegate=_folderDelegate;
- (void)folderView:(id)arg1 currentPageIndexDidChange:(long long)arg2;
- (_Bool)folderView:(id)arg1 iconListView:(id)arg2 canHandleIconDropSession:(id)arg3;
- (void)folderView:(id)arg1 iconListView:(id)arg2 iconDragItem:(id)arg3 willAnimateDropWithAnimator:(id)arg4;
- (void)folderView:(id)arg1 iconListView:(id)arg2 iconDropSession:(id)arg3 didPauseAtLocation:(struct CGPoint)arg4;
- (void)folderView:(id)arg1 iconListView:(id)arg2 iconDropSessionDidEnter:(id)arg3;
- (void)folderView:(id)arg1 iconListView:(id)arg2 iconDropSessionDidExit:(id)arg3;
- (id)folderView:(id)arg1 iconListView:(id)arg2 iconDropSessionDidUpdate:(id)arg3;
- (void)folderView:(id)arg1 iconListView:(id)arg2 performIconDrop:(id)arg3;
- (id)folderView:(id)arg1 iconListView:(id)arg2 previewForDroppingIconDragItem:(id)arg3 proposedPreview:(id)arg4;
- (_Bool)folderView:(id)arg1 iconListView:(id)arg2 shouldAllowSpringLoadedInteractionForIconDragOnIconView:(id)arg3;
- (void)folderView:(id)arg1 iconListView:(id)arg2 springLoadedInteractionForIconDragDidCompleteOnIconView:(id)arg3;
- (void)folderViewDidEndScrolling:(id)arg1;
- (void)folderViewDidReceiveCancelReachabilityAction:(id)arg1;
- (void)folderViewShouldBeginEditing:(id)arg1;
- (void)folderViewShouldClose:(id)arg1 withPinchGesture:(id)arg2;
- (void)folderViewWillBeginScrolling:(id)arg1;
- (void)handleReachabilityActivated:(_Bool)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)hasDock;
- (void)iconListView:(id)arg1 concludeIconDrop:(id)arg2;
- (void)iconListView:(id)arg1 iconDropSessionDidEnd:(id)arg2;
- (id)iconListViewAtIndex:(unsigned long long)arg1;
- (id)iconListViewAtPoint:(struct CGPoint)arg1;
- (Class)iconListViewClassForFolderView:(id)arg1;
@property(readonly, nonatomic) unsigned long long iconListViewCount;
- (id)iconListViewForDrag:(id)arg1;
- (id)iconListViewForTouch:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *iconListViews;
- (id)iconViewMap;
- (id)initWithFolder:(id)arg1 orientation:(long long)arg2 viewMap:(id)arg3;
- (id)initWithFolder:(id)arg1 orientation:(long long)arg2 viewMap:(id)arg3 context:(id)arg4;
@property(readonly, nonatomic) SBFolderController *innerFolderController;
- (void)invalidate;
@property(nonatomic, getter=isActive) _Bool active; // @synthesize active=_active;
@property(nonatomic, getter=isAnimating) _Bool animating; // @synthesize animating=_isAnimating;
- (_Bool)isDisplayingIcon:(id)arg1;
@property(readonly, nonatomic, getter=isEditing) _Bool editing; // @synthesize editing=_isEditing;
@property(nonatomic, getter=isOpen) _Bool open; // @synthesize open=_isOpen;
@property(nonatomic, getter=isRotating) _Bool rotating; // @synthesize rotating=_rotating;
@property(readonly, nonatomic, getter=isScrolling) _Bool scrolling;
@property(retain, nonatomic) SBFolderContext *lastContext; // @synthesize lastContext=_lastContext;
- (void)layoutIconLists:(double)arg1 animationType:(long long)arg2 forceRelayout:(_Bool)arg3;
@property(retain, nonatomic) _UILegibilitySettings *legibilitySettings; // @synthesize legibilitySettings=_legibilitySettings;
- (void)loadView;
- (double)minimumHomeScreenScaleForFolderController:(id)arg1;
- (double)minimumHomeScreenScaleForFolderView:(id)arg1;
- (id)nestingViewController:(id)arg1 animationControllerForOperation:(long long)arg2 onViewController:(id)arg3 animated:(_Bool)arg4;
- (void)nestingViewController:(id)arg1 willPerformOperation:(long long)arg2 onViewController:(id)arg3 withTransitionCoordinator:(id)arg4;
- (void)noteIconDrag:(id)arg1 didChangeInIconListView:(id)arg2;
- (void)noteIconDrag:(id)arg1 didEnterIconListView:(id)arg2;
- (void)noteIconDrag:(id)arg1 didExitIconListView:(id)arg2;
- (void)noteIconDragDidEnd:(id)arg1;
- (void)noteUserIsInteractingWithIcons;
@property(nonatomic) long long orientation; // @synthesize orientation=_orientation;
@property(readonly, nonatomic) __weak SBFolderController *outerFolderController;
- (void)popFolderAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)prepareForAnimation:(id)arg1 withTargetIcon:(id)arg2;
- (void)prepareToClose;
- (void)prepareToLaunchTappedIcon:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)prepareToOpen;
- (void)prepareToTearDown;
- (void)pushFolderIcon:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)removeViewFromHierarchyForNestedViewController:(id)arg1;
- (_Bool)restoreExpandedIndexPath:(id)arg1;
- (void)returnScalingView;
- (void)setContentAlpha:(double)arg1;
- (_Bool)setCurrentPageIndex:(long long)arg1 animated:(_Bool)arg2;
- (_Bool)setCurrentPageIndex:(long long)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)setCurrentPageIndexToListDirectlyContainingIcon:(id)arg1 animated:(_Bool)arg2;
- (void)setCurrentPageIndexToListDirectlyContainingIcon:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;
@property(retain, nonatomic) SBAppStatusBarSettingsAssertion *statusBarAssertion; // @synthesize statusBarAssertion=_statusBarAssertion;
- (_Bool)shouldOpenFolderIcon:(id)arg1;
- (struct UIEdgeInsets)statusBarInsetsForOrientation:(long long)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
@property(readonly, nonatomic) _Bool suspendsWallpaperAnimationWhileOpen;
- (void)unscatterAnimated:(_Bool)arg1 afterDelay:(double)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (id)view;
@property(readonly, nonatomic) SBIconViewMap *viewMap; // @synthesize viewMap=_viewMap;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 forOperation:(long long)arg2 withTransitionCoordinator:(id)arg3;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
