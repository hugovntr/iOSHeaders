//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBUIMainScreenAnimationController.h"

@class SBWorkspaceApplication, UIView;

@interface SBUIStaticAnimationController : SBUIMainScreenAnimationController
{
    UIView *_staticAppView;
    UIView *_hostView;
}

- (void)_cleanupAnimation;
- (void)_startAnimation;
- (_Bool)_shouldDismissBanner;
- (void)_hideAppHostView;
- (void)_willBeginWaitingForStartDependencies;
- (void)_setupStartDependencies;
- (_Bool)_willAnimate;
@property(readonly, retain, nonatomic) SBWorkspaceApplication *app;
- (void)_applicationDependencyStateChanged;
- (id)_animationProgressDependencies;
- (void)dealloc;
- (id)initWithTransitionContextProvider:(id)arg1;

@end
