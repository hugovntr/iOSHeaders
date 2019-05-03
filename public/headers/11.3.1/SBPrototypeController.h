//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SBVolumePressBandit.h"
#import "_UISettingsKeyObserver.h"

@class NSArray, NSString, SBPrototypeSettingsController, SBPrototypingDefaults, SBRestartManager, SBRootSettings, SBVolumeHardwareButton, UIWindow, _SBFallbackSettingsHelper;

@interface SBPrototypeController : NSObject <SBVolumePressBandit, _UISettingsKeyObserver>
{
    SBPrototypingDefaults *_prototypingDefaults;
    SBRootSettings *_rootSettings;
    UIWindow *_settingsWindow;
    SBPrototypeSettingsController *_settingsController;
    _SBFallbackSettingsHelper *_fallbackHelper;
    NSArray *_testRecipeClassNames;
    id <SBTestRecipe> _activeTestRecipe;
    _Bool _showingSettings;
    _Bool _hasPreviousSettings;
    _Bool _showingSettingsForFallback;
    _Bool _hasActiveEventRouters;
    _Bool _isEnabled;
    id <BSInvalidatable> _idleTimerDisableAssertion;
    SBVolumeHardwareButton *_volumeHardwareButton;
    SBRestartManager *_restartManager;
}

+ (void)migrateSettings;
+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)_changeActiveTestRecipeIfNecessary;
- (_Bool)_hasPreviousSettings;
- (void)_hideSettings;
@property(retain, nonatomic, getter=_idleTimerDisableAssertion, setter=_setIdleTimerDisableAssertion:) id <BSInvalidatable> idleTimerDisableAssertion; // @synthesize idleTimerDisableAssertion=_idleTimerDisableAssertion;
- (void)_installVolumeBanditIfNeeded;
- (void)_maybeToggleEnablement;
- (struct CGRect)_offscreenFrame;
- (void)_resizeToPipSize;
- (_Bool)_restorePreviousSettings;
- (_Bool)_saveWithError:(id *)arg1;
- (void)_showSettings;
- (void)_tearDownSettingsWindow;
- (id)_testRecipeClassNames;
- (void)_updateEventRouters;
- (void)_updatePreventingLockover;
- (void)_updateSettingsAllowed;
- (void)_updateWindowAlpha;
@property(retain, nonatomic) id <SBTestRecipe> activeTestRecipe; // @synthesize activeTestRecipe=_activeTestRecipe;
- (void)dealloc;
- (_Bool)handleKeyHIDEvent:(struct __IOHIDEvent *)arg1;
- (void)handleVolumeDecrease;
- (void)handleVolumeIncrease;
- (id)init;
@property(readonly, nonatomic, getter=isPrototypingEnabled) _Bool prototypingEnabled; // @synthesize prototypingEnabled=_isEnabled;
@property(readonly, nonatomic, getter=isShowingSettingsUI) _Bool showingSettingsUI; // @synthesize showingSettingsUI=_showingSettings;
@property(nonatomic) __weak SBRestartManager *restartManager; // @synthesize restartManager=_restartManager;
- (void)restartSpringBoard;
@property(readonly, nonatomic) SBRootSettings *rootSettings; // @synthesize rootSettings=_rootSettings;
@property(nonatomic) __weak SBVolumeHardwareButton *volumeHardwareButton; // @synthesize volumeHardwareButton=_volumeHardwareButton;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (void)showOrHide;
- (void)showSettingsForFallback;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
