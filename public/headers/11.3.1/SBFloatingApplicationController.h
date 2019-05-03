//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SBFloatingApplicationRootViewControllerDelegate.h"
#import "SBLayoutStateTransitionObserver.h"
#import "SBLayoutStateTransitionSceneEntityFrameProvider.h"

@class NSString, SBDeviceApplicationSceneHandle, SBFloatingApplicationRootViewController, SBLayoutStateTransitionContext, UIViewController;

@interface SBFloatingApplicationController : NSObject <SBFloatingApplicationRootViewControllerDelegate, SBLayoutStateTransitionObserver, SBLayoutStateTransitionSceneEntityFrameProvider>
{
    struct {
        unsigned int floatingApplicationController_needsVisibleWindow:1;
    } _internalDelegateRespondsTo;
    SBFloatingApplicationRootViewController *_viewController;
    _Bool _ignoreLayoutStateTransitions;
    SBLayoutStateTransitionContext *_layoutStateTransitionContext;
    id <SBFloatingApplicationControllerInternalDelegate> _internalDelegate;
}

+ (_Bool)isFloatingApplicationSupported;
- (void).cxx_destruct;
- (double)_darkenViewAlpha;
- (id)_deviceApplicationSceneEntityForFloatingApplicationGrabberTongue;
- (id)_deviceApplicationSceneViewController;
- (id)_init;
@property(nonatomic, setter=_setInternalDelegate:) __weak id <SBFloatingApplicationControllerInternalDelegate> _internalDelegate; // @synthesize _internalDelegate;
@property(nonatomic, getter=_isDeviceApplicationSceneViewControllerHidden, setter=_setDeviceApplicationSceneViewControllerHidden:) _Bool _deviceApplicationSceneViewControllerHidden;
- (_Bool)_isIgnoringLayoutStateTransitions;
- (void)_setDarkenViewAlpha:(double)arg1;
- (void)_setIgnoreLayoutStateTransitions:(_Bool)arg1;
- (void)_setPendingBlurView:(id)arg1;
- (void)_updateModal:(_Bool)arg1;
- (void)_updateWindowVisibility:(_Bool)arg1;
@property(readonly, nonatomic) UIViewController *_viewController;
@property(readonly, nonatomic) SBDeviceApplicationSceneHandle *activeDeviceApplicationSceneHandle;
- (struct CGRect)applicationSceneSettingsFrameForInterfaceOrientation:(long long)arg1 floatingConfiguration:(long long)arg2;
- (_Bool)floatingApplicationRootViewController:(id)arg1 allowsPresentScreenEdgePanGestureRecognizerForDeviceApplicationSceneHandle:(id)arg2;
- (void)floatingApplicationRootViewController:(id)arg1 darkenViewTappedForDeviceApplicationSceneHandle:(id)arg2;
- (_Bool)floatingApplicationRootViewController:(id)arg1 requiresGrabberTongueForDeviceApplicationSceneHandle:(id)arg2;
- (_Bool)floatingApplicationRootViewController:(id)arg1 requiresGrabberTongueOutsideGrabberFreeRegionForDeviceApplicationSceneHandle:(id)arg2;
- (void)floatingApplicationRootViewControllerDidCompleteDeviceApplicationSceneHandleSuspendAnimation:(id)arg1;
- (id)init;
@property(readonly, nonatomic, getter=isModal) _Bool modal;
@property(readonly, nonatomic, getter=isStashedWithoutFloatingConfigurationUpdate) _Bool stashedWithoutFloatingConfigurationUpdate;
@property(readonly, nonatomic, getter=isVisible) _Bool visible;
- (void)layoutStateTransitionCoordinator:(id)arg1 transitionDidBeginWithTransitionContext:(id)arg2;
- (void)layoutStateTransitionCoordinator:(id)arg1 transitionDidEndWithTransitionContext:(id)arg2;
- (struct CGRect)sceneEntityFrameForWorkspaceEntity:(id)arg1 inLayoutState:(id)arg2;
- (void)stashActiveDeviceApplicationSceneHandleAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)unstashActiveDeviceApplicationSceneHandleAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
