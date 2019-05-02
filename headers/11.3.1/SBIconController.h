//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "BBObserverDelegate.h"
#import "FBSDisplayLayoutObserver.h"
#import "MCProfileConnectionObserver.h"
#import "SBApplicationRestrictionObserver.h"
#import "SBFolderControllerDelegate.h"
#import "SBHomeScreenIconTransitionAnimatorDelegate.h"
#import "SBIconModelApplicationDataSource.h"
#import "SBIconModelDelegate.h"
#import "SBIconViewDelegate.h"
#import "SBIconViewMapDelegate.h"
#import "SBIconViewQuerying.h"
#import "SBNestingViewControllerDelegate.h"
#import "SBPopoverExtensionProviderDelegate.h"
#import "SBReachabilityObserver.h"
#import "SBSearchGestureObserver.h"
#import "SBTodayViewPresentationProgressObserver.h"
#import "SBUIAppIconForceTouchControllerDataSource.h"
#import "SBUIAppIconForceTouchControllerDelegate.h"
#import "UIGestureRecognizerDelegate.h"
#import "UIPopoverPresentationControllerDelegate.h"

@class BBObserver, BSEventQueue, BSTimer, FBSDisplayLayoutMonitor, NSHashTable, NSIndexPath, NSMutableArray, NSMutableSet, NSSet, NSString, NSTimer, SBAlertItemsController, SBAlertManager, SBApplicationController, SBApplicationPlaceholderController, SBAssistantController, SBFloatingDockBehaviorAssertion, SBFolder, SBFolderStatsQueryableMetric, SBHomeScreenIconTransitionAnimator, SBIconAccessoryViewMap, SBIconColorSettings, SBIconDragManager, SBIconLabelAccessoryViewMap, SBIconListView, SBIconModel, SBIconPreviousLocationTracker, SBIconView, SBIconViewMap, SBIconVisibilityService, SBLeafIcon, SBMainDisplayPolicyAggregator, SBReachabilityManager, SBRootFolderController, SBSearchGesture, SBUIAppIconForceTouchController, SBUIController, SBWorkspaceTransitionRequest, UIImpactFeedbackGenerator, _UILegibilitySettings;

@interface SBIconController : UIViewController <SBNestingViewControllerDelegate, BBObserverDelegate, MCProfileConnectionObserver, SBApplicationRestrictionObserver, SBFolderControllerDelegate, UIGestureRecognizerDelegate, SBUIAppIconForceTouchControllerDataSource, SBUIAppIconForceTouchControllerDelegate, SBTodayViewPresentationProgressObserver, SBSearchGestureObserver, UIPopoverPresentationControllerDelegate, FBSDisplayLayoutObserver, SBPopoverExtensionProviderDelegate, SBIconViewDelegate, SBIconModelDelegate, SBIconViewMapDelegate, SBIconModelApplicationDataSource, SBReachabilityObserver, SBIconViewQuerying, SBHomeScreenIconTransitionAnimatorDelegate>
{
    NSSet *_visibleTags;
    NSSet *_hiddenTags;
    SBIconModel *_iconModel;
    _Bool _needsRelayout;
    _Bool _sendITunesNotification;
    BBObserver *_bbObserver;
    NSMutableSet *_displayIDsWithBadgingEnabled;
    SBRootFolderController *_rootFolderController;
    SBFolder *_closingFolder;
    _Bool _rotating;
    SBLeafIcon *_iconToReveal;
    _Bool _isEditing;
    _Bool _animatingFolder;
    _Bool _allowsUninstall;
    double _iconAlpha;
    double _oldScrollOffset;
    _Bool _keyboardIsRotating;
    _Bool _isAnimatingFolderCreation;
    _Bool _isAnimatingForUnscatter;
    _Bool _isAnimatingSignficantly;
    unsigned long long _maxIconViewsInHierarchy;
    SBIconColorSettings *_iconColorSettings;
    _Bool _reachabilityModeActive;
    SBApplicationController *_override_applicationController;
    SBApplicationPlaceholderController *_override_applicationPlaceholderController;
    SBUIController *_override_userInterfaceController;
    SBReachabilityManager *_override_reachabilityManager;
    SBMainDisplayPolicyAggregator *_override_policyAggregator;
    SBAlertManager *_override_alertManager;
    SBAlertItemsController *_override_alertItemsController;
    SBAssistantController *_override_assistantController;
    SBSearchGesture *_searchGesture;
    _Bool _showingSearch;
    _UILegibilitySettings *_legibilitySettings;
    NSIndexPath *_indexPathToResetTo;
    _Bool _performedInitialLayout;
    SBUIAppIconForceTouchController *_appIconForceTouchController;
    SBIconView *_appIconForceTouchIconView;
    BSTimer *_appIconForceTouchEditingScoreTimer;
    NSTimer *_appIconForceTouchEditingTimer;
    long long _appIconForceTouchEditingScore;
    _Bool _appIconForceTouchSkipCancelAllTouches;
    SBWorkspaceTransitionRequest *_currentTransitionRequest;
    SBHomeScreenIconTransitionAnimator *_currentAnimator;
    NSMutableArray *_currentExpandCompletions;
    NSMutableArray *_currentCollapseCompletions;
    BSEventQueue *_transitionEventQueue;
    id <SBUIPopoverProviding> _popoverProvider;
    SBFolderStatsQueryableMetric *_queryableFolderMetric;
    NSMutableSet *_touchedIconViews;
    NSMutableArray *_iconTouchesFinishedBlocks;
    NSHashTable *_todayViewPresentationObservers;
    NSHashTable *_folderPresentationObservers;
    _Bool _isPresentingPopOver;
    UIImpactFeedbackGenerator *_iconEditingFeedbackBehavior;
    SBFloatingDockBehaviorAssertion *_popOverFloatingDockBehaviorAssertion;
    FBSDisplayLayoutMonitor *_displayLayoutMonitor;
    SBIconViewMap *_homescreenIconViewMap;
    SBIconAccessoryViewMap *_homescreenIconAccessoryViewMap;
    SBIconLabelAccessoryViewMap *_homescreenIconLabelAccessoryViewMap;
    SBIconVisibilityService *_iconVisibilityService;
    SBIconPreviousLocationTracker *_previousIconLocationTracker;
    _Bool _hasRestrictedEnforcedLayout;
    _Bool _uninstallingSystemAppsRestricted;
    SBIconDragManager *_iconDragManager;
    SBIconView *_highlightedIconView;
    NSTimer *_delayedLaunchRequestTimer;
    NSTimer *_editingEndTimer;
    CDUnknownBlockType _searchGestureCompletionHandler;
    NSTimer *_popoverDelayTimer;
    NSTimer *_iconEditingFeedbackWarmTimer;
}

+ (_Bool)_supportsPopovers;
+ (id)sharedInstance;
+ (id)sharedInstanceIfExists;
- (void).cxx_destruct;
- (void)_addTouchedIconView:(id)arg1;
- (id)_aggregateLoggingAppKeyForIcon:(id)arg1;
- (void)_animateFolderIcon:(id)arg1 open:(_Bool)arg2 animated:(_Bool)arg3 withCompletion:(CDUnknownBlockType)arg4;
- (_Bool)_appIconForceTouchGestureRecognizerShouldBegin;
- (_Bool)_badgesAreEnabledForSectionInfo:(id)arg1;
- (_Bool)_canShowPopover;
- (void)_cancelAppIconForceTouchGestureAndBeginEditing;
- (void)_cleanupForClosingFolderAnimated:(_Bool)arg1;
- (void)_clearPopoverTimer;
- (void)_closeFolderController:(id)arg1 animated:(_Bool)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)_compactRootListsAfterFolderCloseWithAnimation:(_Bool)arg1;
- (void)_completeUninstallForIcon:(id)arg1;
- (id)_containerViewControllerForPopOvers;
- (Class)_controllerClassForFolderClass:(Class)arg1;
- (void)_coverSheetDidPresent:(id)arg1;
- (id)_createTestFolder;
- (id)_createTestFolderWithOverrideIconList:(id)arg1;
- (id)_currentFolderController;
- (void)_didRotateFromInterfaceOrientation:(long long)arg1;
- (void)_disableReachabilityImmediately:(_Bool)arg1;
- (void)_dismissAppIconForceTouchControllerIfNecessaryAnimated:(_Bool)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)_dismissPopOverCleanUp;
- (_Bool)_dismissRightEdgeTodayView:(_Bool)arg1;
- (_Bool)_dismissSpotlight:(_Bool)arg1 orTodayView:(_Bool)arg2 animated:(_Bool)arg3 enqueueDismissal:(_Bool)arg4;
- (_Bool)_dismissTodayViewSpotlight:(_Bool)arg1;
- (_Bool)_dismissTopEdgeSpotlight:(_Bool)arg1;
- (long long)_effectiveOrientation;
- (void)_enqueueTransitionName:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)_ensureRootFolderController;
- (void)_failCurrentTestWithMessage:(id)arg1;
- (void)_folderControllerDidReceiveCancelReachabilityAction:(id)arg1;
- (void)_folderDidFinishOpenClose:(_Bool)arg1 animated:(_Bool)arg2 success:(_Bool)arg3;
- (id)_folderSettings;
- (unsigned long long)_foldersInList:(id)arg1;
- (void)_handleAppIconForceTouchGestureRecognizer:(id)arg1;
- (_Bool)_iconCanBeGrabbed:(id)arg1;
- (void)_iconForceTouchControllerDidDismiss:(id)arg1;
- (void)_iconForceTouchControllerWillPresent:(id)arg1;
- (_Bool)_iconListIndexIsValid:(long long)arg1;
- (void)_iconModelDidLayout:(id)arg1;
- (void)_iconModelDidReloadIcons:(id)arg1;
- (void)_iconModelWillLayout:(id)arg1;
- (_Bool)_iconViewInDockOrFolder:(id)arg1;
- (void)_iconVisibilityChanged:(id)arg1;
- (void)_installedAppsDidChange:(id)arg1;
- (_Bool)_isAppIconForceTouchControllerPeekingOrShowing;
- (_Bool)_isHostedByCoverSheet;
- (_Bool)_isShowingOrTransitioningToSearchableTodayView;
- (_Bool)_isShowingPullDownSearch;
- (_Bool)_isShowingPullDownSearchOrTransitioning;
- (_Bool)_isShowingSearchableTodayView;
- (_Bool)_isShowingTodayViewSearch;
- (_Bool)_isShowingTodayViewSearchOrTransitioning;
- (void)_launchFromIconView:(id)arg1;
- (long long)_locationForIcon:(id)arg1;
- (void)_lockScreenUIWillLock:(id)arg1;
- (void)_moveIconViewToContentView:(id)arg1;
- (void)_noteFolderAnimationStateDidChange;
- (void)_noteUserIsInteractingWithIcons;
- (id)_openFolderController;
- (void)_performInitialLayoutWithOrientation:(long long)arg1;
- (void)_performReachabilityTransactionForActivate:(_Bool)arg1 immediately:(_Bool)arg2;
- (id)_policyAggregator;
- (id)_ppt_currentHomescreenState;
- (void)_ppt_restoreHomescreenState:(id)arg1;
- (void)_prepareToResetRootIconLists;
- (_Bool)_presentRightEdgeTodayView:(_Bool)arg1;
- (_Bool)_presentTodayViewSpotlight:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (_Bool)_presentTopEdgeSpotlight:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_primaryAppleAcountDidChange:(id)arg1;
- (id)_proposedFolderNameForGrabbedIcon:(id)arg1 recipientIcon:(id)arg2;
- (void)_removeTouchedIconView:(id)arg1;
- (void)_resetRootIconLists;
- (void)_restartEditingEndTimer;
- (id)_rootFolderController;
- (void)_runAppIconForceTouchTest:(id)arg1 withOptions:(id)arg2;
- (void)_runFolderCloseTest;
- (void)_runFolderOpenTest;
- (void)_runFolderTestWithName:(id)arg1 actions:(CDUnknownBlockType)arg2;
- (void)_runPopOverPresentationTest:(id)arg1 withOptions:(id)arg2;
- (void)_runScrollFolderTest:(long long)arg1;
- (void)_runTest:(CDUnknownBlockType)arg1 afterMovingIconsIntoFolder:(id)arg2 withFolderOpen:(_Bool)arg3;
- (void)_scrollToIconToRevealAnimated:(_Bool)arg1;
- (void)_selectIconModel:(_Bool)arg1;
- (void)_setAnimatingFolderCreation:(_Bool)arg1;
- (void)_setHasAnimatingFolder:(_Bool)arg1;
- (_Bool)_shouldCancelFailedReachability;
- (_Bool)_shouldRespondToIconCloseBoxes;
- (_Bool)_shouldRespondToReachability;
- (void)_showInfoAlertIfNeeded:(_Bool)arg1;
- (void)_showPopOverIfPossibleForApplication:(id)arg1 fromRect:(struct CGRect)arg2 inView:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_sizeCategoryDidChange:(id)arg1;
- (void)_snapshotFadeDidStop:(id)arg1 finished:(id)arg2 snapshot:(id)arg3;
- (void)_storeAccountDidChange:(id)arg1;
- (void)_updateEnabledBadgesSetWithSections:(id)arg1;
- (void)_updateUninstallingSystemAppsRestricted;
- (void)_updateVisibleIconsViewsForAllowableCloseBoxes;
- (void)_willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)_willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)activateTodayViewWithCompletion:(CDUnknownBlockType)arg1;
- (void)addFolderPresentationObserver:(id)arg1;
- (void)addIcons:(id)arg1 intoFolderIcon:(id)arg2 openFolderOnFinish:(_Bool)arg3 complete:(CDUnknownBlockType)arg4;
- (void)addNewIconToDesignatedLocation:(id)arg1 animate:(_Bool)arg2 scrollToList:(_Bool)arg3 saveIconState:(_Bool)arg4;
- (void)addNewIconsToDesignatedLocations:(id)arg1 saveIconState:(_Bool)arg2;
- (void)addTodayViewPresentationProgressObserver:(id)arg1;
@property(readonly, nonatomic) SBAlertItemsController *alertItemsController;
@property(readonly, nonatomic) SBAlertManager *alertManager;
- (id)allApplications;
- (_Bool)allowsNestedFolders;
- (_Bool)allowsUninstall;
- (void)animateScrollToPageZeroWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)animator:(id)arg1 animationSettingsForOperation:(unsigned long long)arg2 childViewController:(id)arg3;
- (id)appIconForceTouchController:(id)arg1 applicationBundleIdentifierForGestureRecognizer:(id)arg2;
- (id)appIconForceTouchController:(id)arg1 applicationBundleURLForGestureRecognizer:(id)arg2;
- (id)appIconForceTouchController:(id)arg1 applicationShortcutItemsForGestureRecognizer:(id)arg2;
- (id)appIconForceTouchController:(id)arg1 applicationShortcutWidgetBundleIdentifierForGestureRecognizer:(id)arg2;
- (void)appIconForceTouchController:(id)arg1 didDismissForGestureRecognizer:(id)arg2;
- (void)appIconForceTouchController:(id)arg1 didPresentForGestureRecognizer:(id)arg2;
- (double)appIconForceTouchController:(id)arg1 iconImageCornerRadiusForGestureRecognizer:(id)arg2;
- (struct UIEdgeInsets)appIconForceTouchController:(id)arg1 iconImageInsetsForGestureRecognizer:(id)arg2;
- (struct CGRect)appIconForceTouchController:(id)arg1 iconViewFrameForGestureRecognizer:(id)arg2;
- (id)appIconForceTouchController:(id)arg1 newIconViewCopyForGestureRecognizer:(id)arg2;
- (id)appIconForceTouchController:(id)arg1 parallaxSettingsForGestureRecognizer:(id)arg2;
- (_Bool)appIconForceTouchController:(id)arg1 shouldActivateApplicationShortcutItem:(id)arg2 atIndex:(unsigned long long)arg3 forGestureRecognizer:(id)arg4;
- (_Bool)appIconForceTouchController:(id)arg1 shouldHandleGestureRecognizer:(id)arg2;
- (void)appIconForceTouchController:(id)arg1 willDismissForGestureRecognizer:(id)arg2;
- (void)appIconForceTouchController:(id)arg1 willPresentForGestureRecognizer:(id)arg2;
- (struct CGPoint)appIconForceTouchController:(id)arg1 zoomDownCenterForGestureRecognizer:(id)arg2;
- (id)appIconForceTouchController:(id)arg1 zoomDownViewForGestureRecognizer:(id)arg2;
@property(readonly, nonatomic) SBApplicationController *applicationController;
@property(readonly, nonatomic) SBApplicationPlaceholderController *applicationPlaceholderController;
- (void)applicationRestrictionController:(id)arg1 didUpdateVisibleTags:(id)arg2 hiddenTags:(id)arg3;
@property(readonly, nonatomic) SBAssistantController *assistantController;
- (_Bool)canActivateReachability;
- (_Bool)canAddDownloadingIconForApplication:(id)arg1;
- (_Bool)canAddWebClip:(id)arg1;
@property(readonly, nonatomic) _Bool canCloseFolders;
@property(readonly, nonatomic) _Bool canOpenFolders;
- (_Bool)canSaveIconState:(id)arg1;
- (void)cancelAllFolderScrolling;
- (void)clearHighlightedIcon;
- (long long)closeBoxTypeForIconView:(id)arg1;
- (void)closeFolderAnimated:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)compactIconsInIconListsInFolder:(id)arg1 moveNow:(_Bool)arg2 limitToIconList:(id)arg3;
- (void)compactRootIconLists;
- (struct UIEdgeInsets)contentOverlayInsetsFromParentIfAvailableForFolderController:(id)arg1;
- (id)contentView;
- (Class)controllerClassForFolder:(id)arg1;
- (id)createNewFolderFromRecipientIcon:(id)arg1 grabbedIcon:(id)arg2;
- (id)currentFolderIconList;
- (long long)currentFolderIconListIndex;
- (long long)currentIconListIndex;
- (id)currentRootIconList;
@property(readonly, nonatomic) SBHomeScreenIconTransitionAnimator *currentTransitionAnimator;
- (void)dealloc;
- (id)defaultIconState;
@property(retain, nonatomic) NSTimer *delayedLaunchRequestTimer; // @synthesize delayedLaunchRequestTimer=_delayedLaunchRequestTimer;
@property(readonly, copy) NSString *description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (void)didDeleteIconState:(id)arg1;
- (void)didEndTodayViewTransition;
- (void)didSaveIconState:(id)arg1;
- (void)dismissPopOverAnimated:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (_Bool)dismissSpotlightAnimated:(_Bool)arg1 enqueueDismissal:(_Bool)arg2;
- (_Bool)dismissSpotlightOrTodayViewAnimated:(_Bool)arg1;
- (_Bool)dismissSpotlightOrTodayViewAnimated:(_Bool)arg1 enqueueDismissal:(_Bool)arg2;
- (void)dismissTodayViewSearchAnimated:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) SBIconListView *dockListView;
@property(retain, nonatomic) NSTimer *editingEndTimer; // @synthesize editingEndTimer=_editingEndTimer;
@property(readonly, nonatomic) SBIconListView *effectiveDockListView;
- (void)finishInstallingIconAnimated:(_Bool)arg1;
- (id)firstPageLeafIdentifiers;
- (void)fixupBouncedIconsInFolder:(id)arg1 startingWithIndex:(long long)arg2;
- (void)fixupBouncedIconsInFolder:(id)arg1 startingWithIndex:(long long)arg2 options:(unsigned long long)arg3;
@property(readonly, nonatomic) SBIconListView *floatingDockListView;
@property(readonly, nonatomic) SBIconListView *floatingDockSuggestionsListView;
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
- (void)folderControllerDidEndScrolling:(id)arg1;
- (void)folderControllerDidReceiveCancelReachabilityAction:(id)arg1;
- (id)folderControllerForFolder:(id)arg1;
- (void)folderControllerShouldBeginEditing:(id)arg1;
- (void)folderControllerShouldClose:(id)arg1 withPinchGesture:(id)arg2;
- (void)folderControllerShouldEndEditing:(id)arg1;
- (void)folderControllerWillBeginScrolling:(id)arg1;
- (id)folderIconListAtIndex:(unsigned long long)arg1;
- (id)folderNameForDisplayID:(id)arg1;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)getListView:(id *)arg1 folder:(id *)arg2 relativePath:(id *)arg3 forIndexPath:(id)arg4 createIfNecessary:(_Bool)arg5;
- (void)handleHomeButtonTap;
- (void)handleReachabilityModeActivated;
- (void)handleReachabilityModeDeactivated;
- (_Bool)hasAnimatingFolder;
- (_Bool)hasOpenFolder;
- (_Bool)hasOpenFolderInLocation:(long long)arg1;
@property(nonatomic) _Bool hasRestrictedEnforcedLayout; // @synthesize hasRestrictedEnforcedLayout=_hasRestrictedEnforcedLayout;
@property(retain, nonatomic) SBIconView *highlightedIconView; // @synthesize highlightedIconView=_highlightedIconView;
- (id)homescreenIconAccessoryViewMap;
- (id)homescreenIconLabelAccessoryViewMap;
@property(readonly, nonatomic) SBIconViewMap *homescreenIconViewMap;
- (_Bool)icon:(id)arg1 canReceiveGrabbedIcon:(id)arg2;
- (void)icon:(id)arg1 touchEnded:(_Bool)arg2;
- (void)icon:(id)arg1 touchMoved:(id)arg2;
- (id)iconAccessoryViewMapForIconView:(id)arg1;
- (_Bool)iconAllowsBadging:(id)arg1;
- (void)iconCloseBoxTapped:(id)arg1;
@property(readonly, nonatomic) SBIconDragManager *iconDragManager; // @synthesize iconDragManager=_iconDragManager;
- (void)iconDragManager:(id)arg1 didEndDragOriginatingFromIconView:(id)arg2 userDidBeginDrag:(_Bool)arg3 lastUserInteractionDate:(id)arg4;
- (void)iconDragManagerIconDraggingDidChange:(id)arg1;
- (void)iconDragManagerMultiItemIconDraggingDidChange:(id)arg1;
@property(readonly, nonatomic) UIImpactFeedbackGenerator *iconEditingFeedbackBehavior;
@property(retain, nonatomic) NSTimer *iconEditingFeedbackWarmTimer; // @synthesize iconEditingFeedbackWarmTimer=_iconEditingFeedbackWarmTimer;
- (id)iconListViewAtIndex:(unsigned long long)arg1 inFolder:(id)arg2 createIfNecessary:(_Bool)arg3;
- (id)iconModel:(id)arg1 applicationWithBundleIdentifier:(id)arg2;
- (id)iconModel:(id)arg1 customInsertionIndexPathForIcon:(id)arg2 inRootFolder:(id)arg3;
- (_Bool)iconShouldAllowCloseBoxTap:(id)arg1;
- (_Bool)iconShouldAllowTap:(id)arg1;
- (_Bool)iconShouldAllowTap:(id)arg1 disallowedReason:(id *)arg2;
- (void)iconTapped:(id)arg1;
- (id)iconToReveal;
- (void)iconTouchBegan:(id)arg1;
- (_Bool)iconView:(id)arg1 canAddDragItemsToSession:(id)arg2;
- (void)iconView:(id)arg1 didEndDragSession:(id)arg2 withOperation:(unsigned long long)arg3;
- (void)iconView:(id)arg1 dragLiftAnimationDidChangeDirection:(long long)arg2;
- (id)iconView:(id)arg1 iconAccessoryViewOfClass:(Class)arg2;
- (id)iconView:(id)arg1 iconLabelAccessoryViewOfType:(long long)arg2;
- (void)iconView:(id)arg1 session:(id)arg2 willEndWithOperation:(unsigned long long)arg3;
- (void)iconView:(id)arg1 willAddDragItems:(id)arg2 toSession:(id)arg3;
- (void)iconView:(id)arg1 willAnimateDragCancelWithAnimator:(id)arg2;
- (void)iconView:(id)arg1 willAnimateDragLiftWithAnimator:(id)arg2 session:(id)arg3;
- (void)iconView:(id)arg1 willChangeToIcon:(id)arg2;
- (void)iconView:(id)arg1 willRemoveIconAccessoryView:(id)arg2;
- (void)iconView:(id)arg1 willRemoveLabelIconAccessoryView:(id)arg2;
- (void)iconView:(id)arg1 willUseDragPreview:(id)arg2 session:(id)arg3;
- (void)iconView:(id)arg1 willUsePreviewForCancelling:(id)arg2 targetIconView:(id)arg3;
- (_Bool)iconViewCanBeginDrags:(id)arg1;
- (Class)iconViewClassForIcon:(id)arg1 location:(long long)arg2;
- (_Bool)iconViewDisplaysBadges:(id)arg1;
- (_Bool)iconViewDisplaysCloseBox:(id)arg1;
- (id)iconViewForIcon:(id)arg1 location:(long long)arg2;
- (void)iconViewWillBeginDrag:(id)arg1 session:(id)arg2;
- (id)iconViewWillCancelDrag:(id)arg1;
@property(readonly, nonatomic) _Bool iconsShouldAllowCloseBoxes;
- (_Bool)importIconState:(id)arg1;
- (id)initWithApplicationController:(id)arg1 applicationPlaceholderController:(id)arg2 userInterfaceController:(id)arg3 reachabilityManager:(id)arg4 policyAggregator:(id)arg5 alertManager:(id)arg6 alertItemsController:(id)arg7 assistantController:(id)arg8;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)insertIcon:(id)arg1 atIndexPath:(id)arg2 options:(unsigned long long)arg3;
- (id)insertIcon:(id)arg1 intoListView:(id)arg2 iconIndex:(long long)arg3 options:(unsigned long long)arg4;
- (_Bool)isAnimatingForUnscatter;
- (_Bool)isDisplayingIcon:(id)arg1 inLocation:(long long)arg2;
- (_Bool)isEditing;
- (_Bool)isEditingAllowed;
- (_Bool)isFolderScrolling;
- (_Bool)isIconCurrentlyOnscreen:(id)arg1;
@property(readonly, nonatomic, getter=isIconDragging) _Bool iconDragging;
@property(readonly, nonatomic, getter=isIconTouched) _Bool iconTouched;
- (_Bool)isIconVisiblyRepresented:(id)arg1;
- (_Bool)isPerformingCancelledCollapseTransition;
- (_Bool)isPerformingExpandTransition;
- (_Bool)isPresentingPopOver;
- (_Bool)isScrolling;
- (_Bool)isShowingOrTransitioningToTodayView;
- (_Bool)isShowingPullDownOrTodayViewSearch;
- (_Bool)isShowingSpotlightOrTodayView;
- (_Bool)isShowingTodayView;
@property(readonly, nonatomic) _Bool isTransitioning;
@property(readonly, nonatomic, getter=isTransitioningHomeScreenState) _Bool transitioningHomeScreenState;
- (_Bool)isUninstallSupportedForIcon:(id)arg1;
@property(nonatomic, getter=isUninstallingSystemAppsRestricted) _Bool uninstallingSystemAppsRestricted; // @synthesize uninstallingSystemAppsRestricted=_uninstallingSystemAppsRestricted;
- (id)launchActionsForIconView:(id)arg1;
- (id)launchActivationSettingsForIconView:(id)arg1;
- (id)launchURLForIconView:(id)arg1;
- (void)layoutIconLists:(double)arg1 animationType:(long long)arg2 forceRelayout:(_Bool)arg3;
- (void)layoutMonitor:(id)arg1 didUpdateDisplayLayout:(id)arg2 withContext:(id)arg3;
@property(retain, nonatomic) _UILegibilitySettings *legibilitySettings;
- (void)loadView;
- (unsigned long long)maxColCountForListInRootFolderWithInterfaceOrientation:(long long)arg1;
- (unsigned long long)maxIconCountForDock;
- (unsigned long long)maxIconCountForListInFolderClass:(Class)arg1;
- (unsigned long long)maxListCountForFolders;
- (unsigned long long)maxRowCountForListInRootFolderWithInterfaceOrientation:(long long)arg1;
- (double)minimumHomeScreenScaleForFolderController:(id)arg1;
@property(retain, nonatomic) SBIconModel *model;
- (id)nestingViewController:(id)arg1 animationControllerForOperation:(long long)arg2 onViewController:(id)arg3 animated:(_Bool)arg4;
- (id)nestingViewController:(id)arg1 interactionControllerForAnimationController:(id)arg2;
- (void)nestingViewController:(id)arg1 willPerformOperation:(long long)arg2 onViewController:(id)arg3 withTransitionCoordinator:(id)arg4;
- (void)noteIconStateChangedExternally;
- (void)noteViewCovered;
- (void)observer:(id)arg1 noteServerConnectionStateChanged:(_Bool)arg2;
- (void)observer:(id)arg1 updateSectionInfo:(id)arg2;
- (id)openFolder;
- (void)openFolderIcon:(id)arg1 animated:(_Bool)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (long long)orientation;
- (void)performAfterAllIconTouchesFinishedUsingBlock:(CDUnknownBlockType)arg1;
- (id)placeIcon:(id)arg1 atIndexPath:(id)arg2 options:(unsigned long long)arg3;
- (id)placeholdersByDisplayIDForIconModel:(id)arg1;
@property(readonly, nonatomic) SBMainDisplayPolicyAggregator *policyAggregator;
- (void)popExpandedIconFromLocation:(long long)arg1 withTransitionRequest:(id)arg2 animated:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)popExpandedIconWithTransitionRequest:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)popToCurrentRootIconList;
- (void)popToCurrentRootIconListWhenPossible;
@property(retain, nonatomic) NSTimer *popoverDelayTimer; // @synthesize popoverDelayTimer=_popoverDelayTimer;
- (void)popoverPresentationControllerDidDismissPopover:(id)arg1;
- (void)popoverRequestsDismiss:(id)arg1;
- (_Bool)presentSpotlightFromBreadcrumb:(_Bool)arg1 animated:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (_Bool)presentSpotlightFromSource:(unsigned long long)arg1 fromBreadcrumb:(_Bool)arg2 animated:(_Bool)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2;
- (void)profileConnectionDidReceiveProfileListChangedNotification:(id)arg1 userInfo:(id)arg2;
- (void)pushExpandedIcon:(id)arg1 location:(long long)arg2 withTransitionRequest:(id)arg3 animated:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;
@property(readonly, nonatomic) SBReachabilityManager *reachabilityManager;
- (_Bool)relayout;
- (void)removeAllIconAnimations;
- (void)removeFolderPresentationObserver:(id)arg1;
- (void)removeIcon:(id)arg1 options:(unsigned long long)arg2;
- (void)removeIcon:(id)arg1 options:(unsigned long long)arg2 folderRef:(id *)arg3;
- (void)removeTodayViewPresentationProgressObserver:(id)arg1;
- (void)replaceFolderIcon:(id)arg1 byContainedIcon:(id)arg2 animated:(_Bool)arg3;
- (void)replaceIconAtPath:(id)arg1 withIcon:(id)arg2 saveState:(_Bool)arg3;
- (id)requiredContextIDsForDragSessionInIconView:(id)arg1;
- (void)resetCurrentVisibleIconListImageVisibilityAndJitterState;
- (void)restoreScrollingAndRotationAfterUngrab;
- (id)rootFolder;
- (id)rootIconListAtIndex:(long long)arg1;
- (_Bool)scrollToIconListAtIndex:(long long)arg1 animate:(_Bool)arg2;
- (_Bool)scrollToIconListAtIndex:(long long)arg1 animate:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)scrollToIconListContainingIcon:(id)arg1 animate:(_Bool)arg2;
@property(readonly, nonatomic) SBSearchGesture *searchGesture;
- (void)searchGesture:(id)arg1 changedPercentComplete:(double)arg2;
- (void)searchGesture:(id)arg1 completedShowing:(_Bool)arg2;
@property(copy, nonatomic) CDUnknownBlockType searchGestureCompletionHandler; // @synthesize searchGestureCompletionHandler=_searchGestureCompletionHandler;
- (void)setIconToReveal:(id)arg1 revealingPrevious:(_Bool)arg2;
- (void)setIdleModeText:(id)arg1;
- (void)setIsEditing:(_Bool)arg1;
- (void)setIsEditing:(_Bool)arg1 withFeedbackBehavior:(id)arg2;
- (_Bool)shouldAutomaticallyForwardAppearanceMethods;
- (_Bool)shouldAutorotate;
- (_Bool)shouldHighlightTouchedIconView:(id)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)supportsDock;
- (void)todayViewChangedPercentPresented:(double)arg1;
- (void)tryScrollToIconToRevealAnimated:(_Bool)arg1;
- (void)uninstallIcon:(id)arg1;
- (void)uninstallIcon:(id)arg1 animate:(_Bool)arg2;
- (void)uninstallIcon:(id)arg1 animate:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)unscatterAnimated:(_Bool)arg1 afterDelay:(double)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)updateContentViewOrientationAndLayoutIfNeeded;
- (void)updateCurrentIconListIndexAndVisibility;
- (void)updateCurrentIconListIndexAndVisibility:(_Bool)arg1;
- (void)updateNumberOfRowsWithDuration:(double)arg1;
@property(readonly, nonatomic) SBUIController *userInterfaceController;
- (void)viewMap:(id)arg1 configureIconView:(id)arg2;
- (long long)viewMap:(id)arg1 locationForIcon:(id)arg2;
- (unsigned long long)viewMap:(id)arg1 maxRecycledViewsOfClass:(Class)arg2;
- (unsigned long long)viewMap:(id)arg1 numberOfViewsToPrepareOfClass:(Class)arg2;
- (_Bool)viewMap:(id)arg1 shouldRecycleView:(id)arg2;
- (id)viewMapShouldPrepareViewsOfClasses:(id)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (id)visibleIconStateDisplayIdentifiers;
- (void)willBeginTodayViewTransitionToPresent:(_Bool)arg1;
- (id)windowForRecycledViewsInViewMap:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
