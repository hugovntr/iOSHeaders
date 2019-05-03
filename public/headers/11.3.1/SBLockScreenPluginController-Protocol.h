//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBPluginBundleController.h"
#import "SBUIOptionalLegibility.h"

@class SBLockScreenPluginAction, SBLockScreenPluginContext, SBLockScreenPluginPresentation, UIViewController<SBLockScreenPluginViewController>;

@protocol SBLockScreenPluginController <SBPluginBundleController, SBUIOptionalLegibility>
@property(nonatomic) __weak id <SBLockScreenPluginAgent> pluginAgent;
@property(readonly, nonatomic) id <SBLockScreenPluginAppearance> pluginAppearance;
@property(readonly, nonatomic) long long pluginPriority;
@property(readonly, nonatomic) UIViewController<SBLockScreenPluginViewController> *pluginViewController;

@optional
- (void)pluginDidDeactivateWithContext:(SBLockScreenPluginContext *)arg1;
- (_Bool)pluginHandleEvent:(long long)arg1;
@property(readonly, retain, nonatomic) SBLockScreenPluginAction *pluginUnlockAction;
- (void)pluginWillActivateWithContext:(SBLockScreenPluginContext *)arg1;
- (void)updateForPresentation:(SBLockScreenPluginPresentation *)arg1;
@end
